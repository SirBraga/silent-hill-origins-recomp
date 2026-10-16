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

// Function: sub_002BFBD8
// Address: 0x2bfbd8 - 0x2c01c0
void sub_002BFBD8_0x2bfbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFBD8_0x2bfbd8");
#endif

    switch (ctx->pc) {
        case 0x2bfc38u: goto label_2bfc38;
        case 0x2bfd00u: goto label_2bfd00;
        case 0x2bfdf8u: goto label_2bfdf8;
        case 0x2bfed0u: goto label_2bfed0;
        case 0x2c0068u: goto label_2c0068;
        default: break;
    }

    ctx->pc = 0x2bfbd8u;

    // 0x2bfbd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bfbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2bfbdc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2bfbdcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbe0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bfbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2bfbe4: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2bfbe4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbe8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bfbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2bfbec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bfbecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbf0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2bfbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2bfbf4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2bfbf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbf8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2bfbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2bfbfc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2bfbfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc00: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bfc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2bfc04: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2bfc04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bfc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bfc0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bfc0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc10: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2bfc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2bfc14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bfc14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc18: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x2bfc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x2bfc1c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bfc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2bfc20: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2bfc20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bfc24: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bfc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bfc28: 0x120000d9  beqz        $s0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2BFC28u;
    {
        const bool branch_taken_0x2bfc28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC28u;
        // 0x2bfc2c: 0x90c00b  movn        $t8, $a0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc28) {
            ctx->pc = 0x2BFF90u;
            goto label_2bff90;
        }
    }
    ctx->pc = 0x2BFC30u;
    // 0x2bfc30: 0x8f3e0010  lw          $fp, 0x10($t9)
    ctx->pc = 0x2bfc30u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2bfc34: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x2bfc34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2bfc38:
    // 0x2bfc38: 0x1571018  mult        $v0, $t2, $s7
    ctx->pc = 0x2bfc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bfc3c: 0x8f230008  lw          $v1, 0x8($t9)
    ctx->pc = 0x2bfc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2bfc40: 0x25540001  addiu       $s4, $t2, 0x1
    ctx->pc = 0x2bfc40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2bfc44: 0x8f0c0004  lw          $t4, 0x4($t8)
    ctx->pc = 0x2bfc44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2bfc48: 0x8f0f0010  lw          $t7, 0x10($t8)
    ctx->pc = 0x2bfc48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2bfc4c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2bfc4cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc50: 0x8f06001c  lw          $a2, 0x1C($t8)
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x2bfc54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2bfc54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc58: 0x5e6821  addu        $t5, $v0, $fp
    ctx->pc = 0x2bfc58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2bfc5c: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x2bfc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2bfc60: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2bfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2bfc64: 0x8f050008  lw          $a1, 0x8($t8)
    ctx->pc = 0x2bfc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x2bfc68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bfc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfc6c: 0x27130028  addiu       $s3, $t8, 0x28
    ctx->pc = 0x2bfc6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 24), 40));
    // 0x2bfc70: 0x1180003b  beqz        $t4, . + 4 + (0x3B << 2)
    ctx->pc = 0x2BFC70u;
    {
        const bool branch_taken_0x2bfc70 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC70u;
        // 0x2bfc74: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc70) {
            ctx->pc = 0x2BFD60u;
            goto label_2bfd60;
        }
    }
    ctx->pc = 0x2BFC78u;
    // 0x2bfc78: 0x31840003  andi        $a0, $t4, 0x3
    ctx->pc = 0x2bfc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x2bfc7c: 0x19800016  blez        $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BFC7Cu;
    {
        const bool branch_taken_0x2bfc7c = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2BFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC7Cu;
        // 0x2bfc80: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc7c) {
            ctx->pc = 0x2BFCD8u;
            goto label_2bfcd8;
        }
    }
    ctx->pc = 0x2BFC84u;
    // 0x2bfc84: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BFC84u;
    {
        const bool branch_taken_0x2bfc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc84) {
            ctx->pc = 0x2BFC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC84u;
            // 0x2bfc88: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFD04u;
            goto label_2bfd04;
        }
    }
    ctx->pc = 0x2BFC8Cu;
    // 0x2bfc8c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2bfc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bfc90: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BFC90u;
    {
        const bool branch_taken_0x2bfc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc90) {
            ctx->pc = 0x2BFC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC90u;
            // 0x2bfc94: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFCDCu;
            goto label_2bfcdc;
        }
    }
    ctx->pc = 0x2BFC98u;
    // 0x2bfc98: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2bfc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bfc9c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFC9Cu;
    {
        const bool branch_taken_0x2bfc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc9c) {
            ctx->pc = 0x2BFCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC9Cu;
            // 0x2bfca0: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFCC0u;
            goto label_2bfcc0;
        }
    }
    ctx->pc = 0x2BFCA4u;
    // 0x2bfca4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2bfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bfca8: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x2bfca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bfcac: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfcb0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2bfcb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfcb4: 0x944a000c  lhu         $t2, 0xC($v0)
    ctx->pc = 0x2bfcb4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2bfcb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2bfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2bfcbc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2bfcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2bfcc0:
    // 0x2bfcc0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2bfcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2bfcc4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfcc8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2bfcc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bfccc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2bfcccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2bfcd0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2bfcd4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2bfcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2bfcd8:
    // 0x2bfcd8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2bfcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2bfcdc:
    // 0x2bfcdc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2bfcdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2bfce0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfce4: 0x1cc582b  sltu        $t3, $t6, $t4
    ctx->pc = 0x2bfce4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2bfce8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2bfce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bfcec: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2bfcf0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2bfcf4: 0x1160001a  beqz        $t3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BFCF4u;
    {
        const bool branch_taken_0x2bfcf4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCF4u;
        // 0x2bfcf8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfcf4) {
            ctx->pc = 0x2BFD60u;
            goto label_2bfd60;
        }
    }
    ctx->pc = 0x2BFCFCu;
    // 0x2bfcfc: 0x0  nop
    ctx->pc = 0x2bfcfcu;
    // NOP
