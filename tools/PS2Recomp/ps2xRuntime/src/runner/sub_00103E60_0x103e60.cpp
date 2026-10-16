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

// Function: sub_00103E60
// Address: 0x103e60 - 0x104148
void sub_00103E60_0x103e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103E60_0x103e60");
#endif

    switch (ctx->pc) {
        case 0x103e80u: goto label_103e80;
        case 0x103eb4u: goto label_103eb4;
        case 0x103ec8u: goto label_103ec8;
        case 0x103f18u: goto label_103f18;
        case 0x103f40u: goto label_103f40;
        case 0x103f50u: goto label_103f50;
        case 0x103f68u: goto label_103f68;
        case 0x103f70u: goto label_103f70;
        case 0x103f88u: goto label_103f88;
        case 0x103f98u: goto label_103f98;
        case 0x103fb0u: goto label_103fb0;
        case 0x103fccu: goto label_103fcc;
        case 0x103fdcu: goto label_103fdc;
        case 0x103ff4u: goto label_103ff4;
        case 0x104030u: goto label_104030;
        case 0x10404cu: goto label_10404c;
        case 0x10405cu: goto label_10405c;
        case 0x104074u: goto label_104074;
        case 0x10407cu: goto label_10407c;
        case 0x1040b0u: goto label_1040b0;
        case 0x1040d4u: goto label_1040d4;
        case 0x1040fcu: goto label_1040fc;
        case 0x10410cu: goto label_10410c;
        case 0x104124u: goto label_104124;
        case 0x10412cu: goto label_10412c;
        default: break;
    }

    ctx->pc = 0x103e60u;

    // 0x103e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103e64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x103e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x103e68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x103e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x103e6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x103e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x103e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103e78: 0xc04ee86  jal         func_13BA18
    ctx->pc = 0x103E78u;
    SET_GPR_U32(ctx, 31, 0x103E80u);
    ctx->pc = 0x103E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E78u;
    // 0x103e7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BA18u, 0x103E78u, 0x103E80u)) {
        return;
    }
    ctx->pc = 0x103E80u;
label_103e80:
    // 0x103e80: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x103e84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103e88: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x103e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x103e8c: 0x54830016  bnel        $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x103E8Cu;
    {
        const bool branch_taken_0x103e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x103e8c) {
            ctx->pc = 0x103E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E8Cu;
            // 0x103e90: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103EE8u;
            goto label_103ee8;
        }
    }
    ctx->pc = 0x103E94u;
    // 0x103e94: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x103e98: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103E98u;
    {
        const bool branch_taken_0x103e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E98u;
        // 0x103e9c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e98) {
            ctx->pc = 0x103EB4u;
            goto label_103eb4;
        }
    }
    ctx->pc = 0x103EA0u;
    // 0x103ea0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x103ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x103ea4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x103EA4u;
    {
        const bool branch_taken_0x103ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103ea4) {
            ctx->pc = 0x103EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EA4u;
            // 0x103ea8: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103EB8u;
            goto label_103eb8;
        }
    }
    ctx->pc = 0x103EACu;
    // 0x103eac: 0xc041fd6  jal         func_107F58
    ctx->pc = 0x103EACu;
    SET_GPR_U32(ctx, 31, 0x103EB4u);
    ctx->pc = 0x107F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107F58u, 0x103EACu, 0x103EB4u)) {
        return;
    }
    ctx->pc = 0x103EB4u;
label_103eb4:
    // 0x103eb4: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x103eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_103eb8:
    // 0x103eb8: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x103EB8u;
    {
        const bool branch_taken_0x103eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB8u;
        // 0x103ebc: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103eb8) {
            ctx->pc = 0x10412Cu;
            goto label_10412c;
        }
    }
    ctx->pc = 0x103EC0u;
    // 0x103ec0: 0xc041f0e  jal         func_107C38
    ctx->pc = 0x103EC0u;
    SET_GPR_U32(ctx, 31, 0x103EC8u);
    ctx->pc = 0x103EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EC0u;
    // 0x103ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C38u, 0x103EC0u, 0x103EC8u)) {
        return;
    }
    ctx->pc = 0x103EC8u;
