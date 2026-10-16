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

// Function: sub_0023C0A0
// Address: 0x23c0a0 - 0x23c288
void sub_0023C0A0_0x23c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C0A0_0x23c0a0");
#endif

    ctx->pc = 0x23c0a0u;

    // 0x23c0a0: 0x3c0b0070  lui         $t3, 0x70
    ctx->pc = 0x23c0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)112 << 16));
    // 0x23c0a4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x23c0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23c0a8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x23c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23c0ac: 0x256a4100  addiu       $t2, $t3, 0x4100
    ctx->pc = 0x23c0acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 16640));
    // 0x23c0b0: 0x8d634100  lw          $v1, 0x4100($t3)
    ctx->pc = 0x23c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x704100u));
    // 0x23c0b4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x23c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x23c0b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23c0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23c0bc: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x23C0BCu;
    {
        const bool branch_taken_0x23c0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0BCu;
        // 0x23c0c0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0bc) {
            ctx->pc = 0x23C278u;
            goto label_23c278;
        }
    }
    ctx->pc = 0x23C0C4u;
    // 0x23c0c4: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x23c0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23c0c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x23c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c0cc: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x23c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23c0d0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x23c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x23c0d4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x23c0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23c0d8: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x23C0D8u;
    {
        const bool branch_taken_0x23c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D8u;
        // 0x23c0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0d8) {
            ctx->pc = 0x23C27Cu;
            goto label_23c27c;
        }
    }
    ctx->pc = 0x23C0E0u;
    // 0x23c0e0: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x23c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23c0e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c0e8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x23c0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23c0ec: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x23C0ECu;
    {
        const bool branch_taken_0x23c0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0ECu;
        // 0x23c0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0ec) {
            ctx->pc = 0x23C27Cu;
            goto label_23c27c;
        }
    }
    ctx->pc = 0x23C0F4u;
    // 0x23c0f4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x23c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x23c0f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c0fc: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x23c0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23c100: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x23C100u;
    {
        const bool branch_taken_0x23c100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C100u;
        // 0x23c104: 0x103102a  slt         $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c100) {
            ctx->pc = 0x23C278u;
            goto label_23c278;
        }
    }
    ctx->pc = 0x23C108u;
    // 0x23c108: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23C108u;
    {
        const bool branch_taken_0x23c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C108u;
        // 0x23c10c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c108) {
            ctx->pc = 0x23C150u;
            goto label_23c150;
        }
    }
    ctx->pc = 0x23C110u;
    // 0x23c110: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x23c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x23c114: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x23c114u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23c118: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C118u;
    {
        const bool branch_taken_0x23c118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c118) {
            ctx->pc = 0x23C11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C118u;
            // 0x23c11c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C120u;
            goto label_23c120;
        }
    }
    ctx->pc = 0x23C120u;
label_23c120:
    // 0x23c120: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x23c120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23c124: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x23c124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x23c128: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x23c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x23c12c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x23c12cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23c130: 0x1812  mflo        $v1
    ctx->pc = 0x23c130u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23c134: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c138: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x23c138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x23c13c: 0x8d644100  lw          $a0, 0x4100($t3)
    ctx->pc = 0x23c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16640)));
    // 0x23c140: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x23c140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x23c144: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23c148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c14c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_23c150:
    // 0x23c150: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23c154: 0x8d644100  lw          $a0, 0x4100($t3)
    ctx->pc = 0x23c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16640)));
    // 0x23c158: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x23c158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23c15c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23c160: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x23c160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23c164: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23c164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23c168: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x23c168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23c16c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23C16Cu;
    {
        const bool branch_taken_0x23c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C16Cu;
        // 0x23c170: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c16c) {
            ctx->pc = 0x23C1A0u;
            goto label_23c1a0;
        }
    }
    ctx->pc = 0x23C174u;
    // 0x23c174: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x23c174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x23c178: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x23c178u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23c17c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C17Cu;
    {
        const bool branch_taken_0x23c17c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c17c) {
            ctx->pc = 0x23C180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C17Cu;
            // 0x23c180: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C184u;
            goto label_23c184;
        }
    }
    ctx->pc = 0x23C184u;