label_2bfd00:
    // 0x2bfd00: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2bfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2bfd04:
    // 0x2bfd04: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x2bfd04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2bfd08: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfd0c: 0x1cc582b  sltu        $t3, $t6, $t4
    ctx->pc = 0x2bfd0cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2bfd10: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2bfd10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2bfd14: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x2bfd14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bfd18: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2bfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bfd1c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfd20: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2bfd20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2bfd24: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2bfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2bfd28: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x2bfd28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2bfd2c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2bfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bfd30: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfd34: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2bfd34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2bfd38: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2bfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2bfd3c: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x2bfd3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bfd40: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2bfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bfd44: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2bfd44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2bfd48: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2bfd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bfd4c: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x2bfd4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2bfd50: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x2bfd50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x2bfd54: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x2bfd54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2bfd58: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2BFD58u;
    {
        const bool branch_taken_0x2bfd58 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD58u;
        // 0x2bfd5c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd58) {
            ctx->pc = 0x2BFD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfd00;
        }
    }
    ctx->pc = 0x2BFD60u;
label_2bfd60:
    // 0x2bfd60: 0x8f22000c  lw          $v0, 0xC($t9)
    ctx->pc = 0x2bfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x2bfd64: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x2bfd64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x2bfd68: 0xadaa0014  sw          $t2, 0x14($t5)
    ctx->pc = 0x2bfd68u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 10));
    // 0x2bfd6c: 0x22f5821  addu        $t3, $s1, $t7
    ctx->pc = 0x2bfd6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x2bfd70: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2bfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2bfd74: 0xadac000c  sw          $t4, 0xC($t5)
    ctx->pc = 0x2bfd74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 12));
    // 0x2bfd78: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x2bfd78u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x2bfd7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfd7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd80: 0x11e0002d  beqz        $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BFD80u;
    {
        const bool branch_taken_0x2bfd80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD80u;
        // 0x2bfd84: 0x8f040014  lw          $a0, 0x14($t8) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd80) {
            ctx->pc = 0x2BFE38u;
            goto label_2bfe38;
        }
    }
    ctx->pc = 0x2BFD88u;
    // 0x2bfd88: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2bfd88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd8c: 0x31e30003  andi        $v1, $t7, 0x3
    ctx->pc = 0x2bfd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x2bfd90: 0x19e00012  blez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BFD90u;
    {
        const bool branch_taken_0x2bfd90 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x2BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD90u;
        // 0x2bfd94: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd90) {
            ctx->pc = 0x2BFDDCu;
            goto label_2bfddc;
        }
    }
    ctx->pc = 0x2BFD98u;
    // 0x2bfd98: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BFD98u;
    {
        const bool branch_taken_0x2bfd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd98) {
            ctx->pc = 0x2BFD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD98u;
            // 0x2bfd9c: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDFCu;
            goto label_2bfdfc;
        }
    }
    ctx->pc = 0x2BFDA0u;
    // 0x2bfda0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2bfda0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bfda4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BFDA4u;
    {
        const bool branch_taken_0x2bfda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA4u;
        // 0x2bfda8: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfda4) {
            ctx->pc = 0x2BFDE0u;
            goto label_2bfde0;
        }
    }
    ctx->pc = 0x2BFDACu;
    // 0x2bfdac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2bfdacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bfdb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFDB0u;
    {
        const bool branch_taken_0x2bfdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDB0u;
        // 0x2bfdb4: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdb0) {
            ctx->pc = 0x2BFDCCu;
            goto label_2bfdcc;
        }
    }
    ctx->pc = 0x2BFDB8u;
    // 0x2bfdb8: 0x25450004  addiu       $a1, $t2, 0x4
    ctx->pc = 0x2bfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2bfdbc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2bfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2bfdc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bfdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfdc4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfdc8: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x2bfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_2bfdcc:
    // 0x2bfdcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bfdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bfdd0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2bfdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2bfdd4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfdd8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2bfdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2bfddc:
    // 0x2bfddc: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x2bfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_2bfde0:
    // 0x2bfde0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bfde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bfde4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2bfde4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2bfde8: 0xef502b  sltu        $t2, $a3, $t7
    ctx->pc = 0x2bfde8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x2bfdec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfdf0: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BFDF0u;
    {
        const bool branch_taken_0x2bfdf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDF0u;
        // 0x2bfdf4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdf0) {
            ctx->pc = 0x2BFE38u;
            goto label_2bfe38;
        }
    }
    ctx->pc = 0x2BFDF8u;
