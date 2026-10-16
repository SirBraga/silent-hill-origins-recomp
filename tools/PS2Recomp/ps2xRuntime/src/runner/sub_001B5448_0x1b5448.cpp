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

// Function: sub_001B5448
// Address: 0x1b5448 - 0x1b5830
void sub_001B5448_0x1b5448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5448_0x1b5448");
#endif

    switch (ctx->pc) {
        case 0x1b546cu: goto label_1b546c;
        case 0x1b5500u: goto label_1b5500;
        case 0x1b5514u: goto label_1b5514;
        case 0x1b5524u: goto label_1b5524;
        case 0x1b553cu: goto label_1b553c;
        case 0x1b5550u: goto label_1b5550;
        case 0x1b5568u: goto label_1b5568;
        case 0x1b557cu: goto label_1b557c;
        case 0x1b5590u: goto label_1b5590;
        case 0x1b55a4u: goto label_1b55a4;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b560cu: goto label_1b560c;
        case 0x1b5630u: goto label_1b5630;
        case 0x1b5644u: goto label_1b5644;
        case 0x1b565cu: goto label_1b565c;
        case 0x1b5670u: goto label_1b5670;
        case 0x1b5688u: goto label_1b5688;
        case 0x1b569cu: goto label_1b569c;
        case 0x1b56b0u: goto label_1b56b0;
        case 0x1b56c4u: goto label_1b56c4;
        case 0x1b56d8u: goto label_1b56d8;
        case 0x1b56f8u: goto label_1b56f8;
        case 0x1b5708u: goto label_1b5708;
        case 0x1b5720u: goto label_1b5720;
        case 0x1b5734u: goto label_1b5734;
        case 0x1b5754u: goto label_1b5754;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b579cu: goto label_1b579c;
        case 0x1b57b4u: goto label_1b57b4;
        case 0x1b57c8u: goto label_1b57c8;
        case 0x1b57dcu: goto label_1b57dc;
        case 0x1b57f4u: goto label_1b57f4;
        case 0x1b5808u: goto label_1b5808;
        default: break;
    }

    ctx->pc = 0x1b5448u;

    // 0x1b5448: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x1b544c: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x1b544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x1b5450: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x1b5450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x1b5454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5458: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x1b5458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x1b545c: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x1b545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x1b5460: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x1b5460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x1b5464: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1B5464u;
    SET_GPR_U32(ctx, 31, 0x1B546Cu);
    ctx->pc = 0x1B5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5464u;
    // 0x1b5468: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1B5464u, 0x1B546Cu)) {
        return;
    }
    ctx->pc = 0x1B546Cu;
label_1b546c:
    // 0x1b546c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b546cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5470: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5474: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b5474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b5478: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b547c: 0x2442c7f8  addiu       $v0, $v0, -0x3808
    ctx->pc = 0x1b547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x1b5480: 0xae130264  sw          $s3, 0x264($s0)
    ctx->pc = 0x1b5480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 19));
    // 0x1b5484: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5488: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b5488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1b548c: 0x24a5c6a0  addiu       $a1, $a1, -0x3960
    ctx->pc = 0x1b548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952608));
    // 0x1b5490: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b5490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1b5494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5498: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1b5498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1b549c: 0x26060278  addiu       $a2, $s0, 0x278
    ctx->pc = 0x1b549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x1b54a0: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1b54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1b54a4: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1b54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1b54a8: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1b54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1b54ac: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1b54acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1b54b0: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1b54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1b54b4: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1b54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1b54b8: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1b54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1b54bc: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1b54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1b54c0: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1b54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1b54c4: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1b54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1b54c8: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1b54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1b54cc: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1b54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1b54d0: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1b54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1b54d4: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1b54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1b54d8: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1b54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1b54dc: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1b54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1b54e0: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x1b54e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x1b54e4: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1b54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x1b54e8: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1b54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x1b54ec: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x1b54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x1b54f0: 0xe6010278  swc1        $f1, 0x278($s0)
    ctx->pc = 0x1b54f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x1b54f4: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x1b54f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
    // 0x1b54f8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B54F8u;
    SET_GPR_U32(ctx, 31, 0x1B5500u);
    ctx->pc = 0x1B54FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54F8u;
    // 0x1b54fc: 0xae020258  sw          $v0, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B54F8u, 0x1B5500u)) {
        return;
    }
    ctx->pc = 0x1B5500u;
