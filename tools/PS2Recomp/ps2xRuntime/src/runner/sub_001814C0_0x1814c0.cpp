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

// Function: sub_001814C0
// Address: 0x1814c0 - 0x181530
void sub_001814C0_0x1814c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001814C0_0x1814c0");
#endif

    switch (ctx->pc) {
        case 0x1814d8u: goto label_1814d8;
        case 0x181514u: goto label_181514;
        default: break;
    }

    ctx->pc = 0x1814c0u;

    // 0x1814c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1814c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1814c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1814c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1814c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1814c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1814ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1814d0: 0xc060698  jal         func_181A60
    ctx->pc = 0x1814D0u;
    SET_GPR_U32(ctx, 31, 0x1814D8u);
    ctx->pc = 0x1814D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814D0u;
    // 0x1814d4: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181A60u, 0x1814D0u, 0x1814D8u)) {
        return;
    }
    ctx->pc = 0x1814D8u;
label_1814d8:
    // 0x1814d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1814dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1814dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1814e0: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x1814e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1814e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1814e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1814e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1814ec: 0x246903ff  addiu       $t1, $v1, 0x3FF
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1814f0: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1814f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x1814f4: 0x8e0a0058  lw          $t2, 0x58($s0)
    ctx->pc = 0x1814f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1814f8: 0x94a83  sra         $t1, $t1, 10
    ctx->pc = 0x1814f8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x1814fc: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x1814fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x181500: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x181500u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x181504: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x181504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x181508: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18150c: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x18150Cu;
    SET_GPR_U32(ctx, 31, 0x181514u);
    ctx->pc = 0x181510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18150Cu;
    // 0x181510: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x18150Cu, 0x181514u)) {
        return;
    }
    ctx->pc = 0x181514u;
label_181514:
    // 0x181514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181518: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x181518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x18151c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x181520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181528: 0x3e00008  jr          $ra
    ctx->pc = 0x181528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181528u;
        // 0x18152c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181530u;
}
