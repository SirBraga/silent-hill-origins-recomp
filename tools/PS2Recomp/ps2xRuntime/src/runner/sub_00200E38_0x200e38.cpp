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

// Function: sub_00200E38
// Address: 0x200e38 - 0x200f40
void sub_00200E38_0x200e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E38_0x200e38");
#endif

    switch (ctx->pc) {
        case 0x200e38u: goto label_200e38;
        case 0x200e3cu: goto label_200e3c;
        case 0x200e40u: goto label_200e40;
        case 0x200e44u: goto label_200e44;
        case 0x200e48u: goto label_200e48;
        case 0x200e4cu: goto label_200e4c;
        case 0x200e50u: goto label_200e50;
        case 0x200e54u: goto label_200e54;
        case 0x200e58u: goto label_200e58;
        case 0x200e5cu: goto label_200e5c;
        case 0x200e60u: goto label_200e60;
        case 0x200e64u: goto label_200e64;
        case 0x200e68u: goto label_200e68;
        case 0x200e6cu: goto label_200e6c;
        case 0x200e70u: goto label_200e70;
        case 0x200e74u: goto label_200e74;
        case 0x200e78u: goto label_200e78;
        case 0x200e7cu: goto label_200e7c;
        case 0x200e80u: goto label_200e80;
        case 0x200e84u: goto label_200e84;
        case 0x200e88u: goto label_200e88;
        case 0x200e8cu: goto label_200e8c;
        case 0x200e90u: goto label_200e90;
        case 0x200e94u: goto label_200e94;
        case 0x200e98u: goto label_200e98;
        case 0x200e9cu: goto label_200e9c;
        case 0x200ea0u: goto label_200ea0;
        case 0x200ea4u: goto label_200ea4;
        case 0x200ea8u: goto label_200ea8;
        case 0x200eacu: goto label_200eac;
        case 0x200eb0u: goto label_200eb0;
        case 0x200eb4u: goto label_200eb4;
        case 0x200eb8u: goto label_200eb8;
        case 0x200ebcu: goto label_200ebc;
        case 0x200ec0u: goto label_200ec0;
        case 0x200ec4u: goto label_200ec4;
        case 0x200ec8u: goto label_200ec8;
        case 0x200eccu: goto label_200ecc;
        case 0x200ed0u: goto label_200ed0;
        case 0x200ed4u: goto label_200ed4;
        case 0x200ed8u: goto label_200ed8;
        case 0x200edcu: goto label_200edc;
        case 0x200ee0u: goto label_200ee0;
        case 0x200ee4u: goto label_200ee4;
        case 0x200ee8u: goto label_200ee8;
        case 0x200eecu: goto label_200eec;
        case 0x200ef0u: goto label_200ef0;
        case 0x200ef4u: goto label_200ef4;
        case 0x200ef8u: goto label_200ef8;
        case 0x200efcu: goto label_200efc;
        case 0x200f00u: goto label_200f00;
        case 0x200f04u: goto label_200f04;
        case 0x200f08u: goto label_200f08;
        case 0x200f0cu: goto label_200f0c;
        case 0x200f10u: goto label_200f10;
        case 0x200f14u: goto label_200f14;
        case 0x200f18u: goto label_200f18;
        case 0x200f1cu: goto label_200f1c;
        case 0x200f20u: goto label_200f20;
        case 0x200f24u: goto label_200f24;
        case 0x200f28u: goto label_200f28;
        case 0x200f2cu: goto label_200f2c;
        case 0x200f30u: goto label_200f30;
        case 0x200f34u: goto label_200f34;
        case 0x200f38u: goto label_200f38;
        case 0x200f3cu: goto label_200f3c;
        default: break;
    }

    ctx->pc = 0x200e38u;

label_200e38:
    // 0x200e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_200e3c:
    // 0x200e3c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x200e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_200e40:
    // 0x200e40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x200e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_200e44:
    // 0x200e44: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x200e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_200e48:
    // 0x200e48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200e4c:
    // 0x200e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_200e50:
    // 0x200e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200e54:
    // 0x200e54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x200e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_200e58:
    // 0x200e58: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_200e5c:
    // 0x200e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200e60:
    // 0x200e60: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x200e60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_200e64:
    // 0x200e64: 0x24843630  addiu       $a0, $a0, 0x3630
    ctx->pc = 0x200e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13872));
label_200e68:
    // 0x200e68: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_200e6c:
    // 0x200e6c: 0x40f809  jalr        $v0
label_200e70:
    if (ctx->pc == 0x200E70u) {
        ctx->pc = 0x200E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E6Cu;
        // 0x200e70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E74u;
        goto label_200e74;
    }
    ctx->pc = 0x200E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200E74u);
        ctx->pc = 0x200E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E6Cu;
        // 0x200e70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200E6Cu, 0x200E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200E74u;