label_1b5500:
    // 0x1b5500: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5508: 0x24a5c6a8  addiu       $a1, $a1, -0x3958
    ctx->pc = 0x1b5508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952616));
    // 0x1b550c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B550Cu;
    SET_GPR_U32(ctx, 31, 0x1B5514u);
    ctx->pc = 0x1B5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B550Cu;
    // 0x1b5510: 0x2606027c  addiu       $a2, $s0, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B550Cu, 0x1B5514u)) {
        return;
    }
    ctx->pc = 0x1B5514u;
label_1b5514:
    // 0x1b5514: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b5514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b551c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B551Cu;
    SET_GPR_U32(ctx, 31, 0x1B5524u);
    ctx->pc = 0x1B5520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B551Cu;
    // 0x1b5520: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B551Cu, 0x1B5524u)) {
        return;
    }
    ctx->pc = 0x1B5524u;
label_1b5524:
    // 0x1b5524: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b552c: 0x24a5c6b0  addiu       $a1, $a1, -0x3950
    ctx->pc = 0x1b552cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952624));
    // 0x1b5530: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5534: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B5534u;
    SET_GPR_U32(ctx, 31, 0x1B553Cu);
    ctx->pc = 0x1B5538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5534u;
    // 0x1b5538: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B5534u, 0x1B553Cu)) {
        return;
    }
    ctx->pc = 0x1B553Cu;
label_1b553c:
    // 0x1b553c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b553cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5540: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5540u;
    {
        const bool branch_taken_0x1b5540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5540u;
        // 0x1b5544: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5540) {
            ctx->pc = 0x1B5554u;
            goto label_1b5554;
        }
    }
    ctx->pc = 0x1B5548u;
    // 0x1b5548: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B5548u;
    SET_GPR_U32(ctx, 31, 0x1B5550u);
    ctx->pc = 0x1B554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5548u;
    // 0x1b554c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B5548u, 0x1B5550u)) {
        return;
    }
    ctx->pc = 0x1B5550u;
label_1b5550:
    // 0x1b5550: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1b5550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_1b5554:
    // 0x1b5554: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b555c: 0x24a5c6b8  addiu       $a1, $a1, -0x3948
    ctx->pc = 0x1b555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952632));
    // 0x1b5560: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B5560u;
    SET_GPR_U32(ctx, 31, 0x1B5568u);
    ctx->pc = 0x1B5564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5560u;
    // 0x1b5564: 0x26060288  addiu       $a2, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B5560u, 0x1B5568u)) {
        return;
    }
    ctx->pc = 0x1B5568u;
label_1b5568:
    // 0x1b5568: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b556c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5570: 0x24a5c6c8  addiu       $a1, $a1, -0x3938
    ctx->pc = 0x1b5570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952648));
    // 0x1b5574: 0xc065fc0  jal         func_197F00
    ctx->pc = 0x1B5574u;
    SET_GPR_U32(ctx, 31, 0x1B557Cu);
    ctx->pc = 0x1B5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5574u;
    // 0x1b5578: 0x26060280  addiu       $a2, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197F00u, 0x1B5574u, 0x1B557Cu)) {
        return;
    }
    ctx->pc = 0x1B557Cu;
label_1b557c:
    // 0x1b557c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b557cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5584: 0x24a5c6d8  addiu       $a1, $a1, -0x3928
    ctx->pc = 0x1b5584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952664));
    // 0x1b5588: 0xc065fc0  jal         func_197F00
    ctx->pc = 0x1B5588u;
    SET_GPR_U32(ctx, 31, 0x1B5590u);
    ctx->pc = 0x1B558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5588u;
    // 0x1b558c: 0x26060284  addiu       $a2, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197F00u, 0x1B5588u, 0x1B5590u)) {
        return;
    }
    ctx->pc = 0x1B5590u;
