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

// Function: sub_00231600
// Address: 0x231600 - 0x231698
void sub_00231600_0x231600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231600_0x231600");
#endif

    ctx->pc = 0x231600u;

    // 0x231600: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x231600u;
    {
        const bool branch_taken_0x231600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231600) {
            ctx->pc = 0x231688u;
            goto label_231688;
        }
    }
    ctx->pc = 0x231608u;
    // 0x231608: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x231608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23160c: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x23160Cu;
    {
        const bool branch_taken_0x23160c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23160c) {
            ctx->pc = 0x231688u;
            goto label_231688;
        }
    }
    ctx->pc = 0x231614u;
    // 0x231614: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x231614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x231618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23161c: 0x0  nop
    ctx->pc = 0x23161cu;
    // NOP
    // 0x231620: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x231620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x231624: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x231624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x231628: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x231628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x23162c: 0x28c2f800  slti        $v0, $a2, -0x800
    ctx->pc = 0x23162cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294965248) ? 1 : 0);
    // 0x231630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231630u;
    {
        const bool branch_taken_0x231630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231630u;
        // 0x231634: 0x28c30800  slti        $v1, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231630) {
            ctx->pc = 0x231640u;
            goto label_231640;
        }
    }
    ctx->pc = 0x231638u;
    // 0x231638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231638u;
    {
        const bool branch_taken_0x231638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231638u;
        // 0x23163c: 0x2406f800  addiu       $a2, $zero, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231638) {
            ctx->pc = 0x231648u;
            goto label_231648;
        }
    }
    ctx->pc = 0x231640u;
label_231640:
    // 0x231640: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x231640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x231644: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x231644u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_231648:
    // 0x231648: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x231648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x23164c: 0x8ca5416c  lw          $a1, 0x416C($a1)
    ctx->pc = 0x23164cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x231650: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x231650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231654: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x231654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x231658: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x231658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x23165c: 0x94a30014  lhu         $v1, 0x14($a1)
    ctx->pc = 0x23165cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x231660: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x231660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x231664: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x231664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x231668: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x231668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23166c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x23166cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x231670: 0x8ca5416c  lw          $a1, 0x416C($a1)
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x231674: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x231674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x231678: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x231678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x23167c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x23167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x231680: 0x3e00008  jr          $ra
    ctx->pc = 0x231680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231680u;
        // 0x231684: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231688u;
label_231688:
    // 0x231688: 0x3e00008  jr          $ra
    ctx->pc = 0x231688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231688u;
        // 0x23168c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231690u;
    // 0x231690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231694: 0x0  nop
    ctx->pc = 0x231694u;
    // NOP
    ctx->pc = 0x231698u;
}
