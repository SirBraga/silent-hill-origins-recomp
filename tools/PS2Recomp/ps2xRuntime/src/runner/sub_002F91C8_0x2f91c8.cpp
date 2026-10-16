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

// Function: sub_002F91C8
// Address: 0x2f91c8 - 0x2f9480
void sub_002F91C8_0x2f91c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F91C8_0x2f91c8");
#endif

    ctx->pc = 0x2f91c8u;

    // 0x2f91c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f91c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91cc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x2f91ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f91d0: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x2f91d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x2f91d4: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2f91d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f91d8: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x2f91d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2f91dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f91dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91e0: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x2f91e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x2f91e4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2f91e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91e8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x2f91e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f91ec: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F91ECu;
    {
        const bool branch_taken_0x2f91ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x2F91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91ECu;
        // 0x2f91f0: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91ec) {
            ctx->pc = 0x2F9300u;
            goto label_2f9300;
        }
    }
    ctx->pc = 0x2F91F4u;
    // 0x2f91f4: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x2f91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x2f91f8: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x2f91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x2f91fc: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x2f91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x2f9200: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x2f9200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x2f9204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9208: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x2f9208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x2f920c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x2f920cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2f9210: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x2f9210u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x2f9214: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x2f9214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x2f9218: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9218u;
    {
        const bool branch_taken_0x2f9218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9218u;
        // 0x2f921c: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9218) {
            ctx->pc = 0x2F922Cu;
            goto label_2f922c;
        }
    }
    ctx->pc = 0x2F9220u;
    // 0x2f9220: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x2f9220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x2f9224: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x2f9224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x2f9228: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x2f9228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_2f922c:
    // 0x2f922c: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x2f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x2f9230: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9230u;
    {
        const bool branch_taken_0x2f9230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9230) {
            ctx->pc = 0x2F9234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9230u;
            // 0x2f9234: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9248u;
            goto label_2f9248;
        }
    }
    ctx->pc = 0x2F9238u;
    // 0x2f9238: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x2f9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x2f923c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2F923Cu;
    {
        const bool branch_taken_0x2f923c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f923c) {
            ctx->pc = 0x2F9240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F923Cu;
            // 0x2f9240: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9270u;
            goto label_2f9270;
        }
    }
    ctx->pc = 0x2F9244u;
    // 0x2f9244: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x2f9244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_2f9248:
    // 0x2f9248: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9248u;
    {
        const bool branch_taken_0x2f9248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9248) {
            ctx->pc = 0x2F924Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9248u;
            // 0x2f924c: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9270u;
            goto label_2f9270;
        }
    }
    ctx->pc = 0x2F9250u;
    // 0x2f9250: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x2f9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x2f9254: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x2f9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x2f9258: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2f9258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2f925c: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x2f925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x2f9260: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2f9260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2f9264: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2f9264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2f9268: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x2f9268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x2f926c: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x2f926cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_2f9270:
    // 0x2f9270: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9274: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9274u;
    {
        const bool branch_taken_0x2f9274 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9274u;
        // 0x2f9278: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9274) {
            ctx->pc = 0x2F92A4u;
            goto label_2f92a4;
        }
    }
    ctx->pc = 0x2F927Cu;
    // 0x2f927c: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x2f927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x2f9280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f9280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9284: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2f9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f9288: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F9288u;
    {
        const bool branch_taken_0x2f9288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f9288) {
            ctx->pc = 0x2F928Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9288u;
            // 0x2f928c: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92ECu;
            goto label_2f92ec;
        }
    }
    ctx->pc = 0x2F9290u;
    // 0x2f9290: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x2f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x2f9294: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F9294u;
    {
        const bool branch_taken_0x2f9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9294u;
        // 0x2f9298: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9294) {
            ctx->pc = 0x2F93B8u;
            goto label_2f93b8;
        }
    }
    ctx->pc = 0x2F929Cu;
    // 0x2f929c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F929Cu;
    {
        const bool branch_taken_0x2f929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F929Cu;
        // 0x2f92a0: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f929c) {
            ctx->pc = 0x2F92ECu;
            goto label_2f92ec;
        }
    }
    ctx->pc = 0x2F92A4u;
