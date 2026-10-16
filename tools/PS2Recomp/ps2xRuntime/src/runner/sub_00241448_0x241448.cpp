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

// Function: sub_00241448
// Address: 0x241448 - 0x241690
void sub_00241448_0x241448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241448_0x241448");
#endif

    switch (ctx->pc) {
        case 0x241498u: goto label_241498;
        case 0x2414f4u: goto label_2414f4;
        case 0x241518u: goto label_241518;
        case 0x241568u: goto label_241568;
        case 0x241580u: goto label_241580;
        case 0x2415fcu: goto label_2415fc;
        case 0x241620u: goto label_241620;
        default: break;
    }

    ctx->pc = 0x241448u;

    // 0x241448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24144c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x24144cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241454: 0x91620023  lbu         $v0, 0x23($t3)
    ctx->pc = 0x241454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 35)));
    // 0x241458: 0x3042006f  andi        $v0, $v0, 0x6F
    ctx->pc = 0x241458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x24145c: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x241460: 0x2c830026  sltiu       $v1, $a0, 0x26
    ctx->pc = 0x241460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x241464: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x241464u;
    {
        const bool branch_taken_0x241464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241464u;
        // 0x241468: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241464) {
            ctx->pc = 0x241690u;
            return;
        }
    }
    ctx->pc = 0x24146Cu;
    // 0x24146c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x241470: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241474: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x241478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24147c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241480: 0x800008  jr          $a0
    ctx->pc = 0x241480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x241488u: goto label_241488;
            case 0x2414FCu: goto label_2414fc;
            case 0x241570u: goto label_241570;
            case 0x241604u: goto label_241604;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x241488u;
label_241488:
    // 0x241488: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x241488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x24148c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x24148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241490: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x241490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x241494: 0x0  nop
    ctx->pc = 0x241494u;
    // NOP
label_241498:
    // 0x241498: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x241498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x24149c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2414a0: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x2414a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2414a4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2414a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2414a8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2414ac: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x2414acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2414b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2414b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2414b4: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x2414b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x2414b8: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x2414b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x2414bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2414bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2414c0: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x2414c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2414c4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2414c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2414c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2414c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2414cc: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x2414ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x2414d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2414d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2414d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2414d8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2414d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2414dc: 0x501ffee  bgez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2414DCu;
    {
        const bool branch_taken_0x2414dc = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x2414E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414DCu;
        // 0x2414e0: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414dc) {
            ctx->pc = 0x241498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241498;
        }
    }
    ctx->pc = 0x2414E4u;
    // 0x2414e4: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2414e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2414e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2414ec: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2414ECu;
    SET_GPR_U32(ctx, 31, 0x2414F4u);
    ctx->pc = 0x2414F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2414ECu;
    // 0x2414f0: 0x2485009f  addiu       $a1, $a0, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2414ECu, 0x2414F4u)) {
        return;
    }
    ctx->pc = 0x2414F4u;
label_2414f4:
    // 0x2414f4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2414F4u;
    {
        const bool branch_taken_0x2414f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414F4u;
        // 0x2414f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414f4) {
            ctx->pc = 0x241694u;
            return;
        }
    }
    ctx->pc = 0x2414FCu;
label_2414fc:
    // 0x2414fc: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x2414fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x241500: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x241500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x241504: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x241504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241508: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x241508u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
    // 0x24150c: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x24150cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x241510: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x241510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x241514: 0x0  nop
    ctx->pc = 0x241514u;
    // NOP
label_241518:
    // 0x241518: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x241518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x24151c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x24151cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x241520: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x241520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x241524: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x241524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x241528: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x241528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24152c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x24152cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x241530: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x241534: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x241534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x241538: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x24153c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241540: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241544: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x241544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x241548: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24154c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x24154cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x241550: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x241550u;
    {
        const bool branch_taken_0x241550 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x241554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241550u;
        // 0x241554: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241550) {
            ctx->pc = 0x241518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241518;
        }
    }
    ctx->pc = 0x241558u;
    // 0x241558: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x241558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x24155c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241560: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x241560u;
    SET_GPR_U32(ctx, 31, 0x241568u);
    ctx->pc = 0x241564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241560u;
    // 0x241564: 0x248500bf  addiu       $a1, $a0, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x241560u, 0x241568u)) {
        return;
    }
    ctx->pc = 0x241568u;