label_1b5590:
    // 0x1b5590: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1b5590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b559c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B559Cu;
    SET_GPR_U32(ctx, 31, 0x1B55A4u);
    ctx->pc = 0x1B55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B559Cu;
    // 0x1b55a0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B559Cu, 0x1B55A4u)) {
        return;
    }
    ctx->pc = 0x1B55A4u;
label_1b55a4:
    // 0x1b55a4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b55a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b55a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b55a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55ac: 0x24a5c6e8  addiu       $a1, $a1, -0x3918
    ctx->pc = 0x1b55acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952680));
    // 0x1b55b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b55b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55b4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B55B4u;
    SET_GPR_U32(ctx, 31, 0x1B55BCu);
    ctx->pc = 0x1B55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55B4u;
    // 0x1b55b8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B55B4u, 0x1B55BCu)) {
        return;
    }
    ctx->pc = 0x1B55BCu;
label_1b55bc:
    // 0x1b55bc: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1b55bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b55c0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B55C0u;
    {
        const bool branch_taken_0x1b55c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55C0u;
        // 0x1b55c4: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55c0) {
            ctx->pc = 0x1B561Cu;
            goto label_1b561c;
        }
    }
    ctx->pc = 0x1B55C8u;
    // 0x1b55c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b55c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55cc: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1B55CCu;
    SET_GPR_U32(ctx, 31, 0x1B55D4u);
    ctx->pc = 0x1B55D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55CCu;
    // 0x1b55d0: 0x2484c6f8  addiu       $a0, $a0, -0x3908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1B55CCu, 0x1B55D4u)) {
        return;
    }
    ctx->pc = 0x1B55D4u;
label_1b55d4:
    // 0x1b55d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B55D4u;
    {
        const bool branch_taken_0x1b55d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55D4u;
        // 0x1b55d8: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55d4) {
            ctx->pc = 0x1B55E4u;
            goto label_1b55e4;
        }
    }
    ctx->pc = 0x1B55DCu;
    // 0x1b55dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B55DCu;
    {
        const bool branch_taken_0x1b55dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55DCu;
        // 0x1b55e0: 0xae00029c  sw          $zero, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55dc) {
            ctx->pc = 0x1B561Cu;
            goto label_1b561c;
        }
    }
    ctx->pc = 0x1B55E4u;
label_1b55e4:
    // 0x1b55e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b55e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55e8: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1B55E8u;
    SET_GPR_U32(ctx, 31, 0x1B55F0u);
    ctx->pc = 0x1B55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55E8u;
    // 0x1b55ec: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1B55E8u, 0x1B55F0u)) {
        return;
    }
    ctx->pc = 0x1B55F0u;
label_1b55f0:
    // 0x1b55f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B55F0u;
    {
        const bool branch_taken_0x1b55f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55F0u;
        // 0x1b55f4: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55f0) {
            ctx->pc = 0x1B5600u;
            goto label_1b5600;
        }
    }
    ctx->pc = 0x1B55F8u;
    // 0x1b55f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B55F8u;
    {
        const bool branch_taken_0x1b55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55F8u;
        // 0x1b55fc: 0xae13029c  sw          $s3, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55f8) {
            ctx->pc = 0x1B561Cu;
            goto label_1b561c;
        }
    }
    ctx->pc = 0x1B5600u;
label_1b5600:
    // 0x1b5600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5604: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1B5604u;
    SET_GPR_U32(ctx, 31, 0x1B560Cu);
    ctx->pc = 0x1B5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5604u;
    // 0x1b5608: 0x2484c708  addiu       $a0, $a0, -0x38F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1B5604u, 0x1B560Cu)) {
        return;
    }
    ctx->pc = 0x1B560Cu;
label_1b560c:
    // 0x1b560c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B560Cu;
    {
        const bool branch_taken_0x1b560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B560Cu;
        // 0x1b5610: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b560c) {
            ctx->pc = 0x1B5620u;
            goto label_1b5620;
        }
    }
    ctx->pc = 0x1B5614u;
    // 0x1b5614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5618: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1b5618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_1b561c:
    // 0x1b561c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b561cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1b5620:
    // 0x1b5620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5624: 0x24a5c710  addiu       $a1, $a1, -0x38F0
    ctx->pc = 0x1b5624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952720));
    // 0x1b5628: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1B5628u;
    SET_GPR_U32(ctx, 31, 0x1B5630u);
    ctx->pc = 0x1B562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5628u;
    // 0x1b562c: 0x26060264  addiu       $a2, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1B5628u, 0x1B5630u)) {
        return;
    }
    ctx->pc = 0x1B5630u;
