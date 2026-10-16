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

// Function: sub_00314E00
// Address: 0x314e00 - 0x314ea8
void sub_00314E00_0x314e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314E00_0x314e00");
#endif

    switch (ctx->pc) {
        case 0x314e6cu: goto label_314e6c;
        default: break;
    }

    ctx->pc = 0x314e00u;

    // 0x314e00: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x314e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x314e04: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x314e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x314e08: 0x8c4d6ccc  lw          $t5, 0x6CCC($v0)
    ctx->pc = 0x314e08u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x686CCCu));
    // 0x314e0c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x314e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x314e10: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x314e10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x314e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x314e18: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x314e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x314e1c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x314e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x314e20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x314e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x314e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x314e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e28: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x314e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x314e2c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x314e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x314e30: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x314e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x314e34: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x314e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x314e38: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x314e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x314e3c: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x314e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x314e40: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x314e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x314e44: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x314e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x314e48: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x314e48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x314e4c: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x314e4cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x314e50: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x314e50u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x314e54: 0xe7b200ac  swc1        $f18, 0xAC($sp)
    ctx->pc = 0x314e54u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x314e58: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x314e58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x314e5c: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x314e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x314e60: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x314e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x314e64: 0xc0c6aa0  jal         func_31AA80
    ctx->pc = 0x314E64u;
    SET_GPR_U32(ctx, 31, 0x314E6Cu);
    ctx->pc = 0x314E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E64u;
    // 0x314e68: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AA80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AA80u, 0x314E64u, 0x314E6Cu)) {
        return;
    }
    ctx->pc = 0x314E6Cu;
label_314e6c:
    // 0x314e6c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x314e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314e70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x314e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314e74: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x314e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x314e78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314e7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x314e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x314e80: 0x3e00008  jr          $ra
    ctx->pc = 0x314E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E80u;
        // 0x314e84: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314E88u;
    // 0x314e88: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x314e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x314e8c: 0x0  nop
    ctx->pc = 0x314e8cu;
    // NOP
    // 0x314e90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x314e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x314e94: 0x0  nop
    ctx->pc = 0x314e94u;
    // NOP
    // 0x314e98: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x314e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x314e9c: 0x0  nop
    ctx->pc = 0x314e9cu;
    // NOP
    // 0x314ea0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x314ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x314ea4: 0x0  nop
    ctx->pc = 0x314ea4u;
    // NOP
    ctx->pc = 0x314ea8u;
}
