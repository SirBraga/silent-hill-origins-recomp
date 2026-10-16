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

// Function: sub_002747C0
// Address: 0x2747c0 - 0x274838
void sub_002747C0_0x2747c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002747C0_0x2747c0");
#endif

    switch (ctx->pc) {
        case 0x2747f4u: goto label_2747f4;
        case 0x274820u: goto label_274820;
        case 0x274828u: goto label_274828;
        default: break;
    }

    ctx->pc = 0x2747c0u;

    // 0x2747c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2747c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2747c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2747c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2747c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2747cc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2747ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2747d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2747d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2747d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2747d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2747d8: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    // 0x2747dc: 0x24705480  addiu       $s0, $v1, 0x5480
    ctx->pc = 0x2747dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21632));
    // 0x2747e0: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2747e4: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2747e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2747e8: 0xac655480  sw          $a1, 0x5480($v1)
    ctx->pc = 0x2747e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x705480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x705480u, _value); } while (0);
    // 0x2747ec: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2747ECu;
    SET_GPR_U32(ctx, 31, 0x2747F4u);
    ctx->pc = 0x2747F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747ECu;
    // 0x2747f0: 0xac460038  sw          $a2, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2747ECu, 0x2747F4u)) {
        return;
    }
    ctx->pc = 0x2747F4u;
label_2747f4:
    // 0x2747f4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2747f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2747f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2747fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274804: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x274804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x274808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x274808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27480c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27480cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274810: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274814: 0x24845448  addiu       $a0, $a0, 0x5448
    ctx->pc = 0x274814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21576));
    // 0x274818: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x274818u;
    SET_GPR_U32(ctx, 31, 0x274820u);
    ctx->pc = 0x27481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274818u;
    // 0x27481c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x274818u, 0x274820u)) {
        return;
    }
    ctx->pc = 0x274820u;
label_274820:
    // 0x274820: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x274820u;
    SET_GPR_U32(ctx, 31, 0x274828u);
    ctx->pc = 0x274824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274820u;
    // 0x274824: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x274820u, 0x274828u)) {
        return;
    }
    ctx->pc = 0x274828u;
label_274828:
    // 0x274828: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x274828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27482c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274830: 0x3e00008  jr          $ra
    ctx->pc = 0x274830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274830u;
        // 0x274834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274838u;
}