label_2bfdf8:
    // 0x2bfdf8: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_2bfdfc:
    // 0x2bfdfc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2bfdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2bfe00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfe04: 0xef502b  sltu        $t2, $a3, $t7
    ctx->pc = 0x2bfe04u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x2bfe08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2bfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2bfe0c: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x2bfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2bfe10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfe14: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2bfe14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2bfe18: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x2bfe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2bfe1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfe20: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2bfe20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2bfe24: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x2bfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2bfe28: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2bfe28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2bfe2c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfe30: 0x1540fff1  bnez        $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BFE30u;
    {
        const bool branch_taken_0x2bfe30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE30u;
        // 0x2bfe34: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe30) {
            ctx->pc = 0x2BFDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfdf8;
        }
    }
    ctx->pc = 0x2BFE38u;
label_2bfe38:
    // 0x2bfe38: 0xadaf0010  sw          $t7, 0x10($t5)
    ctx->pc = 0x2bfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 15));
    // 0x2bfe3c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x2bfe3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe40: 0x8f030020  lw          $v1, 0x20($t8)
    ctx->pc = 0x2bfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x2bfe44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bfe44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe48: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x2bfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x2bfe4c: 0x10c00049  beqz        $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x2BFE4Cu;
    {
        const bool branch_taken_0x2bfe4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE4Cu;
        // 0x2bfe50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe4c) {
            ctx->pc = 0x2BFF74u;
            goto label_2bff74;
        }
    }
    ctx->pc = 0x2BFE54u;
    // 0x2bfe54: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BFE54u;
    {
        const bool branch_taken_0x2bfe54 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2BFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE54u;
        // 0x2bfe58: 0x30c40003  andi        $a0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe54) {
            ctx->pc = 0x2BFEA8u;
            goto label_2bfea8;
        }
    }
    ctx->pc = 0x2BFE5Cu;
    // 0x2bfe5c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2BFE5Cu;
    {
        const bool branch_taken_0x2bfe5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE5Cu;
        // 0x2bfe60: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe5c) {
            ctx->pc = 0x2BFED0u;
            goto label_2bfed0;
        }
    }
    ctx->pc = 0x2BFE64u;
    // 0x2bfe64: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BFE64u;
    {
        const bool branch_taken_0x2bfe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE64u;
        // 0x2bfe68: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe64) {
            ctx->pc = 0x2BFEA8u;
            goto label_2bfea8;
        }
    }
    ctx->pc = 0x2BFE6Cu;
    // 0x2bfe6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFE6Cu;
    {
        const bool branch_taken_0x2bfe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE6Cu;
        // 0x2bfe70: 0x2462ff2c  addiu       $v0, $v1, -0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe6c) {
            ctx->pc = 0x2BFE84u;
            goto label_2bfe84;
        }
    }
    ctx->pc = 0x2BFE74u;
    // 0x2bfe74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bfe74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bfe78: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x2bfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x2bfe7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bfe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bfe84:
    // 0x2bfe84: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFE84u;
    {
        const bool branch_taken_0x2bfe84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE84u;
        // 0x2bfe88: 0x2462ff2c  addiu       $v0, $v1, -0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe84) {
            ctx->pc = 0x2BFE98u;
            goto label_2bfe98;
        }
    }
    ctx->pc = 0x2BFE8Cu;
    // 0x2bfe8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFE90u;
    {
        const bool branch_taken_0x2bfe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE90u;
        // 0x2bfe94: 0xada20004  sw          $v0, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe90) {
            ctx->pc = 0x2BFEA0u;
            goto label_2bfea0;
        }
    }
    ctx->pc = 0x2BFE98u;