label_2f92a4:
    // 0x2f92a4: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x2f92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x2f92a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f92ac: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2f92acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f92b0: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F92B0u;
    {
        const bool branch_taken_0x2f92b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f92b0) {
            ctx->pc = 0x2F92B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F92B0u;
            // 0x2f92b4: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92CCu;
            goto label_2f92cc;
        }
    }
    ctx->pc = 0x2F92B8u;
    // 0x2f92b8: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x2f92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x2f92bc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2f92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f92c0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F92C0u;
    {
        const bool branch_taken_0x2f92c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f92c0) {
            ctx->pc = 0x2F92C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F92C0u;
            // 0x2f92c4: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92D8u;
            goto label_2f92d8;
        }
    }
    ctx->pc = 0x2F92C8u;
    // 0x2f92c8: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x2f92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_2f92cc:
    // 0x2f92cc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2F92CCu;
    {
        const bool branch_taken_0x2f92cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92CCu;
        // 0x2f92d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92cc) {
            ctx->pc = 0x2F93B8u;
            goto label_2f93b8;
        }
    }
    ctx->pc = 0x2F92D4u;
    // 0x2f92d4: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x2f92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_2f92d8:
    // 0x2f92d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f92dc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2f92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f92e0: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F92E0u;
    {
        const bool branch_taken_0x2f92e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92E0u;
        // 0x2f92e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92e0) {
            ctx->pc = 0x2F93B8u;
            goto label_2f93b8;
        }
    }
    ctx->pc = 0x2F92E8u;
    // 0x2f92e8: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x2f92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_2f92ec:
    // 0x2f92ec: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2f92ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92f0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2f92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f92f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f92f8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F92F8u;
    {
        const bool branch_taken_0x2f92f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92F8u;
        // 0x2f92fc: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92f8) {
            ctx->pc = 0x2F93B4u;
            goto label_2f93b4;
        }
    }
    ctx->pc = 0x2F9300u;
label_2f9300:
    // 0x2f9300: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9300u;
    {
        const bool branch_taken_0x2f9300 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9300) {
            ctx->pc = 0x2F9304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9300u;
            // 0x2f9304: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F933Cu;
            goto label_2f933c;
        }
    }
    ctx->pc = 0x2F9308u;
    // 0x2f9308: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x2f9308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x2f930c: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x2f930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x2f9310: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x2f9310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x2f9314: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x2f9314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x2f9318: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x2f9318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x2f931c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x2f931cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x2f9320: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x2f9320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x2f9324: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x2f9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x2f9328: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x2f9328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x2f932c: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x2f932cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x2f9330: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x2f9330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x2f9334: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x2f9334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x2f9338: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x2f9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_2f933c:
    // 0x2f933c: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x2f933cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x2f9340: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x2f9340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x2f9344: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x2f9344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x2f9348: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x2f9348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x2f934c: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F934Cu;
    {
        const bool branch_taken_0x2f934c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x2F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F934Cu;
        // 0x2f9350: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f934c) {
            ctx->pc = 0x2F9368u;
            goto label_2f9368;
        }
    }
    ctx->pc = 0x2F9354u;
    // 0x2f9354: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F9354u;
    {
        const bool branch_taken_0x2f9354 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x2f9354) {
            ctx->pc = 0x2F9358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9354u;
            // 0x2f9358: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93B4u;
            goto label_2f93b4;
        }
    }
    ctx->pc = 0x2F935Cu;
    // 0x2f935c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x2f935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x2f9360: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F9360u;
    {
        const bool branch_taken_0x2f9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9360u;
        // 0x2f9364: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9360) {
            ctx->pc = 0x2F93A4u;
            goto label_2f93a4;
        }
    }
    ctx->pc = 0x2F9368u;
