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

// Function: sub_00149988
// Address: 0x149988 - 0x149aa0
void sub_00149988_0x149988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149988_0x149988");
#endif

    switch (ctx->pc) {
        case 0x1499acu: goto label_1499ac;
        case 0x1499e8u: goto label_1499e8;
        case 0x149a00u: goto label_149a00;
        case 0x149a08u: goto label_149a08;
        case 0x149a28u: goto label_149a28;
        case 0x149a40u: goto label_149a40;
        case 0x149a60u: goto label_149a60;
        case 0x149a80u: goto label_149a80;
        default: break;
    }

    ctx->pc = 0x149988u;

    // 0x149988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x149988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14998c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x149990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x149998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14999c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1499a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1499a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1499a4: 0xc052590  jal         func_149640
    ctx->pc = 0x1499A4u;
    SET_GPR_U32(ctx, 31, 0x1499ACu);
    ctx->pc = 0x1499A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499A4u;
    // 0x1499a8: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149640u, 0x1499A4u, 0x1499ACu)) {
        return;
    }
    ctx->pc = 0x1499ACu;
label_1499ac:
    // 0x1499ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1499acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1499b0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1499b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1499b4: 0x24421960  addiu       $v0, $v0, 0x1960
    ctx->pc = 0x1499b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6496));
    // 0x1499b8: 0x24631980  addiu       $v1, $v1, 0x1980
    ctx->pc = 0x1499b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x1499bc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1499bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1499c0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1499c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1499c4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1499c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1499c8: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x1499cc: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x1499ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
    // 0x1499d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1499d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499d4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1499d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1499d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1499d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499dc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1499dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1499e0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1499E0u;
    SET_GPR_U32(ctx, 31, 0x1499E8u);
    ctx->pc = 0x1499E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499E0u;
    // 0x1499e4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1499E0u, 0x1499E8u)) {
        return;
    }
    ctx->pc = 0x1499E8u;
label_1499e8:
    // 0x1499e8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1499ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1499ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f0: 0x24a5f8a0  addiu       $a1, $a1, -0x760
    ctx->pc = 0x1499f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965408));
    // 0x1499f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1499f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1499F8u;
    SET_GPR_U32(ctx, 31, 0x149A00u);
    ctx->pc = 0x1499FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499F8u;
    // 0x1499fc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1499F8u, 0x149A00u)) {
        return;
    }
    ctx->pc = 0x149A00u;
label_149a00:
    // 0x149a00: 0xc07f8aa  jal         func_1FE2A8
    ctx->pc = 0x149A00u;
    SET_GPR_U32(ctx, 31, 0x149A08u);
    ctx->pc = 0x149A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A00u;
    // 0x149a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x149A00u, 0x149A08u)) {
        return;
    }
    ctx->pc = 0x149A08u;
label_149a08:
    // 0x149a08: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x149A08u;
    {
        const bool branch_taken_0x149a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A08u;
        // 0x149a0c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a08) {
            ctx->pc = 0x149A80u;
            goto label_149a80;
        }
    }
    ctx->pc = 0x149A10u;
    // 0x149a10: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x149a14: 0x8c46ee90  lw          $a2, -0x1170($v0)
    ctx->pc = 0x149a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962832)));
    // 0x149a18: 0x24701930  addiu       $s0, $v1, 0x1930
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6448));
    // 0x149a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x149a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a20: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x149A20u;
    SET_GPR_U32(ctx, 31, 0x149A28u);
    ctx->pc = 0x149A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A20u;
    // 0x149a24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x149A20u, 0x149A28u)) {
        return;
    }
    ctx->pc = 0x149A28u;
label_149a28:
    // 0x149a28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149a30: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x149A30u;
    {
        const bool branch_taken_0x149a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A30u;
        // 0x149a34: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a30) {
            ctx->pc = 0x149A74u;
            goto label_149a74;
        }
    }
    ctx->pc = 0x149A38u;
    // 0x149a38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_149a40:
    // 0x149a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a44: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x149a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149a48: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x149a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x149a4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x149a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x149a50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x149a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x149a54: 0xe3800a  movz        $s0, $a3, $v1
    ctx->pc = 0x149a54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7));
    // 0x149a58: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x149A58u;
    SET_GPR_U32(ctx, 31, 0x149A60u);
    ctx->pc = 0x149A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A58u;
    // 0x149a5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x149A58u, 0x149A60u)) {
        return;
    }
    ctx->pc = 0x149A60u;
label_149a60:
    // 0x149a60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x149a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149a68: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x149A68u;
    {
        const bool branch_taken_0x149a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149a68) {
            ctx->pc = 0x149A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149A68u;
            // 0x149a6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149a40;
        }
    }
    ctx->pc = 0x149A70u;
    // 0x149a70: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_149a74:
    // 0x149a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a78: 0xc041e86  jal         func_107A18
    ctx->pc = 0x149A78u;
    SET_GPR_U32(ctx, 31, 0x149A80u);
    ctx->pc = 0x149A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A78u;
    // 0x149a7c: 0x24841938  addiu       $a0, $a0, 0x1938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x149A78u, 0x149A80u)) {
        return;
    }
    ctx->pc = 0x149A80u;
label_149a80:
    // 0x149a80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x149a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x149a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149a88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x149a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149a94: 0x3e00008  jr          $ra
    ctx->pc = 0x149A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A94u;
        // 0x149a98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149A9Cu;
    // 0x149a9c: 0x0  nop
    ctx->pc = 0x149a9cu;
    // NOP
    ctx->pc = 0x149aa0u;
}
