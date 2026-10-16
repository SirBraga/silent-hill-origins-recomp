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

// Function: sub_00181130
// Address: 0x181130 - 0x181320
void sub_00181130_0x181130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181130_0x181130");
#endif

    switch (ctx->pc) {
        case 0x1811d8u: goto label_1811d8;
        case 0x181204u: goto label_181204;
        case 0x1812c0u: goto label_1812c0;
        default: break;
    }

    ctx->pc = 0x181130u;

    // 0x181130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x181134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181138: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x181138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18113c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x181140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181144: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x181148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x181148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18114c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181154: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x181154u;
    {
        const bool branch_taken_0x181154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181154u;
        // 0x181158: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181154) {
            ctx->pc = 0x181190u;
            goto label_181190;
        }
    }
    ctx->pc = 0x18115Cu;
    // 0x18115c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x18115cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x181160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181160u;
    {
        const bool branch_taken_0x181160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181160u;
        // 0x181164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181160) {
            ctx->pc = 0x181178u;
            goto label_181178;
        }
    }
    ctx->pc = 0x181168u;
    // 0x181168: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x181168u;
    {
        const bool branch_taken_0x181168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181168u;
        // 0x18116c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181168) {
            ctx->pc = 0x181308u;
            goto label_181308;
        }
    }
    ctx->pc = 0x181170u;
    // 0x181170: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x181170u;
    {
        const bool branch_taken_0x181170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181170u;
        // 0x181174: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181170) {
            ctx->pc = 0x181234u;
            goto label_181234;
        }
    }
    ctx->pc = 0x181178u;
label_181178:
    // 0x181178: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x181178u;
    {
        const bool branch_taken_0x181178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181178u;
        // 0x18117c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181178) {
            ctx->pc = 0x1811C8u;
            goto label_1811c8;
        }
    }
    ctx->pc = 0x181180u;
    // 0x181180: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x181180u;
    {
        const bool branch_taken_0x181180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181180u;
        // 0x181184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181180) {
            ctx->pc = 0x181308u;
            goto label_181308;
        }
    }
    ctx->pc = 0x181188u;
    // 0x181188: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x181188u;
    {
        const bool branch_taken_0x181188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181188u;
        // 0x18118c: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181188) {
            ctx->pc = 0x181234u;
            goto label_181234;
        }
    }
    ctx->pc = 0x181190u;
label_181190:
    // 0x181190: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x181194: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x181198: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181198u;
    {
        const bool branch_taken_0x181198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181198) {
            ctx->pc = 0x18119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181198u;
            // 0x18119c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1811A0u;
            goto label_1811a0;
        }
    }
    ctx->pc = 0x1811A0u;
label_1811a0:
    // 0x1811a0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1811a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1811a4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1811a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1811ac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1811acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1811b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1811b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1811b4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1811b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1811b8: 0x2810  mfhi        $a1
    ctx->pc = 0x1811b8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1811bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1811c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1811C0u;
    {
        const bool branch_taken_0x1811c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811C0u;
        // 0x1811c4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811c0) {
            ctx->pc = 0x181230u;
            goto label_181230;
        }
    }
    ctx->pc = 0x1811C8u;
label_1811c8:
    // 0x1811c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1811cc: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x1811ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x1811d0: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x1811D0u;
    SET_GPR_U32(ctx, 31, 0x1811D8u);
    ctx->pc = 0x1811D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811D0u;
    // 0x1811d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x1811D0u, 0x1811D8u)) {
        return;
    }
    ctx->pc = 0x1811D8u;
label_1811d8:
    // 0x1811d8: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1811d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1811dc: 0x8e090044  lw          $t1, 0x44($s0)
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1811e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1811e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1811e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1811e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1811e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1811e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1811ec: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1811ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1811f0: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1811f4: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x1811f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1811f8: 0x37a7000c  ori         $a3, $sp, 0xC
    ctx->pc = 0x1811f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1811fc: 0xc0605d8  jal         func_181760
    ctx->pc = 0x1811FCu;
    SET_GPR_U32(ctx, 31, 0x181204u);
    ctx->pc = 0x181200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811FCu;
    // 0x181200: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181760u, 0x1811FCu, 0x181204u)) {
        return;
    }
    ctx->pc = 0x181204u;
