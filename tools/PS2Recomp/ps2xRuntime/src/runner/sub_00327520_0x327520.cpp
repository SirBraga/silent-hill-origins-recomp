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

// Function: sub_00327520
// Address: 0x327520 - 0x327680
void sub_00327520_0x327520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327520_0x327520");
#endif

    switch (ctx->pc) {
        case 0x32757cu: goto label_32757c;
        case 0x327590u: goto label_327590;
        case 0x3275b8u: goto label_3275b8;
        case 0x3275d0u: goto label_3275d0;
        case 0x3275f0u: goto label_3275f0;
        case 0x327628u: goto label_327628;
        case 0x327630u: goto label_327630;
        case 0x327638u: goto label_327638;
        case 0x327640u: goto label_327640;
        case 0x327650u: goto label_327650;
        default: break;
    }

    ctx->pc = 0x327520u;

    // 0x327520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x327520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x327524: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x327528: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x327528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x32752c: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x32752cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x327530: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327534: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x327534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x327538: 0x26518590  addiu       $s1, $s2, -0x7A70
    ctx->pc = 0x327538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935952));
    // 0x32753c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x32753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x327540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327544: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x327544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x688598u));
    // 0x327548: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327548u;
    {
        const bool branch_taken_0x327548 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327548u;
        // 0x32754c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327548) {
            ctx->pc = 0x32755Cu;
            goto label_32755c;
        }
    }
    ctx->pc = 0x327550u;
    // 0x327550: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x327550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327554: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x327554u;
    {
        const bool branch_taken_0x327554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327554u;
        // 0x327558: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327554) {
            ctx->pc = 0x327654u;
            goto label_327654;
        }
    }
    ctx->pc = 0x32755Cu;
label_32755c:
    // 0x32755c: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x32755cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x327560: 0xfe408590  sd          $zero, -0x7A70($s2)
    ctx->pc = 0x327560u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294935952), GPR_U64(ctx, 0));
    // 0x327564: 0x2670d740  addiu       $s0, $s3, -0x28C0
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956864));
    // 0x327568: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x327568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x32756c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327574: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x327574u;
    SET_GPR_U32(ctx, 31, 0x32757Cu);
    ctx->pc = 0x327578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327574u;
    // 0x327578: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x327574u, 0x32757Cu)) {
        return;
    }
    ctx->pc = 0x32757Cu;
label_32757c:
    // 0x32757c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x32757cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x327580: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x327580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x327584: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x327584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x327588: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x327588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x32758c: 0x0  nop
    ctx->pc = 0x32758cu;
    // NOP
label_327590:
    // 0x327590: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x327590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x327594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327598: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x327598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x32759c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x32759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x3275a0: 0x0  nop
    ctx->pc = 0x3275a0u;
    // NOP
    // 0x3275a4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3275A4u;
    {
        const bool branch_taken_0x3275a4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3275a4) {
            ctx->pc = 0x327590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327590;
        }
    }
    ctx->pc = 0x3275ACu;
    // 0x3275ac: 0x2662d740  addiu       $v0, $s3, -0x28C0
    ctx->pc = 0x3275acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956864));
    // 0x3275b0: 0xc0ca034  jal         func_3280D0
    ctx->pc = 0x3275B0u;
    SET_GPR_U32(ctx, 31, 0x3275B8u);
    ctx->pc = 0x3275B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275B0u;
    // 0x3275b4: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3280D0u, 0x3275B0u, 0x3275B8u)) {
        return;
    }
    ctx->pc = 0x3275B8u;
label_3275b8:
    // 0x3275b8: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3275b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3275bc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3275bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3275c0: 0x24a57968  addiu       $a1, $a1, 0x7968
    ctx->pc = 0x3275c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31080));
    // 0x3275c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3275c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275c8: 0xc0c8404  jal         func_321010
    ctx->pc = 0x3275C8u;
    SET_GPR_U32(ctx, 31, 0x3275D0u);
    ctx->pc = 0x3275CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275C8u;
    // 0x3275cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321010u, 0x3275C8u, 0x3275D0u)) {
        return;
    }
    ctx->pc = 0x3275D0u;
