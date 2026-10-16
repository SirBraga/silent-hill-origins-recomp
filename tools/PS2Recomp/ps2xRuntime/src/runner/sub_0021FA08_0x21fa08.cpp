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

// Function: sub_0021FA08
// Address: 0x21fa08 - 0x21fb78
void sub_0021FA08_0x21fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FA08_0x21fa08");
#endif

    switch (ctx->pc) {
        case 0x21fa48u: goto label_21fa48;
        case 0x21fab0u: goto label_21fab0;
        case 0x21faf8u: goto label_21faf8;
        case 0x21fb30u: goto label_21fb30;
        default: break;
    }

    ctx->pc = 0x21fa08u;

    // 0x21fa08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fa0c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x21fa0cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21fa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21fa14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21fa14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21fa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21fa1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21fa20: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x21fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x21fa24: 0x8da20024  lw          $v0, 0x24($t5)
    ctx->pc = 0x21fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x21fa28: 0x8dae01a8  lw          $t6, 0x1A8($t5)
    ctx->pc = 0x21fa28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 424)));
    // 0x21fa2c: 0x8db9013c  lw          $t9, 0x13C($t5)
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 316)));
    // 0x21fa30: 0x1840004a  blez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x21FA30u;
    {
        const bool branch_taken_0x21fa30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA30u;
        // 0x21fa34: 0x8da700d8  lw          $a3, 0xD8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa30) {
            ctx->pc = 0x21FB5Cu;
            goto label_21fb5c;
        }
    }
    ctx->pc = 0x21FA38u;
    // 0x21fa38: 0x27320002  addiu       $s2, $t9, 0x2
    ctx->pc = 0x21fa38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x21fa3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21fa3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa40: 0x25d10008  addiu       $s1, $t6, 0x8
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x21fa44: 0x2730fffe  addiu       $s0, $t9, -0x2
    ctx->pc = 0x21fa44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967294));
label_21fa48:
    // 0x21fa48: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x21fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x21fa4c: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21fa50: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x21fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x21fa54: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x21fa58: 0x8da4013c  lw          $a0, 0x13C($t5)
    ctx->pc = 0x21fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 316)));
    // 0x21fa5c: 0x25180001  addiu       $t8, $t0, 0x1
    ctx->pc = 0x21fa5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21fa60: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x21fa60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21fa64: 0x24ef0054  addiu       $t7, $a3, 0x54
    ctx->pc = 0x21fa64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
    // 0x21fa68: 0x50930001  beql        $a0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x21FA68u;
    {
        const bool branch_taken_0x21fa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x21fa68) {
            ctx->pc = 0x21FA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FA68u;
            // 0x21fa6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FA70u;
            goto label_21fa70;
        }
    }
    ctx->pc = 0x21FA70u;
label_21fa70:
    // 0x21fa70: 0x8dc20038  lw          $v0, 0x38($t6)
    ctx->pc = 0x21fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 56)));
    // 0x21fa74: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x21fa74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fa78: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x21fa78u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21fa7c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x21fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21fa80: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x21fa80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fa84: 0x8dc3003c  lw          $v1, 0x3C($t6)
    ctx->pc = 0x21fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
    // 0x21fa88: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x21fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21fa8c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x21fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21fa90: 0x5012  mflo        $t2
    ctx->pc = 0x21fa90u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x21fa94: 0x1521018  mult        $v0, $t2, $s2
    ctx->pc = 0x21fa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21fa98: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FA98u;
    {
        const bool branch_taken_0x21fa98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA98u;
        // 0x21fa9c: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa98) {
            ctx->pc = 0x21FAD0u;
            goto label_21fad0;
        }
    }
    ctx->pc = 0x21FAA0u;
    // 0x21faa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21faa4: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x21faa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21faa8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21faa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21faac: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x21faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21fab0:
    // 0x21fab0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21fab4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21fab8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21fabc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x21fac0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x21fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x21fac4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x21fac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x21fac8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21FAC8u;
    {
        const bool branch_taken_0x21fac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC8u;
        // 0x21facc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac8) {
            ctx->pc = 0x21FAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fab0;
        }
    }
    ctx->pc = 0x21FAD0u;
label_21fad0:
    // 0x21fad0: 0xa2040  sll         $a0, $t2, 1
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x21fad4: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21FAD4u;
    {
        const bool branch_taken_0x21fad4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD4u;
        // 0x21fad8: 0x791018  mult        $v0, $v1, $t9 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fad4) {
            ctx->pc = 0x21FB20u;
            goto label_21fb20;
        }
    }
    ctx->pc = 0x21FADCu;
    // 0x21fadc: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x21fadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21fae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21fae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fae8: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x21fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x21faec: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x21faecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21faf0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x21faf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21faf4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x21faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21faf8:
    // 0x21faf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21fafc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21fb00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21fb04: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x21fb08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x21fb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x21fb0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fb10: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21fb14: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21fb18: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21FB18u;
    {
        const bool branch_taken_0x21fb18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB18u;
        // 0x21fb1c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb18) {
            ctx->pc = 0x21FAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21faf8;
        }
    }
    ctx->pc = 0x21FB20u;
label_21fb20:
    // 0x21fb20: 0x19400009  blez        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x21FB20u;
    {
        const bool branch_taken_0x21fb20 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x21FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB20u;
        // 0x21fb24: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb20) {
            ctx->pc = 0x21FB48u;
            goto label_21fb48;
        }
    }
    ctx->pc = 0x21FB28u;
    // 0x21fb28: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x21fb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb2c: 0x1821823  subu        $v1, $t4, $v0
    ctx->pc = 0x21fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_21fb30:
    // 0x21fb30: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x21fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x21fb34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21fb38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21fb3c: 0x0  nop
    ctx->pc = 0x21fb3cu;
    // NOP
    // 0x21fb40: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21FB40u;
    {
        const bool branch_taken_0x21fb40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB40u;
        // 0x21fb44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb40) {
            ctx->pc = 0x21FB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fb30;
        }
    }
    ctx->pc = 0x21FB48u;
label_21fb48:
    // 0x21fb48: 0x8da20024  lw          $v0, 0x24($t5)
    ctx->pc = 0x21fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x21fb4c: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x21fb4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb50: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21fb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21fb54: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x21FB54u;
    {
        const bool branch_taken_0x21fb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB54u;
        // 0x21fb58: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb54) {
            ctx->pc = 0x21FA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fa48;
        }
    }
    ctx->pc = 0x21FB5Cu;
label_21fb5c:
    // 0x21fb5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21fb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fb60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21fb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fb64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21fb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb68: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x21fb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB6Cu;
        // 0x21fb70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FB74u;
    // 0x21fb74: 0x0  nop
    ctx->pc = 0x21fb74u;
    // NOP
    ctx->pc = 0x21fb78u;
}
