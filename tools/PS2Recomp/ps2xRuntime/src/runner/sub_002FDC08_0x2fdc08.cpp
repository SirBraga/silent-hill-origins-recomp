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

// Function: sub_002FDC08
// Address: 0x2fdc08 - 0x2fdca8
void sub_002FDC08_0x2fdc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDC08_0x2fdc08");
#endif

    switch (ctx->pc) {
        case 0x2fdc18u: goto label_2fdc18;
        case 0x2fdc74u: goto label_2fdc74;
        default: break;
    }

    ctx->pc = 0x2fdc08u;

    // 0x2fdc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdc10: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FDC10u;
    SET_GPR_U32(ctx, 31, 0x2FDC18u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FDC10u, 0x2FDC18u)) {
        return;
    }
    ctx->pc = 0x2FDC18u;
label_2fdc18:
    // 0x2fdc18: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2fdc18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdc1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2fdc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2fdc20: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x2fdc20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x2fdc24: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x2fdc24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdc28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2fdc28u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2fdc2c: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x2fdc2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x2fdc30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2fdc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdc34: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2fdc34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdc38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fdc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fdc3c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x2fdc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x2fdc40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2fdc40u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x2fdc44: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x2fdc44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x2fdc48: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fdc48u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x2fdc4c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x2fdc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x2fdc50: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2fdc50u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x2fdc54: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fdc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fdc58: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2fdc58u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2fdc5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fdc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fdc60: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2fdc60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2fdc64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDC64u;
    {
        const bool branch_taken_0x2fdc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC64u;
        // 0x2fdc68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc64) {
            ctx->pc = 0x2FDC78u;
            goto label_2fdc78;
        }
    }
    ctx->pc = 0x2FDC6Cu;
    // 0x2fdc6c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FDC6Cu;
    SET_GPR_U32(ctx, 31, 0x2FDC74u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FDC6Cu, 0x2FDC74u)) {
        return;
    }
    ctx->pc = 0x2FDC74u;
label_2fdc74:
    // 0x2fdc74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fdc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2fdc78:
    // 0x2fdc78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fdc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdc7c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x2fdc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x2fdc80: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x2fdc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x2fdc84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2fdc84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x2fdc88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fdc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdc8c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fdc8cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x2fdc90: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fdc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fdc94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fdc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdc9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2fdc9cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
    // 0x2fdca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCA0u;
        // 0x2fdca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDCA8u;
}