label_2bfe98:
    // 0x2bfe98: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x2bfe98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
    // 0x2bfe9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfea0:
    // 0x2bfea0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2bfea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfea4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bfea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2bfea8:
    // 0x2bfea8: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFEA8u;
    {
        const bool branch_taken_0x2bfea8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEA8u;
        // 0x2bfeac: 0x2462ff2c  addiu       $v0, $v1, -0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfea8) {
            ctx->pc = 0x2BFEBCu;
            goto label_2bfebc;
        }
    }
    ctx->pc = 0x2BFEB0u;
    // 0x2bfeb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfeb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFEB4u;
    {
        const bool branch_taken_0x2bfeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEB4u;
        // 0x2bfeb8: 0xada20004  sw          $v0, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfeb4) {
            ctx->pc = 0x2BFEC4u;
            goto label_2bfec4;
        }
    }
    ctx->pc = 0x2BFEBCu;
label_2bfebc:
    // 0x2bfebc: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x2bfebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
    // 0x2bfec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfec4:
    // 0x2bfec4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2BFEC4u;
    {
        const bool branch_taken_0x2bfec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEC4u;
        // 0x2bfec8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfec4) {
            ctx->pc = 0x2BFF68u;
            goto label_2bff68;
        }
    }
    ctx->pc = 0x2BFECCu;
    // 0x2bfecc: 0x0  nop
    ctx->pc = 0x2bfeccu;
    // NOP
label_2bfed0:
    // 0x2bfed0: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFED0u;
    {
        const bool branch_taken_0x2bfed0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFED0u;
        // 0x2bfed4: 0x2462ff2c  addiu       $v0, $v1, -0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfed0) {
            ctx->pc = 0x2BFEE4u;
            goto label_2bfee4;
        }
    }
    ctx->pc = 0x2BFED8u;
    // 0x2bfed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfedc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFEDCu;
    {
        const bool branch_taken_0x2bfedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEDCu;
        // 0x2bfee0: 0xada20004  sw          $v0, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfedc) {
            ctx->pc = 0x2BFEECu;
            goto label_2bfeec;
        }
    }
    ctx->pc = 0x2BFEE4u;
label_2bfee4:
    // 0x2bfee4: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x2bfee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
    // 0x2bfee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfeec:
    // 0x2bfeec: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2bfeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bfef0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFEF0u;
    {
        const bool branch_taken_0x2bfef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEF0u;
        // 0x2bfef4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfef0) {
            ctx->pc = 0x2BFF08u;
            goto label_2bff08;
        }
    }
    ctx->pc = 0x2BFEF8u;
    // 0x2bfef8: 0x2462ff2c  addiu       $v0, $v1, -0xD4
    ctx->pc = 0x2bfef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
    // 0x2bfefc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bfefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFF00u;
    {
        const bool branch_taken_0x2bff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF00u;
        // 0x2bff04: 0xada20004  sw          $v0, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff00) {
            ctx->pc = 0x2BFF14u;
            goto label_2bff14;
        }
    }
    ctx->pc = 0x2BFF08u;
