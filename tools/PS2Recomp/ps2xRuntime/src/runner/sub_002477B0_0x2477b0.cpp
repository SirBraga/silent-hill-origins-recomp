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

// Function: sub_002477B0
// Address: 0x2477b0 - 0x247850
void sub_002477B0_0x2477b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002477B0_0x2477b0");
#endif

    ctx->pc = 0x2477b0u;

    // 0x2477b0: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2477b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2477b4: 0x8ce7416c  lw          $a3, 0x416C($a3)
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x2477b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2477b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477bc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2477c0: 0x94e40014  lhu         $a0, 0x14($a3)
    ctx->pc = 0x2477c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2477c4: 0x90e30016  lbu         $v1, 0x16($a3)
    ctx->pc = 0x2477c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x2477c8: 0x44302  srl         $t0, $a0, 12
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x2477cc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2477ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2477d0: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x2477d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2477d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2477d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2477d8: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x2477d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x2477dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2477dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2477e0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2477e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2477e4: 0x20c1fffe  addi        $at, $a2, -0x2
    ctx->pc = 0x2477e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x2477e8: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2477E8u;
    {
        const bool branch_taken_0x2477e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2477e8) {
            ctx->pc = 0x2477ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2477E8u;
            // 0x2477ec: 0x34630060  ori         $v1, $v1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x2477F0u;
    // 0x2477f0: 0x422000a  bltzl       $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2477F0u;
    {
        const bool branch_taken_0x2477f0 = (GPR_S64(ctx, 1) < 0);
        if (branch_taken_0x2477f0) {
            ctx->pc = 0x2477F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2477F0u;
            // 0x2477f4: 0x34630000  ori         $v1, $v1, 0x0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x2477F8u;
    // 0x2477f8: 0x2021fffe  addi        $at, $at, -0x2
    ctx->pc = 0x2477f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x2477fc: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2477FCu;
    {
        const bool branch_taken_0x2477fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2477fc) {
            ctx->pc = 0x247800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2477FCu;
            // 0x247800: 0x34630120  ori         $v1, $v1, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x247804u;
    // 0x247804: 0x4220005  bltzl       $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x247804u;
    {
        const bool branch_taken_0x247804 = (GPR_S64(ctx, 1) < 0);
        if (branch_taken_0x247804) {
            ctx->pc = 0x247808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247804u;
            // 0x247808: 0x34630080  ori         $v1, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x24780Cu;
    // 0x24780c: 0x2021fffe  addi        $at, $at, -0x2
    ctx->pc = 0x24780cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x247810: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x247810u;
    {
        const bool branch_taken_0x247810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x247810) {
            ctx->pc = 0x247814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247810u;
            // 0x247814: 0x34630160  ori         $v1, $v1, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24781Cu;
            goto label_24781c;
        }
    }
    ctx->pc = 0x247818u;
    // 0x247818: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x247818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
label_24781c:
    // 0x24781c: 0x0  nop
    ctx->pc = 0x24781cu;
    // NOP
    // 0x247820: 0x3e00008  jr          $ra
    ctx->pc = 0x247820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247820u;
        // 0x247824: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247828u;
    // 0x247828: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x247828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x24782c: 0x0  nop
    ctx->pc = 0x24782cu;
    // NOP
    // 0x247830: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x247830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x247834: 0x0  nop
    ctx->pc = 0x247834u;
    // NOP
    // 0x247838: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x247838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x24783c: 0x0  nop
    ctx->pc = 0x24783cu;
    // NOP
    // 0x247840: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x247840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x247844: 0x0  nop
    ctx->pc = 0x247844u;
    // NOP
    // 0x247848: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x247848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x24784c: 0x0  nop
    ctx->pc = 0x24784cu;
    // NOP
    ctx->pc = 0x247850u;
}
