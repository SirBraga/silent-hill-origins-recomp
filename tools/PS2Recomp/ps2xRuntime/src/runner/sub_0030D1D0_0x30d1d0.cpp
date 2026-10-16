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

// Function: sub_0030D1D0
// Address: 0x30d1d0 - 0x30d398
void sub_0030D1D0_0x30d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D1D0_0x30d1d0");
#endif

    switch (ctx->pc) {
        case 0x30d204u: goto label_30d204;
        case 0x30d230u: goto label_30d230;
        case 0x30d240u: goto label_30d240;
        case 0x30d284u: goto label_30d284;
        case 0x30d2a0u: goto label_30d2a0;
        case 0x30d2bcu: goto label_30d2bc;
        case 0x30d2d0u: goto label_30d2d0;
        case 0x30d2e0u: goto label_30d2e0;
        case 0x30d2f4u: goto label_30d2f4;
        case 0x30d308u: goto label_30d308;
        case 0x30d31cu: goto label_30d31c;
        default: break;
    }

    ctx->pc = 0x30d1d0u;

    // 0x30d1d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30d1d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30d1d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30d1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30d1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30d1e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30d1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30d1ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30d1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d1f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30d1f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d1fc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D1FCu;
    SET_GPR_U32(ctx, 31, 0x30D204u);
    ctx->pc = 0x30D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1FCu;
    // 0x30d200: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D1FCu, 0x30D204u)) {
        return;
    }
    ctx->pc = 0x30D204u;
label_30d204:
    // 0x30d204: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30D204u;
    {
        const bool branch_taken_0x30d204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D204u;
        // 0x30d208: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d204) {
            ctx->pc = 0x30D240u;
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D20Cu;
    // 0x30d20c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d210: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30d210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30d214: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30D214u;
    {
        const bool branch_taken_0x30d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D214u;
        // 0x30d218: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d214) {
            ctx->pc = 0x30D240u;
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D21Cu;
    // 0x30d21c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D21Cu;
    {
        const bool branch_taken_0x30d21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D21Cu;
        // 0x30d220: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d21c) {
            ctx->pc = 0x30D240u;
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D224u;
    // 0x30d224: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30d228: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D228u;
    SET_GPR_U32(ctx, 31, 0x30D230u);
    ctx->pc = 0x30D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D228u;
    // 0x30d22c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D228u, 0x30D230u)) {
        return;
    }
    ctx->pc = 0x30D230u;
label_30d230:
    // 0x30d230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D230u;
    {
        const bool branch_taken_0x30d230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D230u;
        // 0x30d234: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d230) {
            ctx->pc = 0x30D240u;
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D238u;
    // 0x30d238: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D238u;
    {
        const bool branch_taken_0x30d238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x30d238) {
            ctx->pc = 0x30D248u;
            goto label_30d248;
        }
    }
    ctx->pc = 0x30D240u;
label_30d240:
    // 0x30d240: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x30D240u;
    {
        const bool branch_taken_0x30d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D240u;
        // 0x30d244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d240) {
            ctx->pc = 0x30D350u;
            goto label_30d350;
        }
    }
    ctx->pc = 0x30D248u;
label_30d248:
    // 0x30d248: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x30D248u;
    {
        const bool branch_taken_0x30d248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D248u;
        // 0x30d24c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d248) {
            ctx->pc = 0x30D330u;
            goto label_30d330;
        }
    }
    ctx->pc = 0x30D250u;
    // 0x30d250: 0x1a600016  blez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x30D250u;
    {
        const bool branch_taken_0x30d250 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x30D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D250u;
        // 0x30d254: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d250) {
            ctx->pc = 0x30D2ACu;
            goto label_30d2ac;
        }
    }
    ctx->pc = 0x30D258u;
    // 0x30d258: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x30D258u;
    {
        const bool branch_taken_0x30d258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d258) {
            ctx->pc = 0x30D25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D258u;
            // 0x30d25c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D2D4u;
            goto label_30d2d4;
        }
    }
    ctx->pc = 0x30D260u;
    // 0x30d260: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x30d260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d264: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30D264u;
    {
        const bool branch_taken_0x30d264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D264u;
        // 0x30d268: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d264) {
            ctx->pc = 0x30D2B0u;
            goto label_30d2b0;
        }
    }
    ctx->pc = 0x30D26Cu;
    // 0x30d26c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x30d26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30d270: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D270u;
    {
        const bool branch_taken_0x30d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d270) {
            ctx->pc = 0x30D294u;
            goto label_30d294;
        }
    }
    ctx->pc = 0x30D278u;
    // 0x30d278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d27c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D27Cu;
    SET_GPR_U32(ctx, 31, 0x30D284u);
    ctx->pc = 0x30D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D27Cu;
    // 0x30d280: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D27Cu, 0x30D284u)) {
        return;
    }
    ctx->pc = 0x30D284u;
label_30d284:
    // 0x30d284: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30D284u;
    {
        const bool branch_taken_0x30d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D284u;
        // 0x30d288: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d284) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D28Cu;
    // 0x30d28c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x30d28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d290: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30d294:
    // 0x30d294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d298: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D298u;
    SET_GPR_U32(ctx, 31, 0x30D2A0u);
    ctx->pc = 0x30D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D298u;
    // 0x30d29c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D298u, 0x30D2A0u)) {
        return;
    }
    ctx->pc = 0x30D2A0u;