label_181204:
    // 0x181204: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x181204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x181208: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18120c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x18120cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x181210: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x181210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x181214: 0xc59021  addu        $s2, $a2, $a1
    ctx->pc = 0x181214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x181218: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18121c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x181220: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x181220u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x181224: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x181224u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x181228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x181228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18122c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x18122cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_181230:
    // 0x181230: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x181230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_181234:
    // 0x181234: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x181234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181238: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x181238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x18123c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x181240: 0xc5302a  slt         $a2, $a2, $a1
    ctx->pc = 0x181240u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x181244: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x181248: 0x24a303ff  addiu       $v1, $a1, 0x3FF
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1023));
    // 0x18124c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181250: 0xa6180b  movn        $v1, $a1, $a2
    ctx->pc = 0x181250u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x181254: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x181254u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181258: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181258u;
    {
        const bool branch_taken_0x181258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181258) {
            ctx->pc = 0x18125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181258u;
            // 0x18125c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181260u;
            goto label_181260;
        }
    }
    ctx->pc = 0x181260u;
label_181260:
    // 0x181260: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x181260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x181264: 0x8fac0004  lw          $t4, 0x4($sp)
    ctx->pc = 0x181264u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x181268: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x181268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x18126c: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x18126cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x181270: 0x8e0a0030  lw          $t2, 0x30($s0)
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x181274: 0x18d2821  addu        $a1, $t4, $t5
    ctx->pc = 0x181274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x181278: 0x28a50400  slti        $a1, $a1, 0x400
    ctx->pc = 0x181278u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x18127c: 0x3810  mfhi        $a3
    ctx->pc = 0x18127cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x181280: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x181284: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x181284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x181288: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x181288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18128c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x18128cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181290: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x181290u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x181294: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x181294u;
    {
        const bool branch_taken_0x181294 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181294u;
        // 0x181298: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181294) {
            ctx->pc = 0x1812C4u;
            goto label_1812c4;
        }
    }
    ctx->pc = 0x18129Cu;
    // 0x18129c: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x18129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1812a0: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x1812a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1812a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1812A4u;
    {
        const bool branch_taken_0x1812a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1812a4) {
            ctx->pc = 0x1812A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812A4u;
            // 0x1812a8: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1812C8u;
            goto label_1812c8;
        }
    }
    ctx->pc = 0x1812ACu;
    // 0x1812ac: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1812acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1812b0: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1812b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1812b8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1812B8u;
    SET_GPR_U32(ctx, 31, 0x1812C0u);
    ctx->pc = 0x1812BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1812B8u;
    // 0x1812bc: 0x1a0382d  daddu       $a3, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181830u, 0x1812B8u, 0x1812C0u)) {
        return;
    }
    ctx->pc = 0x1812C0u;
label_1812c0:
    // 0x1812c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1812c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1812c4:
    // 0x1812c4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1812c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1812c8:
    // 0x1812c8: 0x2513823  subu        $a3, $s2, $s1
    ctx->pc = 0x1812c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1812cc: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1812d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1812d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1812d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1812d8: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1812dc: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1812dcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1812e0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1812e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1812e4: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1812e8: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x1812e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
    // 0x1812ec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1812ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1812f0: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x1812f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x1812f4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x1812f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x1812f8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1812F8u;
    {
        const bool branch_taken_0x1812f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1812f8) {
            ctx->pc = 0x1812FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812F8u;
            // 0x1812fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x181300u;
label_181300:
    // 0x181300: 0x4010  mfhi        $t0
    ctx->pc = 0x181300u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x181304: 0xae08004c  sw          $t0, 0x4C($s0)
    ctx->pc = 0x181304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 8));
label_181308:
    // 0x181308: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x181308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18130c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18130cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181310: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181318: 0x3e00008  jr          $ra
    ctx->pc = 0x181318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181318u;
        // 0x18131c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181320u;
}