label_2f9368:
    // 0x2f9368: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x2f9368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x2f936c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f936cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9370: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2f9370u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2f9374: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9374u;
    {
        const bool branch_taken_0x2f9374 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x2F9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9374u;
        // 0x2f9378: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9374) {
            ctx->pc = 0x2F93B0u;
            goto label_2f93b0;
        }
    }
    ctx->pc = 0x2F937Cu;
    // 0x2f937c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F937Cu;
    {
        const bool branch_taken_0x2f937c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f937c) {
            ctx->pc = 0x2F9380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F937Cu;
            // 0x2f9380: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9394u;
            goto label_2f9394;
        }
    }
    ctx->pc = 0x2F9384u;
    // 0x2f9384: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2f9384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f9388: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9388u;
    {
        const bool branch_taken_0x2f9388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2f9388) {
            ctx->pc = 0x2F938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9388u;
            // 0x2f938c: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93B4u;
            goto label_2f93b4;
        }
    }
    ctx->pc = 0x2F9390u;
    // 0x2f9390: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x2f9390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_2f9394:
    // 0x2f9394: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2f9394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f9398: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9398u;
    {
        const bool branch_taken_0x2f9398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9398u;
        // 0x2f939c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9398) {
            ctx->pc = 0x2F93B8u;
            goto label_2f93b8;
        }
    }
    ctx->pc = 0x2F93A0u;
    // 0x2f93a0: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x2f93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2f93a4:
    // 0x2f93a4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2f93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f93a8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F93A8u;
    {
        const bool branch_taken_0x2f93a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93A8u;
        // 0x2f93ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93a8) {
            ctx->pc = 0x2F93B8u;
            goto label_2f93b8;
        }
    }
    ctx->pc = 0x2F93B0u;
label_2f93b0:
    // 0x2f93b0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2f93b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f93b4:
    // 0x2f93b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f93b8:
    // 0x2f93b8: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F93B8u;
    {
        const bool branch_taken_0x2f93b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93B8u;
        // 0x2f93bc: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93b8) {
            ctx->pc = 0x2F93ECu;
            goto label_2f93ec;
        }
    }
    ctx->pc = 0x2F93C0u;
    // 0x2f93c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F93C0u;
    {
        const bool branch_taken_0x2f93c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93C0u;
        // 0x2f93c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93c0) {
            ctx->pc = 0x2F93D8u;
            goto label_2f93d8;
        }
    }
    ctx->pc = 0x2F93C8u;
    // 0x2f93c8: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F93C8u;
    {
        const bool branch_taken_0x2f93c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f93c8) {
            ctx->pc = 0x2F93CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F93C8u;
            // 0x2f93cc: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93F0u;
            goto label_2f93f0;
        }
    }
    ctx->pc = 0x2F93D0u;
    // 0x2f93d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F93D0u;
    {
        const bool branch_taken_0x2f93d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93D0u;
        // 0x2f93d4: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93d0) {
            ctx->pc = 0x2F93F4u;
            goto label_2f93f4;
        }
    }
    ctx->pc = 0x2F93D8u;
label_2f93d8:
    // 0x2f93d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f93dc: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F93DCu;
    {
        const bool branch_taken_0x2f93dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f93dc) {
            ctx->pc = 0x2F93E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F93DCu;
            // 0x2f93e0: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93F0u;
            goto label_2f93f0;
        }
    }
    ctx->pc = 0x2F93E4u;
    // 0x2f93e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F93E4u;
    {
        const bool branch_taken_0x2f93e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F93E4u;
        // 0x2f93e8: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93e4) {
            ctx->pc = 0x2F93F4u;
            goto label_2f93f4;
        }
    }
    ctx->pc = 0x2F93ECu;
label_2f93ec:
    // 0x2f93ec: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x2f93ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_2f93f0:
    // 0x2f93f0: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x2f93f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_2f93f4:
    // 0x2f93f4: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x2f93f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93f8: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x2f93f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x2f93fc: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x2f93fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x2f9400: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x2f9400u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x2f9404: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x2f9404u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x2f9408: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x2f9408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x2f940c: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x2f940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x2f9410: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x2f9410u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x2f9414: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x2f9414u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x2f9418: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x2f9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x2f941c: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x2f941cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x2f9420: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x2f9420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x2f9424: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x2f9424u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x2f9428: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x2f9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x2f942c: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x2f942cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x2f9430: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x2f9430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x2f9434: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x2f9434u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x2f9438: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x2f9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x2f943c: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x2f943cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x2f9440: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x2f9440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x2f9444: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x2f9444u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x2f9448: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x2f9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x2f944c: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x2f944cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x2f9450: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x2f9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x2f9454: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x2f9454u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x2f9458: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x2f9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x2f945c: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x2f945cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x2f9460: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x2f9460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x2f9464: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x2f9464u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x2f9468: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x2f9468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x2f946c: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x2f946cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x2f9470: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x2f9470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x2f9474: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9474u;
        // 0x2f9478: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F947Cu;
    // 0x2f947c: 0x0  nop
    ctx->pc = 0x2f947cu;
    // NOP
    ctx->pc = 0x2f9480u;
}
