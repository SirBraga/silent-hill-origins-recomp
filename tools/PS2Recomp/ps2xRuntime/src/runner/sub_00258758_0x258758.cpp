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

// Function: sub_00258758
// Address: 0x258758 - 0x258838
void sub_00258758_0x258758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258758_0x258758");
#endif

    switch (ctx->pc) {
        case 0x258780u: goto label_258780;
        case 0x258790u: goto label_258790;
        default: break;
    }

    ctx->pc = 0x258758u;

    // 0x258758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25875c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x258760: 0x8c4241ac  lw          $v0, 0x41AC($v0)
    ctx->pc = 0x258760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41ACu));
    // 0x258764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x258764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x258768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25876c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25876cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258770: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258770u;
    {
        const bool branch_taken_0x258770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258770u;
        // 0x258774: 0xaf859138  sw          $a1, -0x6EC8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258770) {
            ctx->pc = 0x258798u;
            goto label_258798;
        }
    }
    ctx->pc = 0x258778u;
    // 0x258778: 0xc0961a2  jal         func_258688
    ctx->pc = 0x258778u;
    SET_GPR_U32(ctx, 31, 0x258780u);
    ctx->pc = 0x258688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258688u, 0x258778u, 0x258780u)) {
        return;
    }
    ctx->pc = 0x258780u;
label_258780:
    // 0x258780: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258780u;
    {
        const bool branch_taken_0x258780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258780u;
        // 0x258784: 0x8f839138  lw          $v1, -0x6EC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258780) {
            ctx->pc = 0x2587A0u;
            goto label_2587a0;
        }
    }
    ctx->pc = 0x258788u;
    // 0x258788: 0xc096198  jal         func_258660
    ctx->pc = 0x258788u;
    SET_GPR_U32(ctx, 31, 0x258790u);
    ctx->pc = 0x258660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258660u, 0x258788u, 0x258790u)) {
        return;
    }
    ctx->pc = 0x258790u;
label_258790:
    // 0x258790: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x258790u;
    {
        const bool branch_taken_0x258790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258790u;
        // 0x258794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258790) {
            ctx->pc = 0x258828u;
            goto label_258828;
        }
    }
    ctx->pc = 0x258798u;
label_258798:
    // 0x258798: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x258798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25879c: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25879cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41A8u));
label_2587a0:
    // 0x2587a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2587a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2587a4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2587a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2587a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2587a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2587ac: 0x8c8441ac  lw          $a0, 0x41AC($a0)
    ctx->pc = 0x2587acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B41ACu));
    // 0x2587b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2587b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2587b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2587b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2587b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2587b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2587bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2587bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2587c0: 0xa062004e  sb          $v0, 0x4E($v1)
    ctx->pc = 0x2587c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2587c4: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x2587c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2587c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2587c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2587cc: 0xac2441ac  sw          $a0, 0x41AC($at)
    ctx->pc = 0x2587ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B41ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41ACu, _value); } while (0);
    // 0x2587d0: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x2587d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2587d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2587d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2587d8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2587d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2587dc: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2587dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2587e0: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2587e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2587e4: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2587e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2587e8: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x2587e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2587ec: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x2587ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x2587f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2587f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587f4: 0xa067000a  sb          $a3, 0xA($v1)
    ctx->pc = 0x2587f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x2587f8: 0xa0680018  sb          $t0, 0x18($v1)
    ctx->pc = 0x2587f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 8));
    // 0x2587fc: 0xa0690028  sb          $t1, 0x28($v1)
    ctx->pc = 0x2587fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 9));
    // 0x258800: 0xa06c0048  sb          $t4, 0x48($v1)
    ctx->pc = 0x258800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 12));
    // 0x258804: 0xa06a0049  sb          $t2, 0x49($v1)
    ctx->pc = 0x258804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 10));
    // 0x258808: 0xa065004b  sb          $a1, 0x4B($v1)
    ctx->pc = 0x258808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 75), (uint8_t)GPR_U32(ctx, 5));
    // 0x25880c: 0xa06d004c  sb          $t5, 0x4C($v1)
    ctx->pc = 0x25880cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 13));
    // 0x258810: 0xa06b004d  sb          $t3, 0x4D($v1)
    ctx->pc = 0x258810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 11));
    // 0x258814: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x258814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x258818: 0xa06c0009  sb          $t4, 0x9($v1)
    ctx->pc = 0x258818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 12));
    // 0x25881c: 0xa065000c  sb          $a1, 0xC($v1)
    ctx->pc = 0x25881cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x258820: 0xa06d0010  sb          $t5, 0x10($v1)
    ctx->pc = 0x258820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 13));
    // 0x258824: 0xa060004a  sb          $zero, 0x4A($v1)
    ctx->pc = 0x258824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 74), (uint8_t)GPR_U32(ctx, 0));
label_258828:
    // 0x258828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x258828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25882c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258830: 0x3e00008  jr          $ra
    ctx->pc = 0x258830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258830u;
        // 0x258834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258838u;
}