label_103ec8:
    // 0x103ec8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x103ec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ecc: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x103eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x103ed0: 0x50430097  beql        $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x103ED0u;
    {
        const bool branch_taken_0x103ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x103ed0) {
            ctx->pc = 0x103ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103ED0u;
            // 0x103ed4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x103ED8u;
    // 0x103ed8: 0x54600095  bnel        $v1, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x103ED8u;
    {
        const bool branch_taken_0x103ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x103ed8) {
            ctx->pc = 0x103EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103ED8u;
            // 0x103edc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x103EE0u;
    // 0x103ee0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x103EE0u;
    {
        const bool branch_taken_0x103ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EE0u;
        // 0x103ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ee0) {
            ctx->pc = 0x103FC4u;
            goto label_103fc4;
        }
    }
    ctx->pc = 0x103EE8u;
label_103ee8:
    // 0x103ee8: 0x50820054  beql        $a0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x103EE8u;
    {
        const bool branch_taken_0x103ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x103ee8) {
            ctx->pc = 0x103EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EE8u;
            // 0x103eec: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10403Cu;
            goto label_10403c;
        }
    }
    ctx->pc = 0x103EF0u;
    // 0x103ef0: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x103ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x103ef4: 0x54820020  bnel        $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x103EF4u;
    {
        const bool branch_taken_0x103ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x103ef4) {
            ctx->pc = 0x103EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EF4u;
            // 0x103ef8: 0x8e2200ec  lw          $v0, 0xEC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F78u;
            goto label_103f78;
        }
    }
    ctx->pc = 0x103EFCu;
    // 0x103efc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x103efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x103f00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x103F00u;
    {
        const bool branch_taken_0x103f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F00u;
        // 0x103f04: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f00) {
            ctx->pc = 0x103F24u;
            goto label_103f24;
        }
    }
    ctx->pc = 0x103F08u;
    // 0x103f08: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x103f0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x103f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103f10: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x103F10u;
    SET_GPR_U32(ctx, 31, 0x103F18u);
    ctx->pc = 0x103F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F10u;
    // 0x103f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x103F10u, 0x103F18u)) {
        return;
    }
    ctx->pc = 0x103F18u;
label_103f18:
    // 0x103f18: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x103f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x103f1c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x103f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x103f20: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x103f20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_103f24:
    // 0x103f24: 0x12400082  beqz        $s2, . + 4 + (0x82 << 2)
    ctx->pc = 0x103F24u;
    {
        const bool branch_taken_0x103f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F24u;
        // 0x103f28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f24) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x103F2Cu;
    // 0x103f2c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x103f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x103f30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103F30u;
    {
        const bool branch_taken_0x103f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F30u;
        // 0x103f34: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f30) {
            ctx->pc = 0x103F68u;
            goto label_103f68;
        }
    }
    ctx->pc = 0x103F38u;
    // 0x103f38: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x103F38u;
    SET_GPR_U32(ctx, 31, 0x103F40u);
    ctx->pc = 0x103F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F38u;
    // 0x103f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x103F38u, 0x103F40u)) {
        return;
    }
    ctx->pc = 0x103F40u;
label_103f40:
    // 0x103f40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x103F40u;
    {
        const bool branch_taken_0x103f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103f40) {
            ctx->pc = 0x103F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F40u;
            // 0x103f44: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F54u;
            goto label_103f54;
        }
    }
    ctx->pc = 0x103F48u;
    // 0x103f48: 0xc077968  jal         func_1DE5A0
    ctx->pc = 0x103F48u;
    SET_GPR_U32(ctx, 31, 0x103F50u);
    ctx->pc = 0x103F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F48u;
    // 0x103f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE5A0u, 0x103F48u, 0x103F50u)) {
        return;
    }
    ctx->pc = 0x103F50u;
label_103f50:
    // 0x103f50: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x103f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_103f54:
    // 0x103f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103F54u;
    {
        const bool branch_taken_0x103f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F54u;
        // 0x103f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f54) {
            ctx->pc = 0x103F68u;
            goto label_103f68;
        }
    }
    ctx->pc = 0x103F5Cu;
    // 0x103f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f60: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x103F60u;
    SET_GPR_U32(ctx, 31, 0x103F68u);
    ctx->pc = 0x103F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F60u;
    // 0x103f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x103F60u, 0x103F68u)) {
        return;
    }
    ctx->pc = 0x103F68u;
label_103f68:
    // 0x103f68: 0xc041f48  jal         func_107D20
    ctx->pc = 0x103F68u;
    SET_GPR_U32(ctx, 31, 0x103F70u);
    ctx->pc = 0x103F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F68u;
    // 0x103f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107D20u, 0x103F68u, 0x103F70u)) {
        return;
    }
    ctx->pc = 0x103F70u;
