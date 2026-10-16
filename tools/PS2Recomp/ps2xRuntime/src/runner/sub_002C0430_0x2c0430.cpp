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

// Function: sub_002C0430
// Address: 0x2c0430 - 0x2c0748
void sub_002C0430_0x2c0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0430_0x2c0430");
#endif

    ctx->pc = 0x2c0430u;

    // 0x2c0430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0434: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x2c0434u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0438: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c043c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0440: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2c0440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0444: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c0448: 0x20d001a  div         $zero, $s0, $t5
    ctx->pc = 0x2c0448u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c044c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2c044cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c0450: 0x26080003  addiu       $t0, $s0, 0x3
    ctx->pc = 0x2c0450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2c0454: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x2c0454u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c0458: 0x202400b  movn        $t0, $s0, $v0
    ctx->pc = 0x2c0458u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16));
    // 0x2c045c: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x2c045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x2c0460: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x2c0460u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x2c0464: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c0468: 0x8a040  sll         $s4, $t0, 1
    ctx->pc = 0x2c0468u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2c046c: 0x8c0c0  sll         $t8, $t0, 3
    ctx->pc = 0x2c046cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2c0470: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c0470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0474: 0x2703000f  addiu       $v1, $t8, 0xF
    ctx->pc = 0x2c0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 15));
    // 0x2c0478: 0x157880  sll         $t7, $s5, 2
    ctx->pc = 0x2c0478u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2c047c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c0480: 0x25e2000f  addiu       $v0, $t7, 0xF
    ctx->pc = 0x2c0480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 15));
    // 0x2c0484: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2c0484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0488: 0x135080  sll         $t2, $s3, 2
    ctx->pc = 0x2c0488u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c048c: 0x8c900  sll         $t9, $t0, 4
    ctx->pc = 0x2c048cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2c0490: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0494: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x2c0494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0498: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C0498u;
    {
        const bool branch_taken_0x2c0498 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0498) {
            ctx->pc = 0x2C049Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0498u;
            // 0x2c049c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C04A0u;
            goto label_2c04a0;
        }
    }
    ctx->pc = 0x2C04A0u;
label_2c04a0:
    // 0x2c04a0: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2c04a4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2c04a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2c04a8: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x2c04a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04ac: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x2c04acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
    // 0x2c04b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c04b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c04b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04b8: 0x5812  mflo        $t3
    ctx->pc = 0x2c04b8u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x2c04bc: 0x28c0018  mult        $zero, $s4, $t4
    ctx->pc = 0x2c04bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2c04c0: 0xb5980  sll         $t3, $t3, 6
    ctx->pc = 0x2c04c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x2c04c4: 0x240cfff0  addiu       $t4, $zero, -0x10
    ctx->pc = 0x2c04c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c04c8: 0x256b000f  addiu       $t3, $t3, 0xF
    ctx->pc = 0x2c04c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x2c04cc: 0x6cc024  and         $t8, $v1, $t4
    ctx->pc = 0x2c04ccu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
    // 0x2c04d0: 0x4c7824  and         $t7, $v0, $t4
    ctx->pc = 0x2c04d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2c04d4: 0x2542000f  addiu       $v0, $t2, 0xF
    ctx->pc = 0x2c04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x2c04d8: 0x10c4024  and         $t0, $t0, $t4
    ctx->pc = 0x2c04d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
    // 0x2c04dc: 0x8812  mflo        $s1
    ctx->pc = 0x2c04dcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2c04e0: 0x4c5024  and         $t2, $v0, $t4
    ctx->pc = 0x2c04e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2c04e4: 0x2381821  addu        $v1, $s1, $t8
    ctx->pc = 0x2c04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x2c04e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c04ec: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x2c04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2c04f0: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2c04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2c04f4: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2c04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2c04f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c04fc: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2c04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2c0500: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x2c0500u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x2c0504: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2c0504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2c0508: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c050c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2c050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2c0510: 0x497024  and         $t6, $v0, $t1
    ctx->pc = 0x2c0510u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c0514: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x2c0514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2c0518: 0xacee0000  sw          $t6, 0x0($a3)
    ctx->pc = 0x2c0518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 14));
    // 0x2c051c: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x2c051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2c0520: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x2c0520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2c0524: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x2c0524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x2c0528: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2c0528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2c052c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2c052cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2c0530: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2c0530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2c0534: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2c0534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c0538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c0538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c053c: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x2c053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c0540: 0x1c61021  addu        $v0, $t6, $a2
    ctx->pc = 0x2c0540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x2c0544: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x2c0544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c0548: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c0548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c054c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2c054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2c0550: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0550u;
    {
        const bool branch_taken_0x2c0550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0550u;
        // 0x2c0554: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0550) {
            ctx->pc = 0x2C0560u;
            goto label_2c0560;
        }
    }
    ctx->pc = 0x2C0558u;
    // 0x2c0558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c0558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c055c: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x2c055cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2c0560:
    // 0x2c0560: 0xb81821  addu        $v1, $a1, $t8
    ctx->pc = 0x2c0560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x2c0564: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x2c0564u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
    // 0x2c0568: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c0568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c056c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C056Cu;
    {
        const bool branch_taken_0x2c056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C056Cu;
        // 0x2c0570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c056c) {
            ctx->pc = 0x2C0580u;
            goto label_2c0580;
        }
    }
    ctx->pc = 0x2C0574u;
    // 0x2c0574: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c0574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c0578: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c0578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c057c: 0xb81821  addu        $v1, $a1, $t8
    ctx->pc = 0x2c057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_2c0580:
    // 0x2c0580: 0xada4001c  sw          $a0, 0x1C($t5)
    ctx->pc = 0x2c0580u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 4));
    // 0x2c0584: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c0584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0588u;
    {
        const bool branch_taken_0x2c0588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0588u;
        // 0x2c058c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0588) {
            ctx->pc = 0x2C0598u;
            goto label_2c0598;
        }
    }
    ctx->pc = 0x2C0590u;
    // 0x2c0590: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c0590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c0594: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c0594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0598:
    // 0x2c0598: 0xaf1821  addu        $v1, $a1, $t7
    ctx->pc = 0x2c0598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x2c059c: 0xada40028  sw          $a0, 0x28($t5)
    ctx->pc = 0x2c059cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 4));
    // 0x2c05a0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c05a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c05a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C05A4u;
    {
        const bool branch_taken_0x2c05a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05A4u;
        // 0x2c05a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05a4) {
            ctx->pc = 0x2C05B8u;
            goto label_2c05b8;
        }
    }
    ctx->pc = 0x2C05ACu;
    // 0x2c05ac: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c05b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c05b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05b4: 0xaf1821  addu        $v1, $a1, $t7
    ctx->pc = 0x2c05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