label_1b5630:
    // 0x1b5630: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1b5630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b5634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b563c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B563Cu;
    SET_GPR_U32(ctx, 31, 0x1B5644u);
    ctx->pc = 0x1B5640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B563Cu;
    // 0x1b5640: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B563Cu, 0x1B5644u)) {
        return;
    }
    ctx->pc = 0x1B5644u;
label_1b5644:
    // 0x1b5644: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b564c: 0x24a5c720  addiu       $a1, $a1, -0x38E0
    ctx->pc = 0x1b564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952736));
    // 0x1b5650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b5650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5654: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B5654u;
    SET_GPR_U32(ctx, 31, 0x1B565Cu);
    ctx->pc = 0x1B5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5654u;
    // 0x1b5658: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B5654u, 0x1B565Cu)) {
        return;
    }
    ctx->pc = 0x1B565Cu;
label_1b565c:
    // 0x1b565c: 0x83a30100  lb          $v1, 0x100($sp)
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b5660: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5660u;
    {
        const bool branch_taken_0x1b5660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5660u;
        // 0x1b5664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5660) {
            ctx->pc = 0x1B5674u;
            goto label_1b5674;
        }
    }
    ctx->pc = 0x1B5668u;
    // 0x1b5668: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B5668u;
    SET_GPR_U32(ctx, 31, 0x1B5670u);
    ctx->pc = 0x1B566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5668u;
    // 0x1b566c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B5668u, 0x1B5670u)) {
        return;
    }
    ctx->pc = 0x1B5670u;
label_1b5670:
    // 0x1b5670: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1b5670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1b5674:
    // 0x1b5674: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b567c: 0x24a5c730  addiu       $a1, $a1, -0x38D0
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952752));
    // 0x1b5680: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B5680u;
    SET_GPR_U32(ctx, 31, 0x1B5688u);
    ctx->pc = 0x1B5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5680u;
    // 0x1b5684: 0x2606028c  addiu       $a2, $s0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B5680u, 0x1B5688u)) {
        return;
    }
    ctx->pc = 0x1B5688u;
label_1b5688:
    // 0x1b5688: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b568c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5690: 0x24a5c740  addiu       $a1, $a1, -0x38C0
    ctx->pc = 0x1b5690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952768));
    // 0x1b5694: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B5694u;
    SET_GPR_U32(ctx, 31, 0x1B569Cu);
    ctx->pc = 0x1B5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5694u;
    // 0x1b5698: 0x26060290  addiu       $a2, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B5694u, 0x1B569Cu)) {
        return;
    }
    ctx->pc = 0x1B569Cu;
label_1b569c:
    // 0x1b569c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b569cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b56a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b56a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56a4: 0x24a5c750  addiu       $a1, $a1, -0x38B0
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952784));
    // 0x1b56a8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B56A8u;
    SET_GPR_U32(ctx, 31, 0x1B56B0u);
    ctx->pc = 0x1B56ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56A8u;
    // 0x1b56ac: 0x26060294  addiu       $a2, $s0, 0x294 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B56A8u, 0x1B56B0u)) {
        return;
    }
    ctx->pc = 0x1B56B0u;
label_1b56b0:
    // 0x1b56b0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b56b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b56b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b56b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56b8: 0x24a5c760  addiu       $a1, $a1, -0x38A0
    ctx->pc = 0x1b56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952800));
    // 0x1b56bc: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B56BCu;
    SET_GPR_U32(ctx, 31, 0x1B56C4u);
    ctx->pc = 0x1B56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56BCu;
    // 0x1b56c0: 0x26060298  addiu       $a2, $s0, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B56BCu, 0x1B56C4u)) {
        return;
    }
    ctx->pc = 0x1B56C4u;