label_2bff08:
    // 0x2bff08: 0x2462ff2c  addiu       $v0, $v1, -0xD4
    ctx->pc = 0x2bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
    // 0x2bff0c: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x2bff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
    // 0x2bff10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bff10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bff14:
    // 0x2bff14: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x2bff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2bff18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFF18u;
    {
        const bool branch_taken_0x2bff18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF18u;
        // 0x2bff1c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff18) {
            ctx->pc = 0x2BFF30u;
            goto label_2bff30;
        }
    }
    ctx->pc = 0x2BFF20u;
    // 0x2bff20: 0x2462ff2c  addiu       $v0, $v1, -0xD4
    ctx->pc = 0x2bff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
    // 0x2bff24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bff24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFF28u;
    {
        const bool branch_taken_0x2bff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF28u;
        // 0x2bff2c: 0xada20004  sw          $v0, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff28) {
            ctx->pc = 0x2BFF3Cu;
            goto label_2bff3c;
        }
    }
    ctx->pc = 0x2BFF30u;
label_2bff30:
    // 0x2bff30: 0x2462ff2c  addiu       $v0, $v1, -0xD4
    ctx->pc = 0x2bff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
    // 0x2bff34: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x2bff34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
    // 0x2bff38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bff3c:
    // 0x2bff3c: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x2bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2bff40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFF40u;
    {
        const bool branch_taken_0x2bff40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF40u;
        // 0x2bff44: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff40) {
            ctx->pc = 0x2BFF58u;
            goto label_2bff58;
        }
    }
    ctx->pc = 0x2BFF48u;
    // 0x2bff48: 0x2462ff2c  addiu       $v0, $v1, -0xD4
    ctx->pc = 0x2bff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
    // 0x2bff4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bff4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFF50u;
    {
        const bool branch_taken_0x2bff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF50u;
        // 0x2bff54: 0xada20004  sw          $v0, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff50) {
            ctx->pc = 0x2BFF64u;
            goto label_2bff64;
        }
    }
    ctx->pc = 0x2BFF58u;
label_2bff58:
    // 0x2bff58: 0x2462ff2c  addiu       $v0, $v1, -0xD4
    ctx->pc = 0x2bff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967084));
    // 0x2bff5c: 0xaca200dc  sw          $v0, 0xDC($a1)
    ctx->pc = 0x2bff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 2));
    // 0x2bff60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bff60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bff64:
    // 0x2bff64: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2bff64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2bff68:
    // 0x2bff68: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2bff68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2bff6c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2BFF6Cu;
    {
        const bool branch_taken_0x2bff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF6Cu;
        // 0x2bff70: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff6c) {
            ctx->pc = 0x2BFED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfed0;
        }
    }
    ctx->pc = 0x2BFF74u;
label_2bff74:
    // 0x2bff74: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BFF74u;
    {
        const bool branch_taken_0x2bff74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bff74) {
            ctx->pc = 0x2BFF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFF74u;
            // 0x2bff78: 0xaca000dc  sw          $zero, 0xDC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFF7Cu;
            goto label_2bff7c;
        }
    }
    ctx->pc = 0x2BFF7Cu;
label_2bff7c:
    // 0x2bff7c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2bff7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff80: 0xada00018  sw          $zero, 0x18($t5)
    ctx->pc = 0x2bff80u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 0));
    // 0x2bff84: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x2bff84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bff88: 0x1440ff2b  bnez        $v0, . + 4 + (-0xD5 << 2)
    ctx->pc = 0x2BFF88u;
    {
        const bool branch_taken_0x2bff88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF88u;
        // 0x2bff8c: 0x260c02d  daddu       $t8, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff88) {
            ctx->pc = 0x2BFC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfc38;
        }
    }
    ctx->pc = 0x2BFF90u;
