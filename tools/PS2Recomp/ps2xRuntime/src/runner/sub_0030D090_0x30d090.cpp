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

// Function: sub_0030D090
// Address: 0x30d090 - 0x30d130
void sub_0030D090_0x30d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D090_0x30d090");
#endif

    switch (ctx->pc) {
        case 0x30d0b8u: goto label_30d0b8;
        case 0x30d0e4u: goto label_30d0e4;
        default: break;
    }

    ctx->pc = 0x30d090u;

    // 0x30d090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d09c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d0ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30d0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d0b0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D0B0u;
    SET_GPR_U32(ctx, 31, 0x30D0B8u);
    ctx->pc = 0x30D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0B0u;
    // 0x30d0b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D0B0u, 0x30D0B8u)) {
        return;
    }
    ctx->pc = 0x30D0B8u;
label_30d0b8:
    // 0x30d0b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30D0B8u;
    {
        const bool branch_taken_0x30d0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0B8u;
        // 0x30d0bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0b8) {
            ctx->pc = 0x30D0F0u;
            goto label_30d0f0;
        }
    }
    ctx->pc = 0x30D0C0u;
    // 0x30d0c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d0c4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30d0c8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D0C8u;
    {
        const bool branch_taken_0x30d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0C8u;
        // 0x30d0cc: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0c8) {
            ctx->pc = 0x30D0F0u;
            goto label_30d0f0;
        }
    }
    ctx->pc = 0x30D0D0u;
    // 0x30d0d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D0D0u;
    {
        const bool branch_taken_0x30d0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0D0u;
        // 0x30d0d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0d0) {
            ctx->pc = 0x30D0F0u;
            goto label_30d0f0;
        }
    }
    ctx->pc = 0x30D0D8u;
    // 0x30d0d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d0dc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D0DCu;
    SET_GPR_U32(ctx, 31, 0x30D0E4u);
    ctx->pc = 0x30D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0DCu;
    // 0x30d0e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D0DCu, 0x30D0E4u)) {
        return;
    }
    ctx->pc = 0x30D0E4u;
label_30d0e4:
    // 0x30d0e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D0E4u;
    {
        const bool branch_taken_0x30d0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d0e4) {
            ctx->pc = 0x30D0F8u;
            goto label_30d0f8;
        }
    }
    ctx->pc = 0x30D0ECu;
    // 0x30d0ec: 0x0  nop
    ctx->pc = 0x30d0ecu;
    // NOP
label_30d0f0:
    // 0x30d0f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D0F0u;
    {
        const bool branch_taken_0x30d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0F0u;
        // 0x30d0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0f0) {
            ctx->pc = 0x30D110u;
            goto label_30d110;
        }
    }
    ctx->pc = 0x30D0F8u;
label_30d0f8:
    // 0x30d0f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D0F8u;
    {
        const bool branch_taken_0x30d0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0F8u;
        // 0x30d0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0f8) {
            ctx->pc = 0x30D110u;
            goto label_30d110;
        }
    }
    ctx->pc = 0x30D100u;
    // 0x30d100: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d104: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30d108: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d110:
    // 0x30d110: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D11Cu;
        // 0x30d120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D124u;
    // 0x30d124: 0x0  nop
    ctx->pc = 0x30d124u;
    // NOP
    // 0x30d128: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d12c: 0x0  nop
    ctx->pc = 0x30d12cu;
    // NOP
    ctx->pc = 0x30d130u;
}
