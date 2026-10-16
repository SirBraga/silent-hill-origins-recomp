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

// Function: sub_00313F10
// Address: 0x313f10 - 0x313f90
void sub_00313F10_0x313f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313F10_0x313f10");
#endif

    switch (ctx->pc) {
        case 0x313f7cu: goto label_313f7c;
        default: break;
    }

    ctx->pc = 0x313f10u;

    // 0x313f10: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x313f14: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x313f18: 0x8c4d6ccc  lw          $t5, 0x6CCC($v0)
    ctx->pc = 0x313f18u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x686CCCu));
    // 0x313f1c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x313f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x313f20: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x313f20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x313f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x313f28: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x313f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x313f2c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x313f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x313f30: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x313f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x313f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x313f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f38: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x313f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x313f3c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x313f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x313f40: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x313f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x313f44: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x313f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x313f48: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x313f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x313f4c: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x313f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x313f50: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x313f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x313f54: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x313f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x313f58: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x313f58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x313f5c: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x313f5cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x313f60: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x313f60u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x313f64: 0xe7b200ac  swc1        $f18, 0xAC($sp)
    ctx->pc = 0x313f64u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x313f68: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x313f68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x313f6c: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x313f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x313f70: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x313f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x313f74: 0xc0c5fe4  jal         func_317F90
    ctx->pc = 0x313F74u;
    SET_GPR_U32(ctx, 31, 0x313F7Cu);
    ctx->pc = 0x313F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313F74u;
    // 0x313f78: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317F90u, 0x313F74u, 0x313F7Cu)) {
        return;
    }
    ctx->pc = 0x313F7Cu;
label_313f7c:
    // 0x313f7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x313f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313f80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x313f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313f84: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x313f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x313f88: 0x3e00008  jr          $ra
    ctx->pc = 0x313F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F88u;
        // 0x313f8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313F90u;
}
