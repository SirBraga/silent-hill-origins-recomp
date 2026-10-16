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

// Function: sub_002480A8
// Address: 0x2480a8 - 0x248250
void sub_002480A8_0x2480a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002480A8_0x2480a8");
#endif

    switch (ctx->pc) {
        case 0x2481e8u: goto label_2481e8;
        case 0x2481f4u: goto label_2481f4;
        case 0x248208u: goto label_248208;
        case 0x248228u: goto label_248228;
        case 0x248234u: goto label_248234;
        default: break;
    }

    ctx->pc = 0x2480a8u;

    // 0x2480a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2480a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2480ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2480acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2480b0: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2480b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x2480b4: 0x8d084188  lw          $t0, 0x4188($t0)
    ctx->pc = 0x2480b4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2480b8: 0x24490fc8  addiu       $t1, $v0, 0xFC8
    ctx->pc = 0x2480b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2480bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2480bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2480c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2480c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2480c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2480c8: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2480cc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2480ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2480d0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2480D0u;
    {
        const bool branch_taken_0x2480d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480D0u;
        // 0x2480d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480d0) {
            ctx->pc = 0x248218u;
            goto label_248218;
        }
    }
    ctx->pc = 0x2480D8u;
    // 0x2480d8: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2480dc: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x2480dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2480e0: 0x24500054  addiu       $s0, $v0, 0x54
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2480e4: 0x2cc30005  sltiu       $v1, $a2, 0x5
    ctx->pc = 0x2480e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2480e8: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x2480e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x2480ec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2480ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2480f0: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x2480f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x2480f4: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2480F4u;
    {
        const bool branch_taken_0x2480f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480F4u;
        // 0x2480f8: 0xae07002c  sw          $a3, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480f4) {
            ctx->pc = 0x2481D4u;
            goto label_2481d4;
        }
    }
    ctx->pc = 0x2480FCu;
    // 0x2480fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2480fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248100: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x248100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x248104: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
    // 0x248108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24810c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24810cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248110: 0x800008  jr          $a0
    ctx->pc = 0x248110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248118u: goto label_248118;
            case 0x248150u: goto label_248150;
            case 0x24816Cu: goto label_24816c;
            case 0x248188u: goto label_248188;
            case 0x2481B8u: goto label_2481b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x248118u;
label_248118:
    // 0x248118: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x248118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24811c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248120: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248124: 0xe5001a  div         $zero, $a3, $a1
    ctx->pc = 0x248124u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x248128: 0x25430fc8  addiu       $v1, $t2, 0xFC8
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4040));
    // 0x24812c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248130: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x248130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x248134: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x248134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x248138: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x248138u;
    {
        const bool branch_taken_0x248138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x248138) {
            ctx->pc = 0x24813Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248138u;
            // 0x24813c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x248140u;
            goto label_248140;
        }
    }
    ctx->pc = 0x248140u;
label_248140:
    // 0x248140: 0x3010  mfhi        $a2
    ctx->pc = 0x248140u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x248144: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x248144u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x248148: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x248148u;
    {
        const bool branch_taken_0x248148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248148u;
        // 0x24814c: 0xae06002c  sw          $a2, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248148) {
            ctx->pc = 0x2481F8u;
            goto label_2481f8;
        }
    }
    ctx->pc = 0x248150u;
label_248150:
    // 0x248150: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248154: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248158: 0x25430fc8  addiu       $v1, $t2, 0xFC8
    ctx->pc = 0x248158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4040));
    // 0x24815c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248160: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x248160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x248164: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x248164u;
    {
        const bool branch_taken_0x248164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248164u;
        // 0x248168: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248164) {
            ctx->pc = 0x2481F8u;
            goto label_2481f8;
        }
    }
    ctx->pc = 0x24816Cu;
label_24816c:
    // 0x24816c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248170: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248174: 0x25430fc8  addiu       $v1, $t2, 0xFC8
    ctx->pc = 0x248174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4040));
    // 0x248178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24817c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x24817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x248180: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x248180u;
    {
        const bool branch_taken_0x248180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248180u;
        // 0x248184: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248180) {
            ctx->pc = 0x2481F8u;
            goto label_2481f8;
        }
    }
    ctx->pc = 0x248188u;
