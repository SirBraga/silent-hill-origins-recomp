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

// Function: sub_0020D058
// Address: 0x20d058 - 0x20d200
void sub_0020D058_0x20d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D058_0x20d058");
#endif

    switch (ctx->pc) {
        case 0x20d090u: goto label_20d090;
        case 0x20d0a8u: goto label_20d0a8;
        case 0x20d148u: goto label_20d148;
        default: break;
    }

    ctx->pc = 0x20d058u;

    // 0x20d058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d05c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x20d05cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d060: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20d064: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20d064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20d068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20d068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d06c: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x20d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x20d070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d074: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20d078: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20d078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d07c: 0x8cf20000  lw          $s2, 0x0($a3)
    ctx->pc = 0x20d07cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20d080: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x20d084: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x20D084u;
    {
        const bool branch_taken_0x20d084 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D084u;
        // 0x20d088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d084) {
            ctx->pc = 0x20D1E8u;
            goto label_20d1e8;
        }
    }
    ctx->pc = 0x20D08Cu;
    // 0x20d08c: 0x0  nop
    ctx->pc = 0x20d08cu;
    // NOP
label_20d090:
    // 0x20d090: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20d094: 0x181880  sll         $v1, $t8, 2
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x20d098: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20d09c: 0x537821  addu        $t7, $v0, $s3
    ctx->pc = 0x20d09cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20d0a0: 0x727021  addu        $t6, $v1, $s2
    ctx->pc = 0x20d0a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20d0a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d0a8:
    // 0x20d0a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D0A8u;
    {
        const bool branch_taken_0x20d0a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0A8u;
        // 0x20d0ac: 0x8dec0000  lw          $t4, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0a8) {
            ctx->pc = 0x20D0B8u;
            goto label_20d0b8;
        }
    }
    ctx->pc = 0x20D0B0u;
    // 0x20d0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D0B0u;
    {
        const bool branch_taken_0x20d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0B0u;
        // 0x20d0b4: 0x8deafffc  lw          $t2, -0x4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0b0) {
            ctx->pc = 0x20D0BCu;
            goto label_20d0bc;
        }
    }
    ctx->pc = 0x20D0B8u;
label_20d0b8:
    // 0x20d0b8: 0x8dea0004  lw          $t2, 0x4($t7)
    ctx->pc = 0x20d0b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_20d0bc:
    // 0x20d0bc: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x20d0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20d0c0: 0x24990001  addiu       $t9, $a0, 0x1
    ctx->pc = 0x20d0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20d0c4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x20d0c8: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x20d0c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20d0cc: 0x91850000  lbu         $a1, 0x0($t4)
    ctx->pc = 0x20d0ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20d0d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20d0d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d0d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20d0dc: 0x444821  addu        $t1, $v0, $a0
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20d0e0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x20d0e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20d0e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x20d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20d0e8: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x20d0ec: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x20d0f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20d0f4: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x20d0f8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20d0fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x20d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20d100: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20d104: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x20d104u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x20d108: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d10c: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x20d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d110: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x20d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x20d114: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20d114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20d118: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20d118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d11c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x20d11cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d120: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x20d120u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d124: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x20d128: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x20d12c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20d130: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20d134: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x20d138: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20d138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d13c: 0x244bfffe  addiu       $t3, $v0, -0x2
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x20d140: 0x11600018  beqz        $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x20D140u;
    {
        const bool branch_taken_0x20d140 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D140u;
        // 0x20d144: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d140) {
            ctx->pc = 0x20D1A4u;
            goto label_20d1a4;
        }
    }
    ctx->pc = 0x20D148u;
label_20d148:
    // 0x20d148: 0x91850000  lbu         $a1, 0x0($t4)
    ctx->pc = 0x20d148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20d14c: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x20d150: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x20d150u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20d154: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x20d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x20d158: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20d15c: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x20d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x20d160: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d164: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d168: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20d16c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x20d16cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x20d170: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d174: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x20d174u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d178: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20d17c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20d17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d180: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x20d184: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x20d184u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d188: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x20d188u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d18c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20d18cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20d190: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20d190u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x20d194: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20d194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d198: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x20d19c: 0x1560ffea  bnez        $t3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20D19Cu;
    {
        const bool branch_taken_0x20d19c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D19Cu;
        // 0x20d1a0: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d19c) {
            ctx->pc = 0x20D148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d148;
        }
    }
    ctx->pc = 0x20D1A4u;
label_20d1a4:
    // 0x20d1a4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20d1a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20d1ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d1b0: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x20d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x20d1b4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x20d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x20d1b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x20d1bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20d1c0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x20d1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1c4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20d1c8: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x20d1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d1cc: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x20d1ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d1d0: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x20D1D0u;
    {
        const bool branch_taken_0x20d1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1D0u;
        // 0x20d1d4: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1d0) {
            ctx->pc = 0x20D0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d0a8;
        }
    }
    ctx->pc = 0x20D1D8u;
    // 0x20d1d8: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x20d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x20d1dc: 0x302102a  slt         $v0, $t8, $v0
    ctx->pc = 0x20d1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d1e0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x20D1E0u;
    {
        const bool branch_taken_0x20d1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1E0u;
        // 0x20d1e4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1e0) {
            ctx->pc = 0x20D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d090;
        }
    }
    ctx->pc = 0x20D1E8u;
label_20d1e8:
    // 0x20d1e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20d1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d1ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20d1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d1f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20d1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d1f4: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x20d1f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1F8u;
        // 0x20d1fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D200u;
}
