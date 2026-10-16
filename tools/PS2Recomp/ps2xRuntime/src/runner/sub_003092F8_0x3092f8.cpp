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

// Function: sub_003092F8
// Address: 0x3092f8 - 0x3094e0
void sub_003092F8_0x3092f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003092F8_0x3092f8");
#endif

    switch (ctx->pc) {
        case 0x309318u: goto label_309318;
        case 0x309358u: goto label_309358;
        case 0x309398u: goto label_309398;
        case 0x3093d8u: goto label_3093d8;
        default: break;
    }

    ctx->pc = 0x3092f8u;

    // 0x3092f8: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3092f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092fc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3092fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309300: 0x8d620144  lw          $v0, 0x144($t3)
    ctx->pc = 0x309300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 324)));
    // 0x309304: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x309304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x309308: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x309308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x30930c: 0x8c45fff8  lw          $a1, -0x8($v0)
    ctx->pc = 0x30930cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x309310: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x309310u;
    {
        const bool branch_taken_0x309310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309310u;
        // 0x309314: 0xad640144  sw          $a0, 0x144($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 324), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309310) {
            ctx->pc = 0x3094A8u;
            goto label_3094a8;
        }
    }
    ctx->pc = 0x309318u;
label_309318:
    // 0x309318: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x309318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x30931c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x30931Cu;
    {
        const bool branch_taken_0x30931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30931Cu;
        // 0x309320: 0x8d630000  lw          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30931c) {
            ctx->pc = 0x3093E0u;
            goto label_3093e0;
        }
    }
    ctx->pc = 0x309324u;
    // 0x309324: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x309324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x309328: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x309328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x30932c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x30932cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309330: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x309330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x309334: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x309334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x309338: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x309338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30933c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x30933cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x309340: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x309340u;
    {
        const bool branch_taken_0x309340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x309344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309340u;
        // 0x309344: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309340) {
            ctx->pc = 0x309374u;
            goto label_309374;
        }
    }
    ctx->pc = 0x309348u;
    // 0x309348: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x309348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30934c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x30934cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x309350: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x309350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x309354: 0x0  nop
    ctx->pc = 0x309354u;
    // NOP
label_309358:
    // 0x309358: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x309358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30935c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x30935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x309360: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x309360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x309364: 0x0  nop
    ctx->pc = 0x309364u;
    // NOP
    // 0x309368: 0x0  nop
    ctx->pc = 0x309368u;
    // NOP
    // 0x30936c: 0x5068fffa  beql        $v1, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30936Cu;
    {
        const bool branch_taken_0x30936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x30936c) {
            ctx->pc = 0x309370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30936Cu;
            // 0x309370: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309358;
        }
    }
    ctx->pc = 0x309374u;
label_309374:
    // 0x309374: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x309374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x309378: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x309378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30937c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x30937cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x309380: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x309380u;
    {
        const bool branch_taken_0x309380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x309384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309380u;
        // 0x309384: 0x94a90002  lhu         $t1, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309380) {
            ctx->pc = 0x3093B4u;
            goto label_3093b4;
        }
    }
    ctx->pc = 0x309388u;
    // 0x309388: 0x8d480020  lw          $t0, 0x20($t2)
    ctx->pc = 0x309388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x30938c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x30938cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x309390: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x309390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x309394: 0x0  nop
    ctx->pc = 0x309394u;
    // NOP
label_309398:
    // 0x309398: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x309398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30939c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x30939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3093a0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3093a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3093a4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3093a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3093a8: 0x0  nop
    ctx->pc = 0x3093a8u;
    // NOP
    // 0x3093ac: 0x506afffa  beql        $v1, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3093ACu;
    {
        const bool branch_taken_0x3093ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x3093ac) {
            ctx->pc = 0x3093B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3093ACu;
            // 0x3093b0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309398;
        }
    }
    ctx->pc = 0x3093B4u;
label_3093b4:
    // 0x3093b4: 0xa5a90000  sh          $t1, 0x0($t5)
    ctx->pc = 0x3093b4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x3093b8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x3093b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3093bc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3093bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3093c0: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x3093c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3093c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3093c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3093c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3093c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3093cc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3093ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3093d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3093D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093D0u;
        // 0x3093d4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3093D8u;
label_3093d8:
    // 0x3093d8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3093D8u;
    {
        const bool branch_taken_0x3093d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3093DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093D8u;
        // 0x3093dc: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093d8) {
            ctx->pc = 0x30949Cu;
            goto label_30949c;
        }
    }
    ctx->pc = 0x3093E0u;
