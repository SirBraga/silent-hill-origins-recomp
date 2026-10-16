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

// Function: sub_00328050
// Address: 0x328050 - 0x3280d0
void sub_00328050_0x328050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328050_0x328050");
#endif

    switch (ctx->pc) {
        case 0x3280acu: goto label_3280ac;
        default: break;
    }

    ctx->pc = 0x328050u;

    // 0x328050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328054: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x328054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x328058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32805c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32805cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328064: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x328064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328068: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x328068u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32806c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x32806cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x328070: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x328070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x328074: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x328074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x328078: 0x70008010  mfhi1       $s0
    ctx->pc = 0x328078u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x32807c: 0x3012  mflo        $a2
    ctx->pc = 0x32807cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x328080: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x328080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x328084: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x328084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x328088: 0x2010  mfhi        $a0
    ctx->pc = 0x328088u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32808c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x32808cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x328090: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x328090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x328094: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x328094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x328098: 0x70003012  mflo1       $a2
    ctx->pc = 0x328098u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x32809c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x32809cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3280a0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3280a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3280a4: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x3280A4u;
    SET_GPR_U32(ctx, 31, 0x3280ACu);
    ctx->pc = 0x3280A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280A4u;
    // 0x3280a8: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x3280A4u, 0x3280ACu)) {
        return;
    }
    ctx->pc = 0x3280ACu;
label_3280ac:
    // 0x3280ac: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x3280acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3280b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3280b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3280b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3280b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3280b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3280B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3280BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B8u;
        // 0x3280bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3280B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3280C0u;
    // 0x3280c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3280c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3280c4: 0x0  nop
    ctx->pc = 0x3280c4u;
    // NOP
    // 0x3280c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3280c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3280cc: 0x0  nop
    ctx->pc = 0x3280ccu;
    // NOP
    ctx->pc = 0x3280d0u;
}