label_103f70:
    // 0x103f70: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x103F70u;
    {
        const bool branch_taken_0x103f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F70u;
        // 0x103f74: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f70) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x103F78u;
label_103f78:
    // 0x103f78: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103F78u;
    {
        const bool branch_taken_0x103f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x103f78) {
            ctx->pc = 0x103F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F78u;
            // 0x103f7c: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103FB8u;
            goto label_103fb8;
        }
    }
    ctx->pc = 0x103F80u;
    // 0x103f80: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x103F80u;
    SET_GPR_U32(ctx, 31, 0x103F88u);
    ctx->pc = 0x103F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F80u;
    // 0x103f84: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x103F80u, 0x103F88u)) {
        return;
    }
    ctx->pc = 0x103F88u;
label_103f88:
    // 0x103f88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x103F88u;
    {
        const bool branch_taken_0x103f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103f88) {
            ctx->pc = 0x103F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F88u;
            // 0x103f8c: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F9Cu;
            goto label_103f9c;
        }
    }
    ctx->pc = 0x103F90u;
    // 0x103f90: 0xc07795e  jal         func_1DE578
    ctx->pc = 0x103F90u;
    SET_GPR_U32(ctx, 31, 0x103F98u);
    ctx->pc = 0x103F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F90u;
    // 0x103f94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE578u, 0x103F90u, 0x103F98u)) {
        return;
    }
    ctx->pc = 0x103F98u;
label_103f98:
    // 0x103f98: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x103f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_103f9c:
    // 0x103f9c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x103F9Cu;
    {
        const bool branch_taken_0x103f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F9Cu;
        // 0x103fa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f9c) {
            ctx->pc = 0x10412Cu;
            goto label_10412c;
        }
    }
    ctx->pc = 0x103FA4u;
    // 0x103fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fa8: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x103FA8u;
    SET_GPR_U32(ctx, 31, 0x103FB0u);
    ctx->pc = 0x103FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FA8u;
    // 0x103fac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x103FA8u, 0x103FB0u)) {
        return;
    }
    ctx->pc = 0x103FB0u;
label_103fb0:
    // 0x103fb0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x103FB0u;
    {
        const bool branch_taken_0x103fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FB0u;
        // 0x103fb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fb0) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x103FB8u;
label_103fb8:
    // 0x103fb8: 0x54820010  bnel        $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x103FB8u;
    {
        const bool branch_taken_0x103fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x103fb8) {
            ctx->pc = 0x103FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103FB8u;
            // 0x103fbc: 0x8e2500fc  lw          $a1, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103FFCu;
            goto label_103ffc;
        }
    }
    ctx->pc = 0x103FC0u;
    // 0x103fc0: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x103fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_103fc4:
    // 0x103fc4: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x103FC4u;
    SET_GPR_U32(ctx, 31, 0x103FCCu);
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x103FC4u, 0x103FCCu)) {
        return;
    }
    ctx->pc = 0x103FCCu;
label_103fcc:
    // 0x103fcc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x103FCCu;
    {
        const bool branch_taken_0x103fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103fcc) {
            ctx->pc = 0x103FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103FCCu;
            // 0x103fd0: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103FE0u;
            goto label_103fe0;
        }
    }
    ctx->pc = 0x103FD4u;
    // 0x103fd4: 0xc077968  jal         func_1DE5A0
    ctx->pc = 0x103FD4u;
    SET_GPR_U32(ctx, 31, 0x103FDCu);
    ctx->pc = 0x103FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FD4u;
    // 0x103fd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE5A0u, 0x103FD4u, 0x103FDCu)) {
        return;
    }
    ctx->pc = 0x103FDCu;
label_103fdc:
    // 0x103fdc: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x103fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_103fe0:
    // 0x103fe0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x103FE0u;
    {
        const bool branch_taken_0x103fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE0u;
        // 0x103fe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe0) {
            ctx->pc = 0x10412Cu;
            goto label_10412c;
        }
    }
    ctx->pc = 0x103FE8u;
    // 0x103fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fec: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x103FECu;
    SET_GPR_U32(ctx, 31, 0x103FF4u);
    ctx->pc = 0x103FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FECu;
    // 0x103ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x103FECu, 0x103FF4u)) {
        return;
    }
    ctx->pc = 0x103FF4u;