label_3093e0:
    // 0x3093e0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3093e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3093e4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x3093e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3093e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3093ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3093ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3093f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3093f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3093f4: 0x306c000c  andi        $t4, $v1, 0xC
    ctx->pc = 0x3093f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x3093f8: 0x18b5021  addu        $t2, $t4, $t3
    ctx->pc = 0x3093f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x3093fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3093fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309400: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x309400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309404: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309408: 0x0  nop
    ctx->pc = 0x309408u;
    // NOP
    // 0x30940c: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x30940Cu;
    {
        const bool branch_taken_0x30940c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30940Cu;
        // 0x309410: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30940c) {
            ctx->pc = 0x3093D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3093d8;
        }
    }
    ctx->pc = 0x309414u;
    // 0x309414: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x309414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309418: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x309418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30941c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30941cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309420: 0x0  nop
    ctx->pc = 0x309420u;
    // NOP
    // 0x309424: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x309424u;
    {
        const bool branch_taken_0x309424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309424u;
        // 0x309428: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309424) {
            ctx->pc = 0x30949Cu;
            goto label_30949c;
        }
    }
    ctx->pc = 0x30942Cu;
    // 0x30942c: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x30942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309430: 0x25250008  addiu       $a1, $t1, 0x8
    ctx->pc = 0x309430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x309434: 0x8ca8fffc  lw          $t0, -0x4($a1)
    ctx->pc = 0x309434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x309438: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x309438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30943c: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x30943cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x309440: 0xad650144  sw          $a1, 0x144($t3)
    ctx->pc = 0x309440u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 324), GPR_U32(ctx, 5));
    // 0x309444: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x309444u;
    {
        const bool branch_taken_0x309444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309444u;
        // 0x309448: 0xaca80004  sw          $t0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309444) {
            ctx->pc = 0x309468u;
            goto label_309468;
        }
    }
    ctx->pc = 0x30944Cu;
    // 0x30944c: 0xc1842  srl         $v1, $t4, 1
    ctx->pc = 0x30944cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
    // 0x309450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x309450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309454: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x309454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x309458: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x309458u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30945c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x30945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x309460: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x309460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x309464: 0x0  nop
    ctx->pc = 0x309464u;
    // NOP
label_309468:
    // 0x309468: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x309468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30946c: 0xc5400028  lwc1        $f0, 0x28($t2)
    ctx->pc = 0x30946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309470: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309474: 0x0  nop
    ctx->pc = 0x309474u;
    // NOP
    // 0x309478: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x309478u;
    {
        const bool branch_taken_0x309478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309478u;
        // 0x30947c: 0xc2042  srl         $a0, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309478) {
            ctx->pc = 0x30949Cu;
            goto label_30949c;
        }
    }
    ctx->pc = 0x309480u;
    // 0x309480: 0x8d650144  lw          $a1, 0x144($t3)
    ctx->pc = 0x309480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 324)));
    // 0x309484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309488: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x309488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x30948c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x30948cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x309490: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x309490u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x309494: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x309494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x309498: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x309498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
label_30949c:
    // 0x30949c: 0x8d640144  lw          $a0, 0x144($t3)
    ctx->pc = 0x30949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 324)));
    // 0x3094a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3094a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3094a4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3094a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3094a8:
    // 0x3094a8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3094a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3094ac: 0x5043ff9a  beql        $v0, $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x3094ACu;
    {
        const bool branch_taken_0x3094ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3094ac) {
            ctx->pc = 0x3094B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3094ACu;
            // 0x3094b0: 0x8d690144  lw          $t1, 0x144($t3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309318;
        }
    }
    ctx->pc = 0x3094B4u;
    // 0x3094b4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3094b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3094b8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3094b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3094bc: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x3094bcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3094c0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3094c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3094c4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3094c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3094c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3094C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3094CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094C8u;
        // 0x3094cc: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3094C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3094D0u;
    // 0x3094d0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3094d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3094d4: 0x0  nop
    ctx->pc = 0x3094d4u;
    // NOP
    // 0x3094d8: 0xac82033c  sw          $v0, 0x33C($a0)
    ctx->pc = 0x3094d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 2));
    // 0x3094dc: 0x0  nop
    ctx->pc = 0x3094dcu;
    // NOP
    ctx->pc = 0x3094e0u;
}
