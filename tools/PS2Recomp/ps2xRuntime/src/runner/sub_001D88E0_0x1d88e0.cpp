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

// Function: sub_001D88E0
// Address: 0x1d88e0 - 0x1d8968
void sub_001D88E0_0x1d88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D88E0_0x1d88e0");
#endif

    switch (ctx->pc) {
        case 0x1d88e0u: goto label_1d88e0;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d88e8u: goto label_1d88e8;
        case 0x1d88ecu: goto label_1d88ec;
        case 0x1d88f0u: goto label_1d88f0;
        case 0x1d88f4u: goto label_1d88f4;
        case 0x1d88f8u: goto label_1d88f8;
        case 0x1d88fcu: goto label_1d88fc;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8964u: goto label_1d8964;
        default: break;
    }

    ctx->pc = 0x1d88e0u;

label_1d88e0:
    // 0x1d88e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d88e4:
    // 0x1d88e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d88e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d88e8:
    // 0x1d88e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d88e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d88ec:
    // 0x1d88ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d88ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d88f0:
    // 0x1d88f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d88f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d88f4:
    // 0x1d88f4: 0xc09d730  jal         func_275CC0
label_1d88f8:
    if (ctx->pc == 0x1D88F8u) {
        ctx->pc = 0x1D88FCu;
        goto label_1d88fc;
    }
    ctx->pc = 0x1D88F4u;
    SET_GPR_U32(ctx, 31, 0x1D88FCu);
    ctx->pc = 0x275CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CC0u, 0x1D88F4u, 0x1D88FCu)) {
        return;
    }
    ctx->pc = 0x1D88FCu;
label_1d88fc:
    // 0x1d88fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8900:
    if (ctx->pc == 0x1D8900u) {
        ctx->pc = 0x1D8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88FCu;
        // 0x1d8900: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8904u;
        goto label_1d8904;
    }
    ctx->pc = 0x1D88FCu;
    {
        const bool branch_taken_0x1d88fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88FCu;
        // 0x1d8900: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88fc) {
            ctx->pc = 0x1D890Cu;
            goto label_1d890c;
        }
    }
    ctx->pc = 0x1D8904u;
label_1d8904:
    // 0x1d8904: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d8908:
    if (ctx->pc == 0x1D8908u) {
        ctx->pc = 0x1D8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8904u;
        // 0x1d8908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D890Cu;
        goto label_1d890c;
    }
    ctx->pc = 0x1D8904u;
    {
        const bool branch_taken_0x1d8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8904u;
        // 0x1d8908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8904) {
            ctx->pc = 0x1D8950u;
            goto label_1d8950;
        }
    }
    ctx->pc = 0x1D890Cu;
label_1d890c:
    // 0x1d890c: 0xc09940e  jal         func_265038
label_1d8910:
    if (ctx->pc == 0x1D8910u) {
        ctx->pc = 0x1D8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D890Cu;
        // 0x1d8910: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8914u;
        goto label_1d8914;
    }
    ctx->pc = 0x1D890Cu;
    SET_GPR_U32(ctx, 31, 0x1D8914u);
    ctx->pc = 0x1D8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D890Cu;
    // 0x1d8910: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265038u, 0x1D890Cu, 0x1D8914u)) {
        return;
    }
    ctx->pc = 0x1D8914u;
label_1d8914:
    // 0x1d8914: 0xc07d8ec  jal         func_1F63B0
label_1d8918:
    if (ctx->pc == 0x1D8918u) {
        ctx->pc = 0x1D8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8914u;
        // 0x1d8918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D891Cu;
        goto label_1d891c;
    }
    ctx->pc = 0x1D8914u;
    SET_GPR_U32(ctx, 31, 0x1D891Cu);
    ctx->pc = 0x1D8918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8914u;
    // 0x1d8918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F63B0u, 0x1D8914u, 0x1D891Cu)) {
        return;
    }
    ctx->pc = 0x1D891Cu;
label_1d891c:
    // 0x1d891c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d8920:
    // 0x1d8920: 0x24501978  addiu       $s0, $v0, 0x1978
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6520));
label_1d8924:
    // 0x1d8924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d8928:
    // 0x1d8928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d892c:
    // 0x1d892c: 0x40f809  jalr        $v0
label_1d8930:
    if (ctx->pc == 0x1D8930u) {
        ctx->pc = 0x1D8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D892Cu;
        // 0x1d8930: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8934u;
        goto label_1d8934;
    }
    ctx->pc = 0x1D892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8934u);
        ctx->pc = 0x1D8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D892Cu;
        // 0x1d8930: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D892Cu, 0x1D8934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8934u;
label_1d8934:
    // 0x1d8934: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x1d8934u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_1d8938:
    // 0x1d8938: 0x2e220016  sltiu       $v0, $s1, 0x16
    ctx->pc = 0x1d8938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_1d893c:
    // 0x1d893c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_1d8940:
    if (ctx->pc == 0x1D8940u) {
        ctx->pc = 0x1D8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D893Cu;
        // 0x1d8940: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8944u;
        goto label_1d8944;
    }
    ctx->pc = 0x1D893Cu;
    {
        const bool branch_taken_0x1d893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d893c) {
            ctx->pc = 0x1D8940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D893Cu;
            // 0x1d8940: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8928;
        }
    }
    ctx->pc = 0x1D8944u;
label_1d8944:
    // 0x1d8944: 0xc07d942  jal         func_1F6508
label_1d8948:
    if (ctx->pc == 0x1D8948u) {
        ctx->pc = 0x1D894Cu;
        goto label_1d894c;
    }
    ctx->pc = 0x1D8944u;
    SET_GPR_U32(ctx, 31, 0x1D894Cu);
    ctx->pc = 0x1F6508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6508u, 0x1D8944u, 0x1D894Cu)) {
        return;
    }
    ctx->pc = 0x1D894Cu;
label_1d894c:
    // 0x1d894c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d894cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8950:
    // 0x1d8950: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d8950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d8954:
    // 0x1d8954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d8954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8958:
    // 0x1d8958: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d8958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d895c:
    // 0x1d895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8960:
    // 0x1d8960: 0x3e00008  jr          $ra
label_1d8964:
    if (ctx->pc == 0x1D8964u) {
        ctx->pc = 0x1D8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8960u;
        // 0x1d8964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8968u;
        goto label_fallthrough_0x1d8960;
    }
    ctx->pc = 0x1D8960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8960u;
        // 0x1d8964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8960:
    ctx->pc = 0x1D8968u;
}