label_3275d0:
    // 0x3275d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3275d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275d4: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3275D4u;
    {
        const bool branch_taken_0x3275d4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3275d4) {
            ctx->pc = 0x3275D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3275D4u;
            // 0x3275d8: 0x26428590  addiu       $v0, $s2, -0x7A70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935952));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3275E8u;
            goto label_3275e8;
        }
    }
    ctx->pc = 0x3275DCu;
    // 0x3275dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3275dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3275e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3275E0u;
    {
        const bool branch_taken_0x3275e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275E0u;
        // 0x3275e4: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275e0) {
            ctx->pc = 0x327654u;
            goto label_327654;
        }
    }
    ctx->pc = 0x3275E8u;
label_3275e8:
    // 0x3275e8: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x3275E8u;
    SET_GPR_U32(ctx, 31, 0x3275F0u);
    ctx->pc = 0x3275ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275E8u;
    // 0x3275ec: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x3275E8u, 0x3275F0u)) {
        return;
    }
    ctx->pc = 0x3275F0u;
label_3275f0:
    // 0x3275f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3275f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3275f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3275f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275f8: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3275f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x3275fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x327600: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x327600u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x327604: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x327604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x327608: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x327608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x32760c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x32760cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x327610: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x327610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x327614: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x327614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x327618: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327618u;
    {
        const bool branch_taken_0x327618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327618u;
        // 0x32761c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327618) {
            ctx->pc = 0x327630u;
            goto label_327630;
        }
    }
    ctx->pc = 0x327620u;
    // 0x327620: 0xc0c9d3c  jal         func_3274F0
    ctx->pc = 0x327620u;
    SET_GPR_U32(ctx, 31, 0x327628u);
    ctx->pc = 0x327624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327620u;
    // 0x327624: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3274F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3274F0u, 0x327620u, 0x327628u)) {
        return;
    }
    ctx->pc = 0x327628u;
label_327628:
    // 0x327628: 0xc0c9d44  jal         func_327510
    ctx->pc = 0x327628u;
    SET_GPR_U32(ctx, 31, 0x327630u);
    ctx->pc = 0x32762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327628u;
    // 0x32762c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327510u, 0x327628u, 0x327630u)) {
        return;
    }
    ctx->pc = 0x327630u;
label_327630:
    // 0x327630: 0xc0c9d40  jal         func_327500
    ctx->pc = 0x327630u;
    SET_GPR_U32(ctx, 31, 0x327638u);
    ctx->pc = 0x327634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327630u;
    // 0x327634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327500u, 0x327630u, 0x327638u)) {
        return;
    }
    ctx->pc = 0x327638u;
label_327638:
    // 0x327638: 0xc0c8770  jal         func_321DC0
    ctx->pc = 0x327638u;
    SET_GPR_U32(ctx, 31, 0x327640u);
    ctx->pc = 0x32763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327638u;
    // 0x32763c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321DC0u, 0x327638u, 0x327640u)) {
        return;
    }
    ctx->pc = 0x327640u;
label_327640:
    // 0x327640: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327640u;
    {
        const bool branch_taken_0x327640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x327644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327640u;
        // 0x327644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327640) {
            ctx->pc = 0x327654u;
            goto label_327654;
        }
    }
    ctx->pc = 0x327648u;
    // 0x327648: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x327648u;
    SET_GPR_U32(ctx, 31, 0x327650u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x327648u, 0x327650u)) {
        return;
    }
    ctx->pc = 0x327650u;
label_327650:
    // 0x327650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327654:
    // 0x327654: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x327654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327658: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x327658u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32765c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x32765cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327660: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x327660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327664: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32766c: 0x3e00008  jr          $ra
    ctx->pc = 0x32766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32766Cu;
        // 0x327670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327674u;
    // 0x327674: 0x0  nop
    ctx->pc = 0x327674u;
    // NOP
    // 0x327678: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x327678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x32767c: 0x0  nop
    ctx->pc = 0x32767cu;
    // NOP
    ctx->pc = 0x327680u;
}