label_241568:
    // 0x241568: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x241568u;
    {
        const bool branch_taken_0x241568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241568u;
        // 0x24156c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241568) {
            ctx->pc = 0x241694u;
            return;
        }
    }
    ctx->pc = 0x241570u;
label_241570:
    // 0x241570: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x241570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x241574: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x241578: 0x244ab3a0  addiu       $t2, $v0, -0x4C60
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x24157c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24157cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241580:
    // 0x241580: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x241584: 0x310300e7  andi        $v1, $t0, 0xE7
    ctx->pc = 0x241584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x241588: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x241588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x24158c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241590: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x241594: 0x29070100  slti        $a3, $t0, 0x100
    ctx->pc = 0x241594u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x241598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x241598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24159c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2415a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2415a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2415a4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2415a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2415a8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2415a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2415ac: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x2415acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2415b0: 0x90660003  lbu         $a2, 0x3($v1)
    ctx->pc = 0x2415b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2415b4: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2415b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2415b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2415b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2415bc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2415bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2415c0: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x2415c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x2415c4: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x2415c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
    // 0x2415c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2415c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2415cc: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x2415ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2415d0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2415d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2415d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2415d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2415d8: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x2415d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2415dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2415dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2415e0: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x2415e0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2415e4: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2415E4u;
    {
        const bool branch_taken_0x2415e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2415E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415E4u;
        // 0x2415e8: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415e4) {
            ctx->pc = 0x241580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241580;
        }
    }
    ctx->pc = 0x2415ECu;
    // 0x2415ec: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x2415ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2415f0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2415f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415f4: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2415F4u;
    SET_GPR_U32(ctx, 31, 0x2415FCu);
    ctx->pc = 0x2415F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2415F4u;
    // 0x2415f8: 0x2485027f  addiu       $a1, $a0, 0x27F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 639));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2415F4u, 0x2415FCu)) {
        return;
    }
    ctx->pc = 0x2415FCu;
label_2415fc:
    // 0x2415fc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2415FCu;
    {
        const bool branch_taken_0x2415fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415FCu;
        // 0x241600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415fc) {
            ctx->pc = 0x241694u;
            return;
        }
    }
    ctx->pc = 0x241604u;
label_241604:
    // 0x241604: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x241604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x241608: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x241608u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x24160c: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x24160cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x241610: 0x244eb3a0  addiu       $t6, $v0, -0x4C60
    ctx->pc = 0x241610u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x241614: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x241614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241618: 0x354a8081  ori         $t2, $t2, 0x8081
    ctx->pc = 0x241618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32897);
    // 0x24161c: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x24161cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
label_241620:
    // 0x241620: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x241620u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x241624: 0x310300e7  andi        $v1, $t0, 0xE7
    ctx->pc = 0x241624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x241628: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x241628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x24162c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24162cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241630: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x241630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x241634: 0x29070100  slti        $a3, $t0, 0x100
    ctx->pc = 0x241634u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x241638: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x241638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24163c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x241640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241644: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x241644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x241648: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x241648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x24164c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x24164cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x241650: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x241650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x241654: 0xaa2818  mult        $a1, $a1, $t2
    ctx->pc = 0x241654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241658: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x241658u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24165c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x241660: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x241660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x241664: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241668: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x241668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x24166c: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x24166cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x241670: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241674: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x241674u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x241678: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x241678u;
    {
        const bool branch_taken_0x241678 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241678u;
        // 0x24167c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241678) {
            ctx->pc = 0x241620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241620;
        }
    }
    ctx->pc = 0x241680u;
    // 0x241680: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x241680u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x241684: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x241684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241688: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x241688u;
    SET_GPR_U32(ctx, 31, 0x241690u);
    ctx->pc = 0x24168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241688u;
    // 0x24168c: 0x2485047f  addiu       $a1, $a0, 0x47F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x241688u, 0x241690u)) {
        return;
    }
    ctx->pc = 0x241690u;
}