label_1b56c4:
    // 0x1b56c4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b56c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b56c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b56c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56cc: 0x24a5c770  addiu       $a1, $a1, -0x3890
    ctx->pc = 0x1b56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952816));
    // 0x1b56d0: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1B56D0u;
    SET_GPR_U32(ctx, 31, 0x1B56D8u);
    ctx->pc = 0x1B56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56D0u;
    // 0x1b56d4: 0x260602a0  addiu       $a2, $s0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1B56D0u, 0x1B56D8u)) {
        return;
    }
    ctx->pc = 0x1B56D8u;
label_1b56d8:
    // 0x1b56d8: 0x8e0302a0  lw          $v1, 0x2A0($s0)
    ctx->pc = 0x1b56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x1b56dc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B56DCu;
    {
        const bool branch_taken_0x1b56dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56DCu;
        // 0x1b56e0: 0x27b10180  addiu       $s1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56dc) {
            ctx->pc = 0x1B5738u;
            goto label_1b5738;
        }
    }
    ctx->pc = 0x1B56E4u;
    // 0x1b56e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b56e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b56e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b56e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56ec: 0x24a5c780  addiu       $a1, $a1, -0x3880
    ctx->pc = 0x1b56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952832));
    // 0x1b56f0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B56F0u;
    SET_GPR_U32(ctx, 31, 0x1B56F8u);
    ctx->pc = 0x1B56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56F0u;
    // 0x1b56f4: 0x260602a4  addiu       $a2, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B56F0u, 0x1B56F8u)) {
        return;
    }
    ctx->pc = 0x1B56F8u;
label_1b56f8:
    // 0x1b56f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b56f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b56fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5700: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B5700u;
    SET_GPR_U32(ctx, 31, 0x1B5708u);
    ctx->pc = 0x1B5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5700u;
    // 0x1b5704: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B5700u, 0x1B5708u)) {
        return;
    }
    ctx->pc = 0x1B5708u;
label_1b5708:
    // 0x1b5708: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b570c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b570cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5710: 0x24a5c790  addiu       $a1, $a1, -0x3870
    ctx->pc = 0x1b5710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952848));
    // 0x1b5714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5718: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B5718u;
    SET_GPR_U32(ctx, 31, 0x1B5720u);
    ctx->pc = 0x1B571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5718u;
    // 0x1b571c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B5718u, 0x1B5720u)) {
        return;
    }
    ctx->pc = 0x1B5720u;
label_1b5720:
    // 0x1b5720: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x1b5720u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b5724: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5724u;
    {
        const bool branch_taken_0x1b5724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5724u;
        // 0x1b5728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5724) {
            ctx->pc = 0x1B5738u;
            goto label_1b5738;
        }
    }
    ctx->pc = 0x1B572Cu;
    // 0x1b572c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B572Cu;
    SET_GPR_U32(ctx, 31, 0x1B5734u);
    ctx->pc = 0x1B5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B572Cu;
    // 0x1b5730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B572Cu, 0x1B5734u)) {
        return;
    }
    ctx->pc = 0x1B5734u;
label_1b5734:
    // 0x1b5734: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1b5734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1b5738:
    // 0x1b5738: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b573c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b573cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b5740: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1b5740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b5744: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1b5744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x1b5748: 0x24a5c7a8  addiu       $a1, $a1, -0x3858
    ctx->pc = 0x1b5748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952872));
    // 0x1b574c: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1B574Cu;
    SET_GPR_U32(ctx, 31, 0x1B5754u);
    ctx->pc = 0x1B5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B574Cu;
    // 0x1b5750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1B574Cu, 0x1B5754u)) {
        return;
    }
    ctx->pc = 0x1B5754u;
label_1b5754:
    // 0x1b5754: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b5758: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b5758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b575c: 0x93a70200  lbu         $a3, 0x200($sp)
    ctx->pc = 0x1b575cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b5760: 0x24a5c7b8  addiu       $a1, $a1, -0x3848
    ctx->pc = 0x1b5760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952888));
    // 0x1b5764: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x1b5764u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b5768: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x1b5768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b576c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1b576cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1b5770: 0xa2060262  sb          $a2, 0x262($s0)
    ctx->pc = 0x1b5770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 610), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b5774: 0xa2030261  sb          $v1, 0x261($s0)
    ctx->pc = 0x1b5774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b577c: 0xa2070263  sb          $a3, 0x263($s0)
    ctx->pc = 0x1b577cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 611), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b5780: 0x260602b0  addiu       $a2, $s0, 0x2B0
    ctx->pc = 0x1b5780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x1b5784: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1B5784u;
    SET_GPR_U32(ctx, 31, 0x1B578Cu);
    ctx->pc = 0x1B5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5784u;
    // 0x1b5788: 0xa2020260  sb          $v0, 0x260($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1B5784u, 0x1B578Cu)) {
        return;
    }
    ctx->pc = 0x1B578Cu;
