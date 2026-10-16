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

// Function: sub_00302C50
// Address: 0x302c50 - 0x302cc8
void sub_00302C50_0x302c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302C50_0x302c50");
#endif

    switch (ctx->pc) {
        case 0x302c64u: goto label_302c64;
        default: break;
    }

    ctx->pc = 0x302c50u;

    // 0x302c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302c5c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x302C5Cu;
    SET_GPR_U32(ctx, 31, 0x302C64u);
    ctx->pc = 0x302C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C5Cu;
    // 0x302c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x302C5Cu, 0x302C64u)) {
        return;
    }
    ctx->pc = 0x302C64u;
label_302c64:
    // 0x302c64: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x302c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x302c68: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x302c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x302c6c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x302c6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x302c70: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x302c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x302c74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x302c74u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x302c78: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x302c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x302c7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x302c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x302c80: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x302c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x302c84: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x302c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x302c88: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x302c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x302c8c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x302c8cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x302c90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x302c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x302c94: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x302c94u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x302c98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x302c98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x302c9c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x302c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x302ca0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x302ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x302ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x302CA4u;
    {
        const bool branch_taken_0x302ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CA4u;
        // 0x302ca8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ca4) {
            ctx->pc = 0x302CB8u;
            goto label_302cb8;
        }
    }
    ctx->pc = 0x302CACu;
    // 0x302cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302cb0: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x302CB0u;
    ctx->pc = 0x302CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CB0u;
    // 0x302cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x302CB8u;
label_302cb8:
    // 0x302cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x302CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CBCu;
        // 0x302cc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302CC4u;
    // 0x302cc4: 0x0  nop
    ctx->pc = 0x302cc4u;
    // NOP
    ctx->pc = 0x302cc8u;
}