label_2bff90:
    // 0x2bff90: 0xaf2a0004  sw          $t2, 0x4($t9)
    ctx->pc = 0x2bff90u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 10));
    // 0x2bff94: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2bff94u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff98: 0x1240007d  beqz        $s2, . + 4 + (0x7D << 2)
    ctx->pc = 0x2BFF98u;
    {
        const bool branch_taken_0x2bff98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF98u;
        // 0x2bff9c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff98) {
            ctx->pc = 0x2C0190u;
            goto label_2c0190;
        }
    }
    ctx->pc = 0x2BFFA0u;
    // 0x2bffa0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2bffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2bffa4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2bffa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffa8: 0x1425818  mult        $t3, $t2, $v0
    ctx->pc = 0x2bffa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2bffac: 0x96080  sll         $t4, $t1, 2
    ctx->pc = 0x2bffacu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2bffb0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2bffb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffb4: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFFB4u;
    {
        const bool branch_taken_0x2bffb4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2BFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFB4u;
        // 0x2bffb8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffb4) {
            ctx->pc = 0x2BFFC4u;
            goto label_2bffc4;
        }
    }
    ctx->pc = 0x2BFFBCu;
    // 0x2bffbc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2BFFBCu;
    {
        const bool branch_taken_0x2bffbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFBCu;
        // 0x2bffc0: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffbc) {
            ctx->pc = 0x2C0068u;
            goto label_2c0068;
        }
    }
    ctx->pc = 0x2BFFC4u;
label_2bffc4:
    // 0x2bffc4: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2bffc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bffc8: 0x95040020  lhu         $a0, 0x20($t0)
    ctx->pc = 0x2bffc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2bffcc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2bffccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bffd0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2bffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2bffd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bffd8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFFD8u;
    {
        const bool branch_taken_0x2bffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bffd8) {
            ctx->pc = 0x2BFFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFFD8u;
            // 0x2bffdc: 0x8d020024  lw          $v0, 0x24($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFFE8u;
            goto label_2bffe8;
        }
    }
    ctx->pc = 0x2BFFE0u;
    // 0x2bffe0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2BFFE0u;
    {
        const bool branch_taken_0x2bffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFE0u;
        // 0x2bffe4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffe0) {
            ctx->pc = 0x2C0050u;
            goto label_2c0050;
        }
    }
    ctx->pc = 0x2BFFE8u;
label_2bffe8:
    // 0x2bffe8: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2bffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2bffec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bffecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bfff0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2bfff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2bfff4: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2bfff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2bfff8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2bfff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfffc: 0x8d2004  sllv        $a0, $t5, $a0
    ctx->pc = 0x2bfffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c0000: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c0004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c0004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0008: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c0008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c000c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C000Cu;
    {
        const bool branch_taken_0x2c000c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c000c) {
            ctx->pc = 0x2C0010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C000Cu;
            // 0x2c0010: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0054u;
            goto label_2c0054;
        }
    }
    ctx->pc = 0x2C0014u;
    // 0x2c0014: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x2c0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2c0018: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c0018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c001c: 0x8f230010  lw          $v1, 0x10($t9)
    ctx->pc = 0x2c001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2c0020: 0x9504000c  lhu         $a0, 0xC($t0)
    ctx->pc = 0x2c0020u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2c0024: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c0028: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2c0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c002c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2c002cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2c0030: 0xac6d000c  sw          $t5, 0xC($v1)
    ctx->pc = 0x2c0030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 13));
    // 0x2c0034: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x2c0034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x2c0038: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x2c0038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x2c003c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c003cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c0040: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2c0040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2c0044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c0044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c0048: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2c0048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2c004c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c004cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c0050:
    // 0x2c0050: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2c0050u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2c0054:
    // 0x2c0054: 0x1d2102b  sltu        $v0, $t6, $s2
    ctx->pc = 0x2c0054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c0058: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C0058u;
    {
        const bool branch_taken_0x2c0058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0058u;
        // 0x2c005c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0058) {
            ctx->pc = 0x2C0190u;
            goto label_2c0190;
        }
    }
    ctx->pc = 0x2C0060u;
    // 0x2c0060: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2c0060u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0064: 0x0  nop
    ctx->pc = 0x2c0064u;
    // NOP
label_2c0068:
    // 0x2c0068: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2c006c: 0x94e40020  lhu         $a0, 0x20($a3)
    ctx->pc = 0x2c006cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2c0070: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2c0070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2c0074: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2c0074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c0078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c007c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C007Cu;
    {
        const bool branch_taken_0x2c007c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c007c) {
            ctx->pc = 0x2C0080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C007Cu;
            // 0x2c0080: 0x8ce20024  lw          $v0, 0x24($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C008Cu;
            goto label_2c008c;
        }
    }
    ctx->pc = 0x2C0084u;
    // 0x2c0084: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0084u;
    {
        const bool branch_taken_0x2c0084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0084u;
        // 0x2c0088: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0084) {
            ctx->pc = 0x2C00F4u;
            goto label_2c00f4;
        }
    }
    ctx->pc = 0x2C008Cu;