label_1b578c:
    // 0x1b578c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b578cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5794: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B5794u;
    SET_GPR_U32(ctx, 31, 0x1B579Cu);
    ctx->pc = 0x1B5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5794u;
    // 0x1b5798: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B5794u, 0x1B579Cu)) {
        return;
    }
    ctx->pc = 0x1B579Cu;
label_1b579c:
    // 0x1b579c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b579cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b57a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b57a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57a4: 0x24a5c7c8  addiu       $a1, $a1, -0x3838
    ctx->pc = 0x1b57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952904));
    // 0x1b57a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b57a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57ac: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B57ACu;
    SET_GPR_U32(ctx, 31, 0x1B57B4u);
    ctx->pc = 0x1B57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57ACu;
    // 0x1b57b0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B57ACu, 0x1B57B4u)) {
        return;
    }
    ctx->pc = 0x1B57B4u;
label_1b57b4:
    // 0x1b57b4: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x1b57b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b57b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B57B8u;
    {
        const bool branch_taken_0x1b57b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57B8u;
        // 0x1b57bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57b8) {
            ctx->pc = 0x1B57CCu;
            goto label_1b57cc;
        }
    }
    ctx->pc = 0x1B57C0u;
    // 0x1b57c0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B57C0u;
    SET_GPR_U32(ctx, 31, 0x1B57C8u);
    ctx->pc = 0x1B57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57C0u;
    // 0x1b57c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B57C0u, 0x1B57C8u)) {
        return;
    }
    ctx->pc = 0x1B57C8u;
label_1b57c8:
    // 0x1b57c8: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x1b57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
label_1b57cc:
    // 0x1b57cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b57ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B57D4u;
    SET_GPR_U32(ctx, 31, 0x1B57DCu);
    ctx->pc = 0x1B57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57D4u;
    // 0x1b57d8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B57D4u, 0x1B57DCu)) {
        return;
    }
    ctx->pc = 0x1B57DCu;
label_1b57dc:
    // 0x1b57dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b57dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b57e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b57e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57e4: 0x24a5c7e0  addiu       $a1, $a1, -0x3820
    ctx->pc = 0x1b57e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952928));
    // 0x1b57e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b57e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57ec: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B57ECu;
    SET_GPR_U32(ctx, 31, 0x1B57F4u);
    ctx->pc = 0x1B57F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57ECu;
    // 0x1b57f0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B57ECu, 0x1B57F4u)) {
        return;
    }
    ctx->pc = 0x1B57F4u;
label_1b57f4:
    // 0x1b57f4: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x1b57f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b57f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B57F8u;
    {
        const bool branch_taken_0x1b57f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57F8u;
        // 0x1b57fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57f8) {
            ctx->pc = 0x1B580Cu;
            goto label_1b580c;
        }
    }
    ctx->pc = 0x1B5800u;
    // 0x1b5800: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B5800u;
    SET_GPR_U32(ctx, 31, 0x1B5808u);
    ctx->pc = 0x1B5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5800u;
    // 0x1b5804: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B5800u, 0x1B5808u)) {
        return;
    }
    ctx->pc = 0x1B5808u;
label_1b5808:
    // 0x1b5808: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1b5808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_1b580c:
    // 0x1b580c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5810: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x1b5810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1b5814: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x1b5814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1b5818: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x1b5818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1b581c: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x1b581cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b5820: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x1b5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b5824: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5824u;
        // 0x1b5828: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B582Cu;
    // 0x1b582c: 0x0  nop
    ctx->pc = 0x1b582cu;
    // NOP
    ctx->pc = 0x1b5830u;
}
