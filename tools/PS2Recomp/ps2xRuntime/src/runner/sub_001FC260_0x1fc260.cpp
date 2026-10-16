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

// Function: sub_001FC260
// Address: 0x1fc260 - 0x1fc320
void sub_001FC260_0x1fc260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC260_0x1fc260");
#endif

    switch (ctx->pc) {
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc2a0u: goto label_1fc2a0;
        case 0x1fc2d4u: goto label_1fc2d4;
        default: break;
    }

    ctx->pc = 0x1fc260u;

    // 0x1fc260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc264: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fc264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc268: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fc268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fc26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc270: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fc270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fc274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc27c: 0xc07f1bc  jal         func_1FC6F0
    ctx->pc = 0x1FC27Cu;
    SET_GPR_U32(ctx, 31, 0x1FC284u);
    ctx->pc = 0x1FC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC27Cu;
    // 0x1fc280: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC6F0u, 0x1FC27Cu, 0x1FC284u)) {
        return;
    }
    ctx->pc = 0x1FC284u;
label_1fc284:
    // 0x1fc284: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc288: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fc288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc28c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC28Cu;
    {
        const bool branch_taken_0x1fc28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC28Cu;
        // 0x1fc290: 0x3c114000  lui         $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc28c) {
            ctx->pc = 0x1FC2F8u;
            goto label_1fc2f8;
        }
    }
    ctx->pc = 0x1FC294u;
    // 0x1fc294: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x1fc298: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc29c: 0x0  nop
    ctx->pc = 0x1fc29cu;
    // NOP
label_1fc2a0:
    // 0x1fc2a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fc2a4: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC2A4u;
    {
        const bool branch_taken_0x1fc2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A4u;
        // 0x1fc2a8: 0x24a40008  addiu       $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a4) {
            ctx->pc = 0x1FC2DCu;
            goto label_1fc2dc;
        }
    }
    ctx->pc = 0x1FC2ACu;
    // 0x1fc2ac: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x1fc2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc2b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FC2B0u;
    {
        const bool branch_taken_0x1fc2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2B0u;
        // 0x1fc2b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2b0) {
            ctx->pc = 0x1FC2E0u;
            goto label_1fc2e0;
        }
    }
    ctx->pc = 0x1FC2B8u;
    // 0x1fc2b8: 0x5472000a  bnel        $v1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1FC2B8u;
    {
        const bool branch_taken_0x1fc2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1fc2b8) {
            ctx->pc = 0x1FC2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC2B8u;
            // 0x1fc2bc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC2E4u;
            goto label_1fc2e4;
        }
    }
    ctx->pc = 0x1FC2C0u;
    // 0x1fc2c0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC2C0u;
    {
        const bool branch_taken_0x1fc2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C0u;
        // 0x1fc2c4: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2c0) {
            ctx->pc = 0x1FC2CCu;
            goto label_1fc2cc;
        }
    }
    ctx->pc = 0x1FC2C8u;
    // 0x1fc2c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1fc2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1fc2cc:
    // 0x1fc2cc: 0xc07f2a4  jal         func_1FCA90
    ctx->pc = 0x1FC2CCu;
    SET_GPR_U32(ctx, 31, 0x1FC2D4u);
    ctx->pc = 0x1FC2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2CCu;
    // 0x1fc2d0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCA90u, 0x1FC2CCu, 0x1FC2D4u)) {
        return;
    }
    ctx->pc = 0x1FC2D4u;
label_1fc2d4:
    // 0x1fc2d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1fc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1fc2d8: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x1fc2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc2dc:
    // 0x1fc2dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc2e0:
    // 0x1fc2e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc2e4:
    // 0x1fc2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc2e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fc2ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc2f0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FC2F0u;
    {
        const bool branch_taken_0x1fc2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F0u;
        // 0x1fc2f4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f0) {
            ctx->pc = 0x1FC2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc2a0;
        }
    }
    ctx->pc = 0x1FC2F8u;
label_1fc2f8:
    // 0x1fc2f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC2F8u;
    {
        const bool branch_taken_0x1fc2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F8u;
        // 0x1fc2fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f8) {
            ctx->pc = 0x1FC308u;
            goto label_1fc308;
        }
    }
    ctx->pc = 0x1FC300u;
    // 0x1fc300: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc300u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc304: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1fc304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1fc308:
    // 0x1fc308: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fc308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc30c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fc30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc310: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc318: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC318u;
        // 0x1fc31c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC320u;
}
