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

// Function: sub_0021DB58
// Address: 0x21db58 - 0x21dce0
void sub_0021DB58_0x21db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DB58_0x21db58");
#endif

    switch (ctx->pc) {
        case 0x21dbb8u: goto label_21dbb8;
        case 0x21dc08u: goto label_21dc08;
        default: break;
    }

    ctx->pc = 0x21db58u;

    // 0x21db58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21db58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21db5c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x21db5cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x21db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x21db64: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21db64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21db68: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x21db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x21db6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21db6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db70: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x21db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x21db74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21db74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db78: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x21db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x21db7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21db80: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x21db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x21db84: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x21db84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x21db88: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x21db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x21db8c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x21db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x21db90: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x21db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x21db94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21db98: 0x8c8201c8  lw          $v0, 0x1C8($a0)
    ctx->pc = 0x21db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x21db9c: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x21db9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21dba0: 0x8c5e0014  lw          $fp, 0x14($v0)
    ctx->pc = 0x21dba0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x21dba4: 0x8c570008  lw          $s7, 0x8($v0)
    ctx->pc = 0x21dba4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21dba8: 0x8c56000c  lw          $s6, 0xC($v0)
    ctx->pc = 0x21dba8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21dbac: 0x5000041  bltz        $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21DBACu;
    {
        const bool branch_taken_0x21dbac = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x21DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBACu;
        // 0x21dbb0: 0x8c550010  lw          $s5, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbac) {
            ctx->pc = 0x21DCB4u;
            goto label_21dcb4;
        }
    }
    ctx->pc = 0x21DBB4u;
    // 0x21dbb4: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x21dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_21dbb8:
    // 0x21dbb8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x21dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21dbbc: 0x8dc50004  lw          $a1, 0x4($t6)
    ctx->pc = 0x21dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x21dbc0: 0x2514ffff  addiu       $s4, $t0, -0x1
    ctx->pc = 0x21dbc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21dbc4: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x21dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x21dbc8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x21dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21dbcc: 0x8dc6000c  lw          $a2, 0xC($t6)
    ctx->pc = 0x21dbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x21dbd0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x21dbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21dbd4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dbd8: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21dbdc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21dbe0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21dbe4: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x21dbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21dbe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21dbe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21dbec: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x21dbecu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21dbf0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21dbf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbf4: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x21dbf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21dbf8: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x21DBF8u;
    {
        const bool branch_taken_0x21dbf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBF8u;
        // 0x21dbfc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbf8) {
            ctx->pc = 0x21DCA8u;
            goto label_21dca8;
        }
    }
    ctx->pc = 0x21DC00u;
    // 0x21dc00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dc04: 0x244d00ff  addiu       $t5, $v0, 0xFF
    ctx->pc = 0x21dc04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
label_21dc08:
    // 0x21dc08: 0x30b1021  addu        $v0, $t8, $t3
    ctx->pc = 0x21dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x21dc0c: 0x22b1821  addu        $v1, $s1, $t3
    ctx->pc = 0x21dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x21dc10: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x21dc10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21dc14: 0x32b2821  addu        $a1, $t9, $t3
    ctx->pc = 0x21dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x21dc18: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x21dc18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21dc1c: 0x1eb5021  addu        $t2, $t7, $t3
    ctx->pc = 0x21dc1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x21dc20: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21dc24: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21dc24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21dc28: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x21dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x21dc2c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x21dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21dc30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21dc34: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x21dc34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21dc38: 0x11e4021  addu        $t0, $t0, $fp
    ctx->pc = 0x21dc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
    // 0x21dc3c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x21dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x21dc40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x21dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21dc44: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21dc48: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x21dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x21dc4c: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x21dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x21dc50: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x21dc50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21dc54: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21dc54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x21dc58: 0x173482b  sltu        $t1, $t3, $s3
    ctx->pc = 0x21dc58u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x21dc5c: 0xa1850000  sb          $a1, 0x0($t4)
    ctx->pc = 0x21dc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x21dc60: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x21dc60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21dc64: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x21dc64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21dc68: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x21dc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x21dc6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21dc70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21dc70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21dc74: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21dc78: 0x1a21023  subu        $v0, $t5, $v0
    ctx->pc = 0x21dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x21dc7c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21dc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21dc80: 0xa1830001  sb          $v1, 0x1($t4)
    ctx->pc = 0x21dc80u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21dc84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21dc88: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x21dc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21dc8c: 0x1a73823  subu        $a3, $t5, $a3
    ctx->pc = 0x21dc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x21dc90: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x21dc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21dc94: 0xa1820002  sb          $v0, 0x2($t4)
    ctx->pc = 0x21dc94u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dc98: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x21dc98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x21dc9c: 0xa1830003  sb          $v1, 0x3($t4)
    ctx->pc = 0x21dc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x21dca0: 0x1520ffd9  bnez        $t1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x21DCA0u;
    {
        const bool branch_taken_0x21dca0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCA0u;
        // 0x21dca4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dca0) {
            ctx->pc = 0x21DC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dc08;
        }
    }
    ctx->pc = 0x21DCA8u;
label_21dca8:
    // 0x21dca8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x21dca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcac: 0x503ffc2  bgezl       $t0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x21DCACu;
    {
        const bool branch_taken_0x21dcac = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x21dcac) {
            ctx->pc = 0x21DCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DCACu;
            // 0x21dcb0: 0x8dc40000  lw          $a0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dbb8;
        }
    }
    ctx->pc = 0x21DCB4u;
label_21dcb4:
    // 0x21dcb4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x21dcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21dcb8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x21dcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21dcbc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x21dcbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21dcc0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21dcc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21dcc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21dcc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21dcc8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x21dcc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21dccc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x21dcccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21dcd0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x21dcd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dcd4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x21dcd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x21DCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCD8u;
        // 0x21dcdc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DCE0u;
}