label_2c008c:
    // 0x2c008c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c008cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c0090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0094: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c0094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c0098: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c0098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c009c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c009cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c00a0: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2c00a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c00a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c00a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c00ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c00acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c00b0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C00B0u;
    {
        const bool branch_taken_0x2c00b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00b0) {
            ctx->pc = 0x2C00B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00B0u;
            // 0x2c00b4: 0x8da70004  lw          $a3, 0x4($t5) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C00F8u;
            goto label_2c00f8;
        }
    }
    ctx->pc = 0x2C00B8u;
    // 0x2c00b8: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x2c00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2c00bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c00bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c00c0: 0x8f230010  lw          $v1, 0x10($t9)
    ctx->pc = 0x2c00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2c00c4: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x2c00c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2c00c8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c00cc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2c00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c00d0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2c00d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2c00d4: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2c00d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2c00d8: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x2c00d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x2c00dc: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x2c00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x2c00e0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c00e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c00e4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2c00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2c00e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c00ec: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2c00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2c00f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c00f4:
    // 0x2c00f4: 0x8da70004  lw          $a3, 0x4($t5)
    ctx->pc = 0x2c00f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_2c00f8:
    // 0x2c00f8: 0x94e40020  lhu         $a0, 0x20($a3)
    ctx->pc = 0x2c00f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2c00fc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2c00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2c0100: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2c0100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c0104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0108: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0108u;
    {
        const bool branch_taken_0x2c0108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0108) {
            ctx->pc = 0x2C010Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0108u;
            // 0x2c010c: 0x8ce20024  lw          $v0, 0x24($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0118u;
            goto label_2c0118;
        }
    }
    ctx->pc = 0x2C0110u;
    // 0x2c0110: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0110u;
    {
        const bool branch_taken_0x2c0110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0110u;
        // 0x2c0114: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0110) {
            ctx->pc = 0x2C0180u;
            goto label_2c0180;
        }
    }
    ctx->pc = 0x2C0118u;
label_2c0118:
    // 0x2c0118: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2c011c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0120: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2c0120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2c0124: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2c0124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c0128: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c0128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c012c: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2c012cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c0130: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c0134: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c0134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0138: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c0138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c013c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C013Cu;
    {
        const bool branch_taken_0x2c013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c013c) {
            ctx->pc = 0x2C0140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C013Cu;
            // 0x2c0140: 0x25ce0002  addiu       $t6, $t6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0184u;
            goto label_2c0184;
        }
    }
    ctx->pc = 0x2C0144u;
    // 0x2c0144: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x2c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2c0148: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c0148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c014c: 0x8f230010  lw          $v1, 0x10($t9)
    ctx->pc = 0x2c014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2c0150: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x2c0150u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2c0154: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c0158: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2c0158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c015c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2c015cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2c0160: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2c0160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2c0164: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x2c0164u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x2c0168: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x2c0168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x2c016c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2c016cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2c0170: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2c0170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2c0174: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c0174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c0178: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2c0178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2c017c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c017cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c0180:
    // 0x2c0180: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x2c0180u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
label_2c0184:
    // 0x2c0184: 0x1d2102b  sltu        $v0, $t6, $s2
    ctx->pc = 0x2c0184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c0188: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2C0188u;
    {
        const bool branch_taken_0x2c0188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0188u;
        // 0x2c018c: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0188) {
            ctx->pc = 0x2C0068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0068;
        }
    }
    ctx->pc = 0x2C0190u;
label_2c0190:
    // 0x2c0190: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c0190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0194: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c0194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0198: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c0198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c019c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c019cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c01a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c01a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c01a4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2c01a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c01a8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2c01a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c01ac: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2c01acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c01b0: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x2c01b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c01b4: 0xaf2a0004  sw          $t2, 0x4($t9)
    ctx->pc = 0x2c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 10));
    // 0x2c01b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C01B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C01B8u;
        // 0x2c01bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C01B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C01C0u;
}