label_103ff4:
    // 0x103ff4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x103FF4u;
    {
        const bool branch_taken_0x103ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FF4u;
        // 0x103ff8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ff4) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x103FFCu;
label_103ffc:
    // 0x103ffc: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x103FFCu;
    {
        const bool branch_taken_0x103ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x104000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FFCu;
        // 0x104000: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ffc) {
            ctx->pc = 0x10412Cu;
            goto label_10412c;
        }
    }
    ctx->pc = 0x104004u;
    // 0x104004: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x104004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x104008: 0x5483001e  bnel        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x104008u;
    {
        const bool branch_taken_0x104008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x104008) {
            ctx->pc = 0x10400Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104008u;
            // 0x10400c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104084u;
            goto label_104084;
        }
    }
    ctx->pc = 0x104010u;
    // 0x104010: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104014: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x104014u;
    {
        const bool branch_taken_0x104014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x104014) {
            ctx->pc = 0x104018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104014u;
            // 0x104018: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x10401Cu;
    // 0x10401c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104020: 0x50800043  beql        $a0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x104020u;
    {
        const bool branch_taken_0x104020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x104020) {
            ctx->pc = 0x104024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104020u;
            // 0x104024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x104028u;
    // 0x104028: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x104028u;
    SET_GPR_U32(ctx, 31, 0x104030u);
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x104028u, 0x104030u)) {
        return;
    }
    ctx->pc = 0x104030u;
label_104030:
    // 0x104030: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x104030u;
    {
        const bool branch_taken_0x104030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104030u;
        // 0x104034: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104030) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x104038u;
    // 0x104038: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x104038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_10403c:
    // 0x10403c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10403Cu;
    {
        const bool branch_taken_0x10403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10403Cu;
        // 0x104040: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10403c) {
            ctx->pc = 0x104074u;
            goto label_104074;
        }
    }
    ctx->pc = 0x104044u;
    // 0x104044: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x104044u;
    SET_GPR_U32(ctx, 31, 0x10404Cu);
    ctx->pc = 0x104048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104044u;
    // 0x104048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x104044u, 0x10404Cu)) {
        return;
    }
    ctx->pc = 0x10404Cu;
label_10404c:
    // 0x10404c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10404Cu;
    {
        const bool branch_taken_0x10404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10404c) {
            ctx->pc = 0x104050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10404Cu;
            // 0x104050: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104060u;
            goto label_104060;
        }
    }
    ctx->pc = 0x104054u;
    // 0x104054: 0xc07795e  jal         func_1DE578
    ctx->pc = 0x104054u;
    SET_GPR_U32(ctx, 31, 0x10405Cu);
    ctx->pc = 0x104058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104054u;
    // 0x104058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE578u, 0x104054u, 0x10405Cu)) {
        return;
    }
    ctx->pc = 0x10405Cu;
label_10405c:
    // 0x10405c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x10405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_104060:
    // 0x104060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104060u;
    {
        const bool branch_taken_0x104060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104060u;
        // 0x104064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104060) {
            ctx->pc = 0x104074u;
            goto label_104074;
        }
    }
    ctx->pc = 0x104068u;
    // 0x104068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10406c: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x10406Cu;
    SET_GPR_U32(ctx, 31, 0x104074u);
    ctx->pc = 0x104070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10406Cu;
    // 0x104070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x10406Cu, 0x104074u)) {
        return;
    }
    ctx->pc = 0x104074u;
label_104074:
    // 0x104074: 0xc041f10  jal         func_107C40
    ctx->pc = 0x104074u;
    SET_GPR_U32(ctx, 31, 0x10407Cu);
    ctx->pc = 0x104078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104074u;
    // 0x104078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x104074u, 0x10407Cu)) {
        return;
    }
    ctx->pc = 0x10407Cu;