label_2c05b8:
    // 0x2c05b8: 0xada40034  sw          $a0, 0x34($t5)
    ctx->pc = 0x2c05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 4));
    // 0x2c05bc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c05bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c05c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C05C0u;
    {
        const bool branch_taken_0x2c05c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C05C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05C0u;
        // 0x2c05c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05c0) {
            ctx->pc = 0x2C05D0u;
            goto label_2c05d0;
        }
    }
    ctx->pc = 0x2C05C8u;
    // 0x2c05c8: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c05c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c05cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c05ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c05d0:
    // 0x2c05d0: 0xaf1821  addu        $v1, $a1, $t7
    ctx->pc = 0x2c05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x2c05d4: 0xada40010  sw          $a0, 0x10($t5)
    ctx->pc = 0x2c05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 4));
    // 0x2c05d8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c05d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c05dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C05DCu;
    {
        const bool branch_taken_0x2c05dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05DCu;
        // 0x2c05e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05dc) {
            ctx->pc = 0x2C05F0u;
            goto label_2c05f0;
        }
    }
    ctx->pc = 0x2C05E4u;
    // 0x2c05e4: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c05e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c05e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05ec: 0xaf1821  addu        $v1, $a1, $t7
    ctx->pc = 0x2c05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
label_2c05f0:
    // 0x2c05f0: 0xada40040  sw          $a0, 0x40($t5)
    ctx->pc = 0x2c05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 4));
    // 0x2c05f4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c05f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c05f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C05F8u;
    {
        const bool branch_taken_0x2c05f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05F8u;
        // 0x2c05fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05f8) {
            ctx->pc = 0x2C0608u;
            goto label_2c0608;
        }
    }
    ctx->pc = 0x2C0600u;
    // 0x2c0600: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c0600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c0604: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c0604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0608:
    // 0x2c0608: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x2c0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2c060c: 0xada40004  sw          $a0, 0x4($t5)
    ctx->pc = 0x2c060cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 4));
    // 0x2c0610: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c0610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0614: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0614u;
    {
        const bool branch_taken_0x2c0614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0614u;
        // 0x2c0618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0614) {
            ctx->pc = 0x2C0624u;
            goto label_2c0624;
        }
    }
    ctx->pc = 0x2C061Cu;
    // 0x2c061c: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c0620: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c0620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0624:
    // 0x2c0624: 0xb81821  addu        $v1, $a1, $t8
    ctx->pc = 0x2c0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x2c0628: 0xada4004c  sw          $a0, 0x4C($t5)
    ctx->pc = 0x2c0628u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 4));
    // 0x2c062c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c062cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0630: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0630u;
    {
        const bool branch_taken_0x2c0630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0630u;
        // 0x2c0634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0630) {
            ctx->pc = 0x2C0644u;
            goto label_2c0644;
        }
    }
    ctx->pc = 0x2C0638u;
    // 0x2c0638: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c0638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c063c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0640: 0xb81821  addu        $v1, $a1, $t8
    ctx->pc = 0x2c0640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_2c0644:
    // 0x2c0644: 0xada40070  sw          $a0, 0x70($t5)
    ctx->pc = 0x2c0644u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 112), GPR_U32(ctx, 4));
    // 0x2c0648: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c0648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c064c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C064Cu;
    {
        const bool branch_taken_0x2c064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C064Cu;
        // 0x2c0650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c064c) {
            ctx->pc = 0x2C065Cu;
            goto label_2c065c;
        }
    }
    ctx->pc = 0x2C0654u;
    // 0x2c0654: 0x1c52021  addu        $a0, $t6, $a1
    ctx->pc = 0x2c0654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x2c0658: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c0658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c065c:
    // 0x2c065c: 0xb91821  addu        $v1, $a1, $t9
    ctx->pc = 0x2c065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2c0660: 0xada40064  sw          $a0, 0x64($t5)
    ctx->pc = 0x2c0660u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 4));
    // 0x2c0664: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2c0664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c0668: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c0668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c066c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C066Cu;
    {
        const bool branch_taken_0x2c066c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C066Cu;
        // 0x2c0670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c066c) {
            ctx->pc = 0x2C067Cu;
            goto label_2c067c;
        }
    }
    ctx->pc = 0x2C0674u;
    // 0x2c0674: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2c0674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2c0678: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2c0678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c067c:
    // 0x2c067c: 0xb91021  addu        $v0, $a1, $t9
    ctx->pc = 0x2c067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2c0680: 0xada40088  sw          $a0, 0x88($t5)
    ctx->pc = 0x2c0680u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 136), GPR_U32(ctx, 4));
    // 0x2c0684: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c0684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0688: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0688u;
    {
        const bool branch_taken_0x2c0688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0688u;
        // 0x2c068c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0688) {
            ctx->pc = 0x2C0694u;
            goto label_2c0694;
        }
    }
    ctx->pc = 0x2C0690u;
    // 0x2c0690: 0xe55821  addu        $t3, $a3, $a1
    ctx->pc = 0x2c0690u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2c0694:
    // 0x2c0694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0698: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2c069c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2c069cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c06a0: 0x2688000f  addiu       $t0, $s4, 0xF
    ctx->pc = 0x2c06a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x2c06a4: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x2c06a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
    // 0x2c06a8: 0x26a4000f  addiu       $a0, $s5, 0xF
    ctx->pc = 0x2c06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x2c06ac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2c06acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2c06b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2c06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c06b4: 0x2666000f  addiu       $a2, $s3, 0xF
    ctx->pc = 0x2c06b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x2c06b8: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x2c06b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2c06bc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c06c0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2c06c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2c06c4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2c06c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c06c8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2c06c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2c06cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c06ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c06d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2c06d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2c06d4: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x2c06d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x2c06d8: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x2c06d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x2c06dc: 0xadab0094  sw          $t3, 0x94($t5)
    ctx->pc = 0x2c06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 148), GPR_U32(ctx, 11));
    // 0x2c06e0: 0x35294550  ori         $t1, $t1, 0x4550
    ctx->pc = 0x2c06e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)17744);
    // 0x2c06e4: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2c06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2c06e8: 0x34e74aa0  ori         $a3, $a3, 0x4AA0
    ctx->pc = 0x2c06e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)19104);
    // 0x2c06ec: 0xada4000c  sw          $a0, 0xC($t5)
    ctx->pc = 0x2c06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
    // 0x2c06f0: 0xada60054  sw          $a2, 0x54($t5)
    ctx->pc = 0x2c06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 6));
    // 0x2c06f4: 0xada3006c  sw          $v1, 0x6C($t5)
    ctx->pc = 0x2c06f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 108), GPR_U32(ctx, 3));
    // 0x2c06f8: 0xada5009c  sw          $a1, 0x9C($t5)
    ctx->pc = 0x2c06f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 156), GPR_U32(ctx, 5));
    // 0x2c06fc: 0xada80024  sw          $t0, 0x24($t5)
    ctx->pc = 0x2c06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 8));
    // 0x2c0700: 0xada4003c  sw          $a0, 0x3C($t5)
    ctx->pc = 0x2c0700u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 4));
    // 0x2c0704: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2c0704u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2c0708: 0xada40048  sw          $a0, 0x48($t5)
    ctx->pc = 0x2c0708u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 4));
    // 0x2c070c: 0xada30078  sw          $v1, 0x78($t5)
    ctx->pc = 0x2c070cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 3));
    // 0x2c0710: 0xada50090  sw          $a1, 0x90($t5)
    ctx->pc = 0x2c0710u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 144), GPR_U32(ctx, 5));
    // 0x2c0714: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x2c0714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x2c0718: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x2c0718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x2c071c: 0xae47000c  sw          $a3, 0xC($s2)
    ctx->pc = 0x2c071cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 7));
    // 0x2c0720: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x2c0720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x2c0724: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c0724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0728: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c0728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c072c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c072cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0730: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c0730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0734: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c0734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0738: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x2c0738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c073c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C073Cu;
        // 0x2c0740: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0744u;
    // 0x2c0744: 0x0  nop
    ctx->pc = 0x2c0744u;
    // NOP
    ctx->pc = 0x2c0748u;
}
