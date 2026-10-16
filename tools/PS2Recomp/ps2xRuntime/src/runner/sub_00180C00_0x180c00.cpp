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

// Function: sub_00180C00
// Address: 0x180c00 - 0x180ca0
void sub_00180C00_0x180c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C00_0x180c00");
#endif

    switch (ctx->pc) {
        case 0x180c4cu: goto label_180c4c;
        case 0x180c64u: goto label_180c64;
        case 0x180c80u: goto label_180c80;
        default: break;
    }

    ctx->pc = 0x180c00u;

    // 0x180c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180c04: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x180c08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180c0c: 0x24427e58  addiu       $v0, $v0, 0x7E58
    ctx->pc = 0x180c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32344));
    // 0x180c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180c1c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x180c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x180c20: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x180c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x180c24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180c28: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x180c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x180c2c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x180c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x180c30: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x180c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x180c34: 0x24a57df0  addiu       $a1, $a1, 0x7DF0
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32240));
    // 0x180c38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x180c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x180c3c: 0x2484fa68  addiu       $a0, $a0, -0x598
    ctx->pc = 0x180c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965864));
    // 0x180c40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x180c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x180c44: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x180C44u;
    SET_GPR_U32(ctx, 31, 0x180C4Cu);
    ctx->pc = 0x180C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C44u;
    // 0x180c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x180C44u, 0x180C4Cu)) {
        return;
    }
    ctx->pc = 0x180C4Cu;
label_180c4c:
    // 0x180c4c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x180c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x180c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c54: 0x24a588a8  addiu       $a1, $a1, -0x7758
    ctx->pc = 0x180c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936744));
    // 0x180c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c5c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x180C5Cu;
    SET_GPR_U32(ctx, 31, 0x180C64u);
    ctx->pc = 0x180C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C5Cu;
    // 0x180c60: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x180C5Cu, 0x180C64u)) {
        return;
    }
    ctx->pc = 0x180C64u;
label_180c64:
    // 0x180c64: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x180c68: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x180c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x180c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c70: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x180c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x180c74: 0x24c67df8  addiu       $a2, $a2, 0x7DF8
    ctx->pc = 0x180c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32248));
    // 0x180c78: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x180C78u;
    SET_GPR_U32(ctx, 31, 0x180C80u);
    ctx->pc = 0x180C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C78u;
    // 0x180c7c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x180C78u, 0x180C80u)) {
        return;
    }
    ctx->pc = 0x180C80u;
label_180c80:
    // 0x180c80: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x180c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x180c84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c88: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x180c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x180c8c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x180c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x180c90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c98: 0x3e00008  jr          $ra
    ctx->pc = 0x180C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C98u;
        // 0x180c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180CA0u;
}
