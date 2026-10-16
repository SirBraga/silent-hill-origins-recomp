#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241E30
// Address: 0x241e30 - 0x241f40
void sub_00241E30_0x241e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241E30_0x241e30");
#endif

    switch (ctx->pc) {
        case 0x241e70u: goto label_241e70;
        case 0x241ea8u: goto label_241ea8;
        case 0x241edcu: goto label_241edc;
        case 0x241eecu: goto label_241eec;
        case 0x241f10u: goto label_241f10;
        case 0x241f20u: goto label_241f20;
        default: break;
    }

    ctx->pc = 0x241e30u;

    // 0x241e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x241e34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x241e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x241e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x241e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x241e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x241e44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x241e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x241e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x241e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241e50: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x241e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x241e54: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x241e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x241e58: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x241e58u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x241e5c: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x241E5Cu;
    {
        const bool branch_taken_0x241e5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x241E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E5Cu;
        // 0x241e60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e5c) {
            ctx->pc = 0x241E78u;
            goto label_241e78;
        }
    }
    ctx->pc = 0x241E64u;
    // 0x241e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e68: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x241E68u;
    SET_GPR_U32(ctx, 31, 0x241E70u);
    ctx->pc = 0x241E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E68u;
    // 0x241e6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x241E68u, 0x241E70u)) {
        return;
    }
    ctx->pc = 0x241E70u;
label_241e70:
    // 0x241e70: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x241E70u;
    {
        const bool branch_taken_0x241e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E70u;
        // 0x241e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e70) {
            ctx->pc = 0x241F24u;
            goto label_241f24;
        }
    }
    ctx->pc = 0x241E78u;
label_241e78:
    // 0x241e78: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x241e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x241e7c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x241e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x241e80: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x241E80u;
    {
        const bool branch_taken_0x241e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e80) {
            ctx->pc = 0x241E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E80u;
            // 0x241e84: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241EB8u;
            goto label_241eb8;
        }
    }
    ctx->pc = 0x241E88u;
    // 0x241e88: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x241e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x241e8c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x241e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x241e90: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x241e90u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x241e94: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x241E94u;
    {
        const bool branch_taken_0x241e94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e94) {
            ctx->pc = 0x241E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E94u;
            // 0x241e98: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241EB8u;
            goto label_241eb8;
        }
    }
    ctx->pc = 0x241E9Cu;
    // 0x241e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ea0: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x241EA0u;
    SET_GPR_U32(ctx, 31, 0x241EA8u);
    ctx->pc = 0x241EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EA0u;
    // 0x241ea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x241EA0u, 0x241EA8u)) {
        return;
    }
    ctx->pc = 0x241EA8u;
label_241ea8:
    // 0x241ea8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x241EA8u;
    {
        const bool branch_taken_0x241ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241ea8) {
            ctx->pc = 0x241EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241EA8u;
            // 0x241eac: 0x92020023  lbu         $v0, 0x23($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241EB8u;
            goto label_241eb8;
        }
    }
    ctx->pc = 0x241EB0u;
    // 0x241eb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x241EB0u;
    {
        const bool branch_taken_0x241eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EB0u;
        // 0x241eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241eb0) {
            ctx->pc = 0x241F24u;
            goto label_241f24;
        }
    }
    ctx->pc = 0x241EB8u;
label_241eb8:
    // 0x241eb8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x241ebc: 0x30440060  andi        $a0, $v0, 0x60
    ctx->pc = 0x241ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x241ec0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x241EC0u;
    {
        const bool branch_taken_0x241ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x241EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EC0u;
        // 0x241ec4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ec0) {
            ctx->pc = 0x241ED0u;
            goto label_241ed0;
        }
    }
    ctx->pc = 0x241EC8u;
    // 0x241ec8: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241EC8u;
    {
        const bool branch_taken_0x241ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x241ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EC8u;
        // 0x241ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ec8) {
            ctx->pc = 0x241EE4u;
            goto label_241ee4;
        }
    }
    ctx->pc = 0x241ED0u;
label_241ed0:
    // 0x241ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x241ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ed4: 0xc0905e0  jal         func_241780
    ctx->pc = 0x241ED4u;
    SET_GPR_U32(ctx, 31, 0x241EDCu);
    ctx->pc = 0x241ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241ED4u;
    // 0x241ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x241780u, 0x241ED4u, 0x241EDCu)) {
        return;
    }
    ctx->pc = 0x241EDCu;
label_241edc:
    // 0x241edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x241EDCu;
    {
        const bool branch_taken_0x241edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EDCu;
        // 0x241ee0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241edc) {
            ctx->pc = 0x241EF0u;
            goto label_241ef0;
        }
    }
    ctx->pc = 0x241EE4u;
label_241ee4:
    // 0x241ee4: 0xc090674  jal         func_2419D0
    ctx->pc = 0x241EE4u;
    SET_GPR_U32(ctx, 31, 0x241EECu);
    ctx->pc = 0x241EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EE4u;
    // 0x241ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2419D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2419D0u, 0x241EE4u, 0x241EECu)) {
        return;
    }
    ctx->pc = 0x241EECu;
label_241eec:
    // 0x241eec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241ef0:
    // 0x241ef0: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x241ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x241ef4: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x241ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x241ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241EF8u;
    {
        const bool branch_taken_0x241ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ef8) {
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241F00u;
    // 0x241f00: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x241F00u;
    {
        const bool branch_taken_0x241f00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f00) {
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241F08u;
    // 0x241f08: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x241F08u;
    SET_GPR_U32(ctx, 31, 0x241F10u);
    ctx->pc = 0x241F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F08u;
    // 0x241f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x241F08u, 0x241F10u)) {
        return;
    }
    ctx->pc = 0x241F10u;
label_241f10:
    // 0x241f10: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x241F10u;
    {
        const bool branch_taken_0x241f10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x241F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F10u;
        // 0x241f14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f10) {
            ctx->pc = 0x241F24u;
            goto label_241f24;
        }
    }
    ctx->pc = 0x241F18u;
    // 0x241f18: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x241F18u;
    SET_GPR_U32(ctx, 31, 0x241F20u);
    ctx->pc = 0x241F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F18u;
    // 0x241f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x241F18u, 0x241F20u)) {
        return;
    }
    ctx->pc = 0x241F20u;
label_241f20:
    // 0x241f20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241f24:
    // 0x241f24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x241f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241f28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x241f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241f30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x241f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241f38: 0x3e00008  jr          $ra
    ctx->pc = 0x241F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F38u;
        // 0x241f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241F40u;
}
