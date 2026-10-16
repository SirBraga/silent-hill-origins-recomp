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

// Function: sub_00242380
// Address: 0x242380 - 0x2423f8
void sub_00242380_0x242380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242380_0x242380");
#endif

    ctx->pc = 0x242380u;

    // 0x242380: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x242380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x242384: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x242384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x242388: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x242388u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x24238c: 0x24630f70  addiu       $v1, $v1, 0xF70
    ctx->pc = 0x24238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3952));
    // 0x242390: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x242390u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C0F70u));
    // 0x242394: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242394u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242398: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x242398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24239c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2423a0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2423a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2423a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2423a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423a8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x2423a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x2423ac: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x2423acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2423b0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2423b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2423b4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2423b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2423b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2423bc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2423bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2423c0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2423c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2423c4: 0x24630f60  addiu       $v1, $v1, 0xF60
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
    // 0x2423c8: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x2423c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2423cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2423ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C0F60u));
    // 0x2423d0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2423d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2423d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2423d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2423d8: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x2423d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2423dc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2423dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2423e0: 0x24630ff0  addiu       $v1, $v1, 0xFF0
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x2423e4: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2423e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2423e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C0FF0u));
    // 0x2423ec: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2423ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2423f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2423F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2423F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423F0u;
        // 0x2423f4: 0xaf8590bc  sw          $a1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2423F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2423F8u;
}
