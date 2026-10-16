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

// Function: sub_001AE070
// Address: 0x1ae070 - 0x1ae140
void sub_001AE070_0x1ae070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE070_0x1ae070");
#endif

    switch (ctx->pc) {
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae098u: goto label_1ae098;
        case 0x1ae110u: goto label_1ae110;
        default: break;
    }

    ctx->pc = 0x1ae070u;

    // 0x1ae070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae080: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae088: 0xc06b89a  jal         func_1AE268
    ctx->pc = 0x1AE088u;
    SET_GPR_U32(ctx, 31, 0x1AE090u);
    ctx->pc = 0x1AE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE088u;
    // 0x1ae08c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE268u, 0x1AE088u, 0x1AE090u)) {
        return;
    }
    ctx->pc = 0x1AE090u;
label_1ae090:
    // 0x1ae090: 0xc06b8a8  jal         func_1AE2A0
    ctx->pc = 0x1AE090u;
    SET_GPR_U32(ctx, 31, 0x1AE098u);
    ctx->pc = 0x1AE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE090u;
    // 0x1ae094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE2A0u, 0x1AE090u, 0x1AE098u)) {
        return;
    }
    ctx->pc = 0x1AE098u;
label_1ae098:
    // 0x1ae098: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ae09c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0a0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE0A0u;
    {
        const bool branch_taken_0x1ae0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0A0u;
        // 0x1ae0a4: 0x24448610  addiu       $a0, $v0, -0x79F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0a0) {
            ctx->pc = 0x1AE0E4u;
            goto label_1ae0e4;
        }
    }
    ctx->pc = 0x1AE0A8u;
    // 0x1ae0a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ae0ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0ACu;
    {
        const bool branch_taken_0x1ae0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ACu;
        // 0x1ae0b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0ac) {
            ctx->pc = 0x1AE0BCu;
            goto label_1ae0bc;
        }
    }
    ctx->pc = 0x1AE0B4u;
    // 0x1ae0b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE0B4u;
    {
        const bool branch_taken_0x1ae0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B4u;
        // 0x1ae0b8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b4) {
            ctx->pc = 0x1AE0C0u;
            goto label_1ae0c0;
        }
    }
    ctx->pc = 0x1AE0BCu;
label_1ae0bc:
    // 0x1ae0bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ae0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ae0c0:
    // 0x1ae0c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae0c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0C4u;
    {
        const bool branch_taken_0x1ae0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0C4u;
        // 0x1ae0c8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0c4) {
            ctx->pc = 0x1AE0D4u;
            goto label_1ae0d4;
        }
    }
    ctx->pc = 0x1AE0CCu;
    // 0x1ae0cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE0CCu;
    {
        const bool branch_taken_0x1ae0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0CCu;
        // 0x1ae0d0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0cc) {
            ctx->pc = 0x1AE0D8u;
            goto label_1ae0d8;
        }
    }
    ctx->pc = 0x1AE0D4u;
label_1ae0d4:
    // 0x1ae0d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ae0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ae0d8:
    // 0x1ae0d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae0dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae0e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ae0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ae0e4:
    // 0x1ae0e4: 0x24a28610  addiu       $v0, $a1, -0x79F0
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936080));
    // 0x1ae0e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ae0ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE0ECu;
    {
        const bool branch_taken_0x1ae0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ECu;
        // 0x1ae0f0: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0ec) {
            ctx->pc = 0x1AE100u;
            goto label_1ae100;
        }
    }
    ctx->pc = 0x1AE0F4u;
    // 0x1ae0f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ae0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ae0f8: 0xac4090d8  sw          $zero, -0x6F28($v0)
    ctx->pc = 0x1ae0f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3390D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3390D8u, _value); } while (0);
    // 0x1ae0fc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ae0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1ae100:
    // 0x1ae100: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE100u;
    {
        const bool branch_taken_0x1ae100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae100) {
            ctx->pc = 0x1AE104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE100u;
            // 0x1ae104: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE114u;
            goto label_1ae114;
        }
    }
    ctx->pc = 0x1AE108u;
    // 0x1ae108: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE108u;
    SET_GPR_U32(ctx, 31, 0x1AE110u);
    ctx->pc = 0x1AE10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE108u;
    // 0x1ae10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE108u, 0x1AE110u)) {
        return;
    }
    ctx->pc = 0x1AE110u;
label_1ae110:
    // 0x1ae110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae114:
    // 0x1ae114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE11Cu;
        // 0x1ae120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE124u;
    // 0x1ae124: 0x0  nop
    ctx->pc = 0x1ae124u;
    // NOP
    // 0x1ae128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ae128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ae12c: 0x0  nop
    ctx->pc = 0x1ae12cu;
    // NOP
    // 0x1ae130: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ae134: 0x0  nop
    ctx->pc = 0x1ae134u;
    // NOP
    // 0x1ae138: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ae13c: 0x0  nop
    ctx->pc = 0x1ae13cu;
    // NOP
    ctx->pc = 0x1ae140u;
}