label_200e74:
    // 0x200e74: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_200e78:
    if (ctx->pc == 0x200E78u) {
        ctx->pc = 0x200E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E74u;
        // 0x200e78: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E7Cu;
        goto label_200e7c;
    }
    ctx->pc = 0x200E74u;
    {
        const bool branch_taken_0x200e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200e74) {
            ctx->pc = 0x200E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200E74u;
            // 0x200e78: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200EC4u;
            goto label_200ec4;
        }
    }
    ctx->pc = 0x200E7Cu;
label_200e7c:
    // 0x200e7c: 0xc0955ca  jal         func_255728
label_200e80:
    if (ctx->pc == 0x200E80u) {
        ctx->pc = 0x200E84u;
        goto label_200e84;
    }
    ctx->pc = 0x200E7Cu;
    SET_GPR_U32(ctx, 31, 0x200E84u);
    ctx->pc = 0x255728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255728u, 0x200E7Cu, 0x200E84u)) {
        return;
    }
    ctx->pc = 0x200E84u;
label_200e84:
    // 0x200e84: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_200e88:
    // 0x200e88: 0xc095556  jal         func_255558
label_200e8c:
    if (ctx->pc == 0x200E8Cu) {
        ctx->pc = 0x200E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E88u;
        // 0x200e8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E90u;
        goto label_200e90;
    }
    ctx->pc = 0x200E88u;
    SET_GPR_U32(ctx, 31, 0x200E90u);
    ctx->pc = 0x200E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E88u;
    // 0x200e8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255558u, 0x200E88u, 0x200E90u)) {
        return;
    }
    ctx->pc = 0x200E90u;
label_200e90:
    // 0x200e90: 0xc089892  jal         func_226248
label_200e94:
    if (ctx->pc == 0x200E94u) {
        ctx->pc = 0x200E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E90u;
        // 0x200e94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E98u;
        goto label_200e98;
    }
    ctx->pc = 0x200E90u;
    SET_GPR_U32(ctx, 31, 0x200E98u);
    ctx->pc = 0x200E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E90u;
    // 0x200e94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x200E90u, 0x200E98u)) {
        return;
    }
    ctx->pc = 0x200E98u;
label_200e98:
    // 0x200e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200e9c:
    // 0x200e9c: 0xc089a04  jal         func_226810
label_200ea0:
    if (ctx->pc == 0x200EA0u) {
        ctx->pc = 0x200EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E9Cu;
        // 0x200ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EA4u;
        goto label_200ea4;
    }
    ctx->pc = 0x200E9Cu;
    SET_GPR_U32(ctx, 31, 0x200EA4u);
    ctx->pc = 0x200EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E9Cu;
    // 0x200ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x200E9Cu, 0x200EA4u)) {
        return;
    }
    ctx->pc = 0x200EA4u;
label_200ea4:
    // 0x200ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200ea8:
    // 0x200ea8: 0xc0957f0  jal         func_255FC0
label_200eac:
    if (ctx->pc == 0x200EACu) {
        ctx->pc = 0x200EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EA8u;
        // 0x200eac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EB0u;
        goto label_200eb0;
    }
    ctx->pc = 0x200EA8u;
    SET_GPR_U32(ctx, 31, 0x200EB0u);
    ctx->pc = 0x200EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EA8u;
    // 0x200eac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x200EA8u, 0x200EB0u)) {
        return;
    }
    ctx->pc = 0x200EB0u;
label_200eb0:
    // 0x200eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200eb4:
    // 0x200eb4: 0xc095622  jal         func_255888
label_200eb8:
    if (ctx->pc == 0x200EB8u) {
        ctx->pc = 0x200EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EB4u;
        // 0x200eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EBCu;
        goto label_200ebc;
    }
    ctx->pc = 0x200EB4u;
    SET_GPR_U32(ctx, 31, 0x200EBCu);
    ctx->pc = 0x200EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EB4u;
    // 0x200eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255888u, 0x200EB4u, 0x200EBCu)) {
        return;
    }
    ctx->pc = 0x200EBCu;
label_200ebc:
    // 0x200ebc: 0x1000000a  b           . + 4 + (0xA << 2)
label_200ec0:
    if (ctx->pc == 0x200EC0u) {
        ctx->pc = 0x200EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EBCu;
        // 0x200ec0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EC4u;
        goto label_200ec4;
    }
    ctx->pc = 0x200EBCu;
    {
        const bool branch_taken_0x200ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EBCu;
        // 0x200ec0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ebc) {
            ctx->pc = 0x200EE8u;
            goto label_200ee8;
        }
    }
    ctx->pc = 0x200EC4u;
