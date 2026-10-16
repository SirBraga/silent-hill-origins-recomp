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

// Function: sub_00314030
// Address: 0x314030 - 0x314098
void sub_00314030_0x314030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314030_0x314030");
#endif

    switch (ctx->pc) {
        case 0x314058u: goto label_314058;
        default: break;
    }

    ctx->pc = 0x314030u;

    // 0x314030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314034: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x314034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31403c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x31403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314048: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x314048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31404c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x31404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x314050: 0xc0c7d9e  jal         func_31F678
    ctx->pc = 0x314050u;
    SET_GPR_U32(ctx, 31, 0x314058u);
    ctx->pc = 0x314054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314050u;
    // 0x314054: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F678u, 0x314050u, 0x314058u)) {
        return;
    }
    ctx->pc = 0x314058u;
label_314058:
    // 0x314058: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31405c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31405cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x314060: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x314060u;
    {
        const bool branch_taken_0x314060 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x314060) {
            ctx->pc = 0x314064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314060u;
            // 0x314064: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314078u;
            goto label_314078;
        }
    }
    ctx->pc = 0x314068u;
    // 0x314068: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x314068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x31406c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314070u;
    {
        const bool branch_taken_0x314070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314070u;
        // 0x314074: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314070) {
            ctx->pc = 0x314080u;
            goto label_314080;
        }
    }
    ctx->pc = 0x314078u;
label_314078:
    // 0x314078: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x314078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x31407c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x31407cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_314080:
    // 0x314080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314084: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x314084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31408c: 0x3e00008  jr          $ra
    ctx->pc = 0x31408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31408Cu;
        // 0x314090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31408Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314094u;
    // 0x314094: 0x0  nop
    ctx->pc = 0x314094u;
    // NOP
    ctx->pc = 0x314098u;
}
