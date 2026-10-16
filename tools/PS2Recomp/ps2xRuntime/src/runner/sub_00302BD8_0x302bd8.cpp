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

// Function: sub_00302BD8
// Address: 0x302bd8 - 0x302c50
void sub_00302BD8_0x302bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302BD8_0x302bd8");
#endif

    switch (ctx->pc) {
        case 0x302becu: goto label_302bec;
        default: break;
    }

    ctx->pc = 0x302bd8u;

    // 0x302bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302be0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302be4: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x302BE4u;
    SET_GPR_U32(ctx, 31, 0x302BECu);
    ctx->pc = 0x302BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BE4u;
    // 0x302be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x302BE4u, 0x302BECu)) {
        return;
    }
    ctx->pc = 0x302BECu;
label_302bec:
    // 0x302bec: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x302becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x302bf0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x302bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x302bf4: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x302bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x302bf8: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x302bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x302bfc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x302bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x302c00: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x302c00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x302c04: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x302c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x302c08: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x302c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x302c0c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x302c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x302c10: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x302c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x302c14: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x302c14u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x302c18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x302c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x302c1c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x302c1cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16)); // MMIO: 0x1000b000
    // 0x302c20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x302c20u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x302c24: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x302c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x302c28: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x302c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x302c2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x302C2Cu;
    {
        const bool branch_taken_0x302c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C2Cu;
        // 0x302c30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c2c) {
            ctx->pc = 0x302C40u;
            goto label_302c40;
        }
    }
    ctx->pc = 0x302C34u;
    // 0x302c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302c38: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x302C38u;
    ctx->pc = 0x302C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C38u;
    // 0x302c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x302C40u;
label_302c40:
    // 0x302c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302c44: 0x3e00008  jr          $ra
    ctx->pc = 0x302C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C44u;
        // 0x302c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302C4Cu;
    // 0x302c4c: 0x0  nop
    ctx->pc = 0x302c4cu;
    // NOP
    ctx->pc = 0x302c50u;
}
