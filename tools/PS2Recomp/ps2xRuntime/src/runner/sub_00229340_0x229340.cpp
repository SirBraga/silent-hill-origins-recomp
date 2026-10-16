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

// Function: sub_00229340
// Address: 0x229340 - 0x2293c8
void sub_00229340_0x229340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229340_0x229340");
#endif

    switch (ctx->pc) {
        case 0x229340u: goto label_229340;
        case 0x229344u: goto label_229344;
        case 0x229348u: goto label_229348;
        case 0x22934cu: goto label_22934c;
        case 0x229350u: goto label_229350;
        case 0x229354u: goto label_229354;
        case 0x229358u: goto label_229358;
        case 0x22935cu: goto label_22935c;
        case 0x229360u: goto label_229360;
        case 0x229364u: goto label_229364;
        case 0x229368u: goto label_229368;
        case 0x22936cu: goto label_22936c;
        case 0x229370u: goto label_229370;
        case 0x229374u: goto label_229374;
        case 0x229378u: goto label_229378;
        case 0x22937cu: goto label_22937c;
        case 0x229380u: goto label_229380;
        case 0x229384u: goto label_229384;
        case 0x229388u: goto label_229388;
        case 0x22938cu: goto label_22938c;
        case 0x229390u: goto label_229390;
        case 0x229394u: goto label_229394;
        case 0x229398u: goto label_229398;
        case 0x22939cu: goto label_22939c;
        case 0x2293a0u: goto label_2293a0;
        case 0x2293a4u: goto label_2293a4;
        case 0x2293a8u: goto label_2293a8;
        case 0x2293acu: goto label_2293ac;
        case 0x2293b0u: goto label_2293b0;
        case 0x2293b4u: goto label_2293b4;
        case 0x2293b8u: goto label_2293b8;
        case 0x2293bcu: goto label_2293bc;
        case 0x2293c0u: goto label_2293c0;
        case 0x2293c4u: goto label_2293c4;
        default: break;
    }

    ctx->pc = 0x229340u;

label_229340:
    // 0x229340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_229344:
    // 0x229344: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_229348:
    // 0x229348: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x229348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22934c:
    // 0x22934c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22934cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229350:
    // 0x229350: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_229354:
    // 0x229354: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_229358:
    if (ctx->pc == 0x229358u) {
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229354u;
        // 0x229358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22935Cu;
        goto label_22935c;
    }
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229354u;
        // 0x229358: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229354) {
            ctx->pc = 0x2293B0u;
            goto label_2293b0;
        }
    }
    ctx->pc = 0x22935Cu;
label_22935c:
    // 0x22935c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_229360:
    // 0x229360: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x229360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_229364:
    // 0x229364: 0x5092000b  beql        $a0, $s2, . + 4 + (0xB << 2)
label_229368:
    if (ctx->pc == 0x229368u) {
        ctx->pc = 0x229368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229364u;
        // 0x229368: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22936Cu;
        goto label_22936c;
    }
    ctx->pc = 0x229364u;
    {
        const bool branch_taken_0x229364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x229364) {
            ctx->pc = 0x229368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229364u;
            // 0x229368: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229394u;
            goto label_229394;
        }
    }
    ctx->pc = 0x22936Cu;
label_22936c:
    // 0x22936c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22936cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229370:
    // 0x229370: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x229370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_229374:
    // 0x229374: 0x0  nop
    ctx->pc = 0x229374u;
    // NOP
label_229378:
    // 0x229378: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x229378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22937c:
    // 0x22937c: 0x40f809  jalr        $v0
label_229380:
    if (ctx->pc == 0x229380u) {
        ctx->pc = 0x229384u;
        goto label_229384;
    }
    ctx->pc = 0x22937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22937Cu, 0x229384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229384u;
label_229384:
    // 0x229384: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x229384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229388:
    // 0x229388: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_22938c:
    if (ctx->pc == 0x22938Cu) {
        ctx->pc = 0x22938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229388u;
        // 0x22938c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229390u;
        goto label_229390;
    }
    ctx->pc = 0x229388u;
    {
        const bool branch_taken_0x229388 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x22938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229388u;
        // 0x22938c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229388) {
            ctx->pc = 0x229378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229378;
        }
    }
    ctx->pc = 0x229390u;
label_229390:
    // 0x229390: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x229390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_229394:
    // 0x229394: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x229394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_229398:
    // 0x229398: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x229398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_22939c:
    // 0x22939c: 0xc08a4d0  jal         func_229340
label_2293a0:
    if (ctx->pc == 0x2293A0u) {
        ctx->pc = 0x2293A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22939Cu;
        // 0x2293a0: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2293A4u;
        goto label_2293a4;
    }
    ctx->pc = 0x22939Cu;
    SET_GPR_U32(ctx, 31, 0x2293A4u);
    ctx->pc = 0x2293A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22939Cu;
    // 0x2293a0: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229340u;
    goto label_229340;
    ctx->pc = 0x2293A4u;
label_2293a4:
    // 0x2293a4: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x2293a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2293a8:
    // 0x2293a8: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_2293ac:
    if (ctx->pc == 0x2293ACu) {
        ctx->pc = 0x2293ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293A8u;
        // 0x2293ac: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2293B0u;
        goto label_2293b0;
    }
    ctx->pc = 0x2293A8u;
    {
        const bool branch_taken_0x2293a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2293a8) {
            ctx->pc = 0x2293ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2293A8u;
            // 0x2293ac: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229360;
        }
    }
    ctx->pc = 0x2293B0u;
label_2293b0:
    // 0x2293b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2293b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2293b4:
    // 0x2293b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2293b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2293b8:
    // 0x2293b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2293b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2293bc:
    // 0x2293bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2293bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2293c0:
    // 0x2293c0: 0x3e00008  jr          $ra
label_2293c4:
    if (ctx->pc == 0x2293C4u) {
        ctx->pc = 0x2293C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293C0u;
        // 0x2293c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2293C8u;
        goto label_fallthrough_0x2293c0;
    }
    ctx->pc = 0x2293C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2293C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293C0u;
        // 0x2293c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2293C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2293c0:
    ctx->pc = 0x2293C8u;
}