label_200ec4:
    // 0x200ec4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x200ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_200ec8:
    // 0x200ec8: 0x24843640  addiu       $a0, $a0, 0x3640
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
label_200ecc:
    // 0x200ecc: 0x40f809  jalr        $v0
label_200ed0:
    if (ctx->pc == 0x200ED0u) {
        ctx->pc = 0x200ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ECCu;
        // 0x200ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ED4u;
        goto label_200ed4;
    }
    ctx->pc = 0x200ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200ED4u);
        ctx->pc = 0x200ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ECCu;
        // 0x200ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200ECCu, 0x200ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200ED4u;
label_200ed4:
    // 0x200ed4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_200ed8:
    if (ctx->pc == 0x200ED8u) {
        ctx->pc = 0x200EDCu;
        goto label_200edc;
    }
    ctx->pc = 0x200ED4u;
    {
        const bool branch_taken_0x200ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200ed4) {
            ctx->pc = 0x200EE8u;
            goto label_200ee8;
        }
    }
    ctx->pc = 0x200EDCu;
label_200edc:
    // 0x200edc: 0xc095596  jal         func_255658
label_200ee0:
    if (ctx->pc == 0x200EE0u) {
        ctx->pc = 0x200EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EDCu;
        // 0x200ee0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EE4u;
        goto label_200ee4;
    }
    ctx->pc = 0x200EDCu;
    SET_GPR_U32(ctx, 31, 0x200EE4u);
    ctx->pc = 0x200EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EDCu;
    // 0x200ee0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x200EDCu, 0x200EE4u)) {
        return;
    }
    ctx->pc = 0x200EE4u;
label_200ee4:
    // 0x200ee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200ee8:
    // 0x200ee8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_200eec:
    if (ctx->pc == 0x200EECu) {
        ctx->pc = 0x200EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EE8u;
        // 0x200eec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EF0u;
        goto label_200ef0;
    }
    ctx->pc = 0x200EE8u;
    {
        const bool branch_taken_0x200ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EE8u;
        // 0x200eec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ee8) {
            ctx->pc = 0x200F18u;
            goto label_200f18;
        }
    }
    ctx->pc = 0x200EF0u;
label_200ef0:
    // 0x200ef0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x200ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_200ef4:
    // 0x200ef4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_200ef8:
    if (ctx->pc == 0x200EF8u) {
        ctx->pc = 0x200EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EF4u;
        // 0x200ef8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EFCu;
        goto label_200efc;
    }
    ctx->pc = 0x200EF4u;
    {
        const bool branch_taken_0x200ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EF4u;
        // 0x200ef8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ef4) {
            ctx->pc = 0x200F18u;
            goto label_200f18;
        }
    }
    ctx->pc = 0x200EFCu;
label_200efc:
    // 0x200efc: 0xc089892  jal         func_226248
label_200f00:
    if (ctx->pc == 0x200F00u) {
        ctx->pc = 0x200F04u;
        goto label_200f04;
    }
    ctx->pc = 0x200EFCu;
    SET_GPR_U32(ctx, 31, 0x200F04u);
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x200EFCu, 0x200F04u)) {
        return;
    }
    ctx->pc = 0x200F04u;
label_200f04:
    // 0x200f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200f08:
    // 0x200f08: 0xc089a04  jal         func_226810
label_200f0c:
    if (ctx->pc == 0x200F0Cu) {
        ctx->pc = 0x200F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F08u;
        // 0x200f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F10u;
        goto label_200f10;
    }
    ctx->pc = 0x200F08u;
    SET_GPR_U32(ctx, 31, 0x200F10u);
    ctx->pc = 0x200F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F08u;
    // 0x200f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x200F08u, 0x200F10u)) {
        return;
    }
    ctx->pc = 0x200F10u;
label_200f10:
    // 0x200f10: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x200f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_200f14:
    // 0x200f14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x200f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200f18:
    // 0x200f18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_200f1c:
    // 0x200f1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x200f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_200f20:
    // 0x200f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x200f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200f24:
    // 0x200f24: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x200f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200f28:
    // 0x200f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200f2c:
    // 0x200f2c: 0x3e00008  jr          $ra
label_200f30:
    if (ctx->pc == 0x200F30u) {
        ctx->pc = 0x200F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F2Cu;
        // 0x200f30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F34u;
        goto label_200f34;
    }
    ctx->pc = 0x200F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F2Cu;
        // 0x200f30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F34u;
label_200f34:
    // 0x200f34: 0x0  nop
    ctx->pc = 0x200f34u;
    // NOP
label_200f38:
    // 0x200f38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x200f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_200f3c:
    // 0x200f3c: 0x0  nop
    ctx->pc = 0x200f3cu;
    // NOP
    ctx->pc = 0x200f40u;
}