label_23c184:
    // 0x23c184: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x23c184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23c188: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x23c188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x23c18c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x23c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x23c190: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x23c190u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23c194: 0x1012  mflo        $v0
    ctx->pc = 0x23c194u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23c198: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23c198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c19c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x23c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_23c1a0:
    // 0x23c1a0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x23c1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23c1a4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x23c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23c1a8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x23c1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23c1ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23C1ACu;
    {
        const bool branch_taken_0x23c1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1ACu;
        // 0x23c1b0: 0x661023  subu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1ac) {
            ctx->pc = 0x23C1F8u;
            goto label_23c1f8;
        }
    }
    ctx->pc = 0x23C1B4u;
    // 0x23c1b4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x23c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23c1b8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x23c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c1bc: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x23c1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23c1c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C1C0u;
    {
        const bool branch_taken_0x23c1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1c0) {
            ctx->pc = 0x23C1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C1C0u;
            // 0x23c1c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C1C8u;
            goto label_23c1c8;
        }
    }
    ctx->pc = 0x23C1C8u;
label_23c1c8:
    // 0x23c1c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x23c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c1cc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x23c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x23c1d0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x23c1d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23c1d4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x23c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23c1d8: 0x2012  mflo        $a0
    ctx->pc = 0x23c1d8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23c1dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c1e0: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x23c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x23c1e4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x23c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23c1e8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x23c1ec: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x23c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23c1f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c1f4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x23c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_23c1f8:
    // 0x23c1f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23c1fc: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x23c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x23c200: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c204: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x23c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23c208: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x23c208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23c20c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23c210: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23c214: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23C214u;
    {
        const bool branch_taken_0x23c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C214u;
        // 0x23c218: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c214) {
            ctx->pc = 0x23C248u;
            goto label_23c248;
        }
    }
    ctx->pc = 0x23C21Cu;
    // 0x23c21c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x23c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23c220: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x23c220u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23c224: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C224u;
    {
        const bool branch_taken_0x23c224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c224) {
            ctx->pc = 0x23C228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C224u;
            // 0x23c228: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C22Cu;
            goto label_23c22c;
        }
    }
    ctx->pc = 0x23C22Cu;
label_23c22c:
    // 0x23c22c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x23c22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23c230: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x23c230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x23c234: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x23c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23c238: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x23c238u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23c23c: 0x1012  mflo        $v0
    ctx->pc = 0x23c23cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23c240: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c244: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x23c244u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_23c248:
    // 0x23c248: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23c24c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23C24Cu;
    {
        const bool branch_taken_0x23c24c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C24Cu;
        // 0x23c250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c24c) {
            ctx->pc = 0x23C27Cu;
            goto label_23c27c;
        }
    }
    ctx->pc = 0x23C254u;
    // 0x23c254: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x23c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c258: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C258u;
    {
        const bool branch_taken_0x23c258 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C258u;
        // 0x23c25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c258) {
            ctx->pc = 0x23C27Cu;
            goto label_23c27c;
        }
    }
    ctx->pc = 0x23C260u;
    // 0x23c260: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x23c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x23c264: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C264u;
    {
        const bool branch_taken_0x23c264 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C264u;
        // 0x23c268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c264) {
            ctx->pc = 0x23C27Cu;
            goto label_23c27c;
        }
    }
    ctx->pc = 0x23C26Cu;
    // 0x23c26c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x23c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x23c270: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C270u;
    {
        const bool branch_taken_0x23c270 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x23C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C270u;
        // 0x23c274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c270) {
            ctx->pc = 0x23C27Cu;
            goto label_23c27c;
        }
    }
    ctx->pc = 0x23C278u;
label_23c278:
    // 0x23c278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c27c:
    // 0x23c27c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C284u;
    // 0x23c284: 0x0  nop
    ctx->pc = 0x23c284u;
    // NOP
    ctx->pc = 0x23c288u;
}