label_30d2a0:
    // 0x30d2a0: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30D2A0u;
    {
        const bool branch_taken_0x30d2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2A0u;
        // 0x30d2a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a0) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D2A8u;
    // 0x30d2a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30d2ac:
    // 0x30d2ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30d2b0:
    // 0x30d2b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2b4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D2B4u;
    SET_GPR_U32(ctx, 31, 0x30D2BCu);
    ctx->pc = 0x30D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2B4u;
    // 0x30d2b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D2B4u, 0x30D2BCu)) {
        return;
    }
    ctx->pc = 0x30D2BCu;
label_30d2bc:
    // 0x30d2bc: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x30D2BCu;
    {
        const bool branch_taken_0x30d2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2BCu;
        // 0x30d2c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2bc) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D2C4u;
    // 0x30d2c4: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x30d2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x30d2c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30D2C8u;
    {
        const bool branch_taken_0x30d2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2C8u;
        // 0x30d2cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2c8) {
            ctx->pc = 0x30D330u;
            goto label_30d330;
        }
    }
    ctx->pc = 0x30D2D0u;
label_30d2d0:
    // 0x30d2d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30d2d4:
    // 0x30d2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2d8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D2D8u;
    SET_GPR_U32(ctx, 31, 0x30D2E0u);
    ctx->pc = 0x30D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2D8u;
    // 0x30d2dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D2D8u, 0x30D2E0u)) {
        return;
    }
    ctx->pc = 0x30D2E0u;
label_30d2e0:
    // 0x30d2e0: 0x1040ffd7  beqz        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x30D2E0u;
    {
        const bool branch_taken_0x30d2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2E0u;
        // 0x30d2e4: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2e0) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D2E8u;
    // 0x30d2e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30d2ec: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D2ECu;
    SET_GPR_U32(ctx, 31, 0x30D2F4u);
    ctx->pc = 0x30D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2ECu;
    // 0x30d2f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D2ECu, 0x30D2F4u)) {
        return;
    }
    ctx->pc = 0x30D2F4u;
label_30d2f4:
    // 0x30d2f4: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x30D2F4u;
    {
        const bool branch_taken_0x30d2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2F4u;
        // 0x30d2f8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2f4) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D2FCu;
    // 0x30d2fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30d300: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D300u;
    SET_GPR_U32(ctx, 31, 0x30D308u);
    ctx->pc = 0x30D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D300u;
    // 0x30d304: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D300u, 0x30D308u)) {
        return;
    }
    ctx->pc = 0x30D308u;
label_30d308:
    // 0x30d308: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x30D308u;
    {
        const bool branch_taken_0x30d308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D308u;
        // 0x30d30c: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d308) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D310u;
    // 0x30d310: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30d314: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D314u;
    SET_GPR_U32(ctx, 31, 0x30D31Cu);
    ctx->pc = 0x30D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D314u;
    // 0x30d318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D314u, 0x30D31Cu)) {
        return;
    }
    ctx->pc = 0x30D31Cu;
label_30d31c:
    // 0x30d31c: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x30D31Cu;
    {
        const bool branch_taken_0x30d31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D31Cu;
        // 0x30d320: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d31c) {
            ctx->pc = 0x30D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d240;
        }
    }
    ctx->pc = 0x30D324u;
    // 0x30d324: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x30d324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x30d328: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x30D328u;
    {
        const bool branch_taken_0x30d328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D328u;
        // 0x30d32c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d328) {
            ctx->pc = 0x30D2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d2d0;
        }
    }
    ctx->pc = 0x30D330u;
label_30d330:
    // 0x30d330: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D330u;
    {
        const bool branch_taken_0x30d330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D330u;
        // 0x30d334: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d330) {
            ctx->pc = 0x30D34Cu;
            goto label_30d34c;
        }
    }
    ctx->pc = 0x30D338u;
    // 0x30d338: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d340: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30d344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d348: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x30d348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_30d34c:
    // 0x30d34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d350:
    // 0x30d350: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30d350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d354: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30d354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d358: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30d358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d35c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30d35cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d364: 0x3e00008  jr          $ra
    ctx->pc = 0x30D364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D364u;
        // 0x30d368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D36Cu;
    // 0x30d36c: 0x0  nop
    ctx->pc = 0x30d36cu;
    // NOP
    // 0x30d370: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d374: 0x0  nop
    ctx->pc = 0x30d374u;
    // NOP
    // 0x30d378: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30d378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30d37c: 0x0  nop
    ctx->pc = 0x30d37cu;
    // NOP
    // 0x30d380: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d384: 0x0  nop
    ctx->pc = 0x30d384u;
    // NOP
    // 0x30d388: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30d388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d38c: 0x0  nop
    ctx->pc = 0x30d38cu;
    // NOP
    // 0x30d390: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d394: 0x0  nop
    ctx->pc = 0x30d394u;
    // NOP
    ctx->pc = 0x30d398u;
}