label_10407c:
    // 0x10407c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x10407Cu;
    {
        const bool branch_taken_0x10407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10407Cu;
        // 0x104080: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10407c) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x104084u;
label_104084:
    // 0x104084: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x104084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x104088: 0x54830029  bnel        $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x104088u;
    {
        const bool branch_taken_0x104088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x104088) {
            ctx->pc = 0x10408Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104088u;
            // 0x10408c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x104090u;
    // 0x104090: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x104090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104094: 0x50800026  beql        $a0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x104094u;
    {
        const bool branch_taken_0x104094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x104094) {
            ctx->pc = 0x104098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104094u;
            // 0x104098: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x10409Cu;
    // 0x10409c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1040a0: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1040A0u;
    {
        const bool branch_taken_0x1040a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1040a0) {
            ctx->pc = 0x1040A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040A0u;
            // 0x1040a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x1040A8u;
    // 0x1040a8: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1040A8u;
    SET_GPR_U32(ctx, 31, 0x1040B0u);
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1040A8u, 0x1040B0u)) {
        return;
    }
    ctx->pc = 0x1040B0u;
label_1040b0:
    // 0x1040b0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1040B0u;
    {
        const bool branch_taken_0x1040b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B0u;
        // 0x1040b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040b0) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x1040B8u;
    // 0x1040b8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x1040b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1040bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1040BCu;
    {
        const bool branch_taken_0x1040bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040BCu;
        // 0x1040c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040bc) {
            ctx->pc = 0x1040E0u;
            goto label_1040e0;
        }
    }
    ctx->pc = 0x1040C4u;
    // 0x1040c4: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x1040c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1040c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1040c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1040cc: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x1040CCu;
    SET_GPR_U32(ctx, 31, 0x1040D4u);
    ctx->pc = 0x1040D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040CCu;
    // 0x1040d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x1040CCu, 0x1040D4u)) {
        return;
    }
    ctx->pc = 0x1040D4u;
label_1040d4:
    // 0x1040d4: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x1040d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x1040d8: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1040d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1040dc: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x1040dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_1040e0:
    // 0x1040e0: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1040E0u;
    {
        const bool branch_taken_0x1040e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040E0u;
        // 0x1040e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040e0) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x1040E8u;
    // 0x1040e8: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1040e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1040ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1040ECu;
    {
        const bool branch_taken_0x1040ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040ECu;
        // 0x1040f0: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040ec) {
            ctx->pc = 0x104124u;
            goto label_104124;
        }
    }
    ctx->pc = 0x1040F4u;
    // 0x1040f4: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x1040F4u;
    SET_GPR_U32(ctx, 31, 0x1040FCu);
    ctx->pc = 0x1040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040F4u;
    // 0x1040f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x1040F4u, 0x1040FCu)) {
        return;
    }
    ctx->pc = 0x1040FCu;
label_1040fc:
    // 0x1040fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1040FCu;
    {
        const bool branch_taken_0x1040fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1040fc) {
            ctx->pc = 0x104100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040FCu;
            // 0x104100: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104110u;
            goto label_104110;
        }
    }
    ctx->pc = 0x104104u;
    // 0x104104: 0xc077968  jal         func_1DE5A0
    ctx->pc = 0x104104u;
    SET_GPR_U32(ctx, 31, 0x10410Cu);
    ctx->pc = 0x104108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104104u;
    // 0x104108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE5A0u, 0x104104u, 0x10410Cu)) {
        return;
    }
    ctx->pc = 0x10410Cu;
label_10410c:
    // 0x10410c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_104110:
    // 0x104110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104110u;
    {
        const bool branch_taken_0x104110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104110u;
        // 0x104114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104110) {
            ctx->pc = 0x104124u;
            goto label_104124;
        }
    }
    ctx->pc = 0x104118u;
    // 0x104118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10411c: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x10411Cu;
    SET_GPR_U32(ctx, 31, 0x104124u);
    ctx->pc = 0x104120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10411Cu;
    // 0x104120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x10411Cu, 0x104124u)) {
        return;
    }
    ctx->pc = 0x104124u;
label_104124:
    // 0x104124: 0xc041f48  jal         func_107D20
    ctx->pc = 0x104124u;
    SET_GPR_U32(ctx, 31, 0x10412Cu);
    ctx->pc = 0x104128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104124u;
    // 0x104128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107D20u, 0x104124u, 0x10412Cu)) {
        return;
    }
    ctx->pc = 0x10412Cu;
label_10412c:
    // 0x10412c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10412cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_104130:
    // 0x104130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x104130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104134: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x104134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10413c: 0x3e00008  jr          $ra
    ctx->pc = 0x10413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10413Cu;
        // 0x104140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104144u;
    // 0x104144: 0x0  nop
    ctx->pc = 0x104144u;
    // NOP
    ctx->pc = 0x104148u;
}