label_248188:
    // 0x248188: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24818c: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x24818cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248190: 0x25440fc8  addiu       $a0, $t2, 0xFC8
    ctx->pc = 0x248190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4040));
    // 0x248194: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x248194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x248198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24819c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2481a0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2481a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2481a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2481a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2481a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2481a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2481ac: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2481acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2481b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2481B0u;
    {
        const bool branch_taken_0x2481b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B0u;
        // 0x2481b4: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481b0) {
            ctx->pc = 0x2481F8u;
            goto label_2481f8;
        }
    }
    ctx->pc = 0x2481B8u;
label_2481b8:
    // 0x2481b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2481b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2481bc: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x2481bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2481c0: 0x25430fc8  addiu       $v1, $t2, 0xFC8
    ctx->pc = 0x2481c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4040));
    // 0x2481c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2481c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2481c8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2481c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2481cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2481CCu;
    {
        const bool branch_taken_0x2481cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481CCu;
        // 0x2481d0: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481cc) {
            ctx->pc = 0x2481F8u;
            goto label_2481f8;
        }
    }
    ctx->pc = 0x2481D4u;
label_2481d4:
    // 0x2481d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2481d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2481d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481dc: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2481dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2481e0: 0xc092848  jal         func_24A120
    ctx->pc = 0x2481E0u;
    SET_GPR_U32(ctx, 31, 0x2481E8u);
    ctx->pc = 0x2481E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481E0u;
    // 0x2481e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2481E0u, 0x2481E8u)) {
        return;
    }
    ctx->pc = 0x2481E8u;
label_2481e8:
    // 0x2481e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2481e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481ec: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2481ECu;
    SET_GPR_U32(ctx, 31, 0x2481F4u);
    ctx->pc = 0x2481F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481ECu;
    // 0x2481f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2481ECu, 0x2481F4u)) {
        return;
    }
    ctx->pc = 0x2481F4u;
label_2481f4:
    // 0x2481f4: 0x0  nop
    ctx->pc = 0x2481f4u;
    // NOP
label_2481f8:
    // 0x2481f8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2481f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2481fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2481fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248200: 0xc09240e  jal         func_249038
    ctx->pc = 0x248200u;
    SET_GPR_U32(ctx, 31, 0x248208u);
    ctx->pc = 0x248204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248200u;
    // 0x248204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x248200u, 0x248208u)) {
        return;
    }
    ctx->pc = 0x248208u;
label_248208:
    // 0x248208: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x248208u;
    {
        const bool branch_taken_0x248208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248208u;
        // 0x24820c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248208) {
            ctx->pc = 0x248238u;
            goto label_248238;
        }
    }
    ctx->pc = 0x248210u;
    // 0x248210: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x248210u;
    {
        const bool branch_taken_0x248210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248210u;
        // 0x248214: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248210) {
            ctx->pc = 0x248240u;
            goto label_248240;
        }
    }
    ctx->pc = 0x248218u;
label_248218:
    // 0x248218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24821c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x24821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x248220: 0xc092848  jal         func_24A120
    ctx->pc = 0x248220u;
    SET_GPR_U32(ctx, 31, 0x248228u);
    ctx->pc = 0x248224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248220u;
    // 0x248224: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x248220u, 0x248228u)) {
        return;
    }
    ctx->pc = 0x248228u;
label_248228:
    // 0x248228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x248228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24822c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24822Cu;
    SET_GPR_U32(ctx, 31, 0x248234u);
    ctx->pc = 0x248230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24822Cu;
    // 0x248230: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24822Cu, 0x248234u)) {
        return;
    }
    ctx->pc = 0x248234u;
label_248234:
    // 0x248234: 0x0  nop
    ctx->pc = 0x248234u;
    // NOP
label_248238:
    // 0x248238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24823c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24823cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248240:
    // 0x248240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248244: 0x3e00008  jr          $ra
    ctx->pc = 0x248244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248244u;
        // 0x248248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24824Cu;
    // 0x24824c: 0x0  nop
    ctx->pc = 0x24824cu;
    // NOP
    ctx->pc = 0x248250u;
}
