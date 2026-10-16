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

// Function: sub_002694A8
// Address: 0x2694a8 - 0x26a028
void sub_002694A8_0x2694a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002694A8_0x2694a8");
#endif

    switch (ctx->pc) {
        case 0x2695ccu: goto label_2695cc;
        case 0x269600u: goto label_269600;
        case 0x26960cu: goto label_26960c;
        case 0x269620u: goto label_269620;
        case 0x269644u: goto label_269644;
        case 0x269668u: goto label_269668;
        case 0x26969cu: goto label_26969c;
        case 0x2696b0u: goto label_2696b0;
        case 0x269754u: goto label_269754;
        case 0x269764u: goto label_269764;
        case 0x2697e0u: goto label_2697e0;
        case 0x269f20u: goto label_269f20;
        case 0x269f68u: goto label_269f68;
        case 0x269f74u: goto label_269f74;
        default: break;
    }

    ctx->pc = 0x2694a8u;

    // 0x2694a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2694a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2694ac: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2694acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2694b0: 0x8ce73888  lw          $a3, 0x3888($a3)
    ctx->pc = 0x2694b0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3888u));
    // 0x2694b4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2694b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2694b8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2694b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x2694bc: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2694bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2694c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2694c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694c4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2694c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2694c8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x2694c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x2694cc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2694ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2694d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2694d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694d4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2694d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2694d8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2694d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2694dc: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2694dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2694e0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2694e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2694e4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2694e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2694e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2694e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2694ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2694ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2694f0: 0xdc8434d0  ld          $a0, 0x34D0($a0)
    ctx->pc = 0x2694f0u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x6B34D0u));
    // 0x2694f4: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x2694f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2694f8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2694f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2694fc: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2694fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x269500: 0xdd0834e8  ld          $t0, 0x34E8($t0)
    ctx->pc = 0x269500u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x6B34E8u));
    // 0x269504: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x269504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x269508: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26950c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x26950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x269510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x269510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269514: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269518: 0xdc4234c0  ld          $v0, 0x34C0($v0)
    ctx->pc = 0x269518u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34C0u));
    // 0x26951c: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x26951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x269520: 0xdc620078  ld          $v0, 0x78($v1)
    ctx->pc = 0x269520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x269524: 0xdc770070  ld          $s7, 0x70($v1)
    ctx->pc = 0x269524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x269528: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x269528u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26952c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26952cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x269530: 0xdc7e0068  ld          $fp, 0x68($v1)
    ctx->pc = 0x269530u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x269534: 0x2e63026  xor         $a2, $s7, $a2
    ctx->pc = 0x269534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 6));
    // 0x269538: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x269538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x26953c: 0x106b80a  movz        $s7, $t0, $a2
    ctx->pc = 0x26953cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8));
    // 0x269540: 0xffa40058  sd          $a0, 0x58($sp)
    ctx->pc = 0x269540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 4));
    // 0x269544: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x269544u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269548: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x269548u;
    {
        const bool branch_taken_0x269548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269548u;
        // 0x26954c: 0x8c750004  lw          $s5, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269548) {
            ctx->pc = 0x269558u;
            goto label_269558;
        }
    }
    ctx->pc = 0x269550u;
    // 0x269550: 0x56a00019  bnel        $s5, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x269550u;
    {
        const bool branch_taken_0x269550 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x269550) {
            ctx->pc = 0x269554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269550u;
            // 0x269554: 0xffa00040  sd          $zero, 0x40($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2695B8u;
            goto label_2695b8;
        }
    }
    ctx->pc = 0x269558u;
label_269558:
    // 0x269558: 0x3b4a00a  movz        $s4, $sp, $s4
    ctx->pc = 0x269558u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 29));
    // 0x26955c: 0x3b5a80a  movz        $s5, $sp, $s5
    ctx->pc = 0x26955cu;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 29));
    // 0x269560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x269564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x269564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269568: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x269568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26956c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26956cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269570: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x269570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x269574: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x269574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x269578: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x269578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26957c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26957cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269580: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x269580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x269584: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x269584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x269588: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x269588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26958c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26958cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x269590: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x269590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x269594: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x269594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269598: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26959c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2695a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2695a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2695a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2695a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2695a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2695a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2695ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2695acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2695b0: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x2695b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x2695b4: 0x0  nop
    ctx->pc = 0x2695b4u;
    // NOP
label_2695b8:
    // 0x2695b8: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x2695b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
    // 0x2695bc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2695BCu;
    {
        const bool branch_taken_0x2695bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695BCu;
        // 0x2695c0: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695bc) {
            ctx->pc = 0x2695F0u;
            goto label_2695f0;
        }
    }
    ctx->pc = 0x2695C4u;
    // 0x2695c4: 0xc091a88  jal         func_246A20
    ctx->pc = 0x2695C4u;
    SET_GPR_U32(ctx, 31, 0x2695CCu);
    ctx->pc = 0x2695C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695C4u;
    // 0x2695c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x2695C4u, 0x2695CCu)) {
        return;
    }
    ctx->pc = 0x2695CCu;
label_2695cc:
    // 0x2695cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2695d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2695d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2695d4: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x2695d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x2695d8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2695d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2695dc: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2695DCu;
    {
        const bool branch_taken_0x2695dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2695E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695DCu;
        // 0x2695e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695dc) {
            ctx->pc = 0x2695F0u;
            goto label_2695f0;
        }
    }
    ctx->pc = 0x2695E4u;
    // 0x2695e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2695e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2695e8: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x2695e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
    // 0x2695ec: 0x0  nop
    ctx->pc = 0x2695ecu;
    // NOP
label_2695f0:
    // 0x2695f0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2695F0u;
    {
        const bool branch_taken_0x2695f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695f0) {
            ctx->pc = 0x26960Cu;
            goto label_26960c;
        }
    }
    ctx->pc = 0x2695F8u;
    // 0x2695f8: 0xc091a88  jal         func_246A20
    ctx->pc = 0x2695F8u;
    SET_GPR_U32(ctx, 31, 0x269600u);
    ctx->pc = 0x2695FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695F8u;
    // 0x2695fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x2695F8u, 0x269600u)) {
        return;
    }
    ctx->pc = 0x269600u;
label_269600:
    // 0x269600: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x269604: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x269604u;
    SET_GPR_U32(ctx, 31, 0x26960Cu);
    ctx->pc = 0x269608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269604u;
    // 0x269608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x269604u, 0x26960Cu)) {
        return;
    }
    ctx->pc = 0x26960Cu;
label_26960c:
    // 0x26960c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26960Cu;
    {
        const bool branch_taken_0x26960c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26960c) {
            ctx->pc = 0x269620u;
            goto label_269620;
        }
    }
    ctx->pc = 0x269614u;
    // 0x269614: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x269614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269618: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x269618u;
    SET_GPR_U32(ctx, 31, 0x269620u);
    ctx->pc = 0x26961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269618u;
    // 0x26961c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x269618u, 0x269620u)) {
        return;
    }
    ctx->pc = 0x269620u;
label_269620:
    // 0x269620: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x269620u;
    {
        const bool branch_taken_0x269620 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x269624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269620u;
        // 0x269624: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269620) {
            ctx->pc = 0x269644u;
            goto label_269644;
        }
    }
    ctx->pc = 0x269628u;
    // 0x269628: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x269628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26962c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269630: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x269630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x269634: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269634u;
    {
        const bool branch_taken_0x269634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x269634) {
            ctx->pc = 0x269644u;
            goto label_269644;
        }
    }
    ctx->pc = 0x26963Cu;
    // 0x26963c: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26963Cu;
    SET_GPR_U32(ctx, 31, 0x269644u);
    ctx->pc = 0x269640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26963Cu;
    // 0x269640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26963Cu, 0x269644u)) {
        return;
    }
    ctx->pc = 0x269644u;
label_269644:
    // 0x269644: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x269644u;
    {
        const bool branch_taken_0x269644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269644u;
        // 0x269648: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269644) {
            ctx->pc = 0x269708u;
            goto label_269708;
        }
    }
    ctx->pc = 0x26964Cu;
    // 0x26964c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269650: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x269650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269654: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x269654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x269658: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x269658u;
    {
        const bool branch_taken_0x269658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269658u;
        // 0x26965c: 0xdf8384a0  ld          $v1, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269658) {
            ctx->pc = 0x269670u;
            goto label_269670;
        }
    }
    ctx->pc = 0x269660u;
    // 0x269660: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x269660u;
    SET_GPR_U32(ctx, 31, 0x269668u);
    ctx->pc = 0x269664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269660u;
    // 0x269664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x269660u, 0x269668u)) {
        return;
    }
    ctx->pc = 0x269668u;
label_269668:
    // 0x269668: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26966c: 0xdc633510  ld          $v1, 0x3510($v1)
    ctx->pc = 0x26966cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6B3510u));
label_269670:
    // 0x269670: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x269670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x269674: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x269674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x269678: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x269678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26967c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269680: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269684: 0xfc233510  sd          $v1, 0x3510($at)
    ctx->pc = 0x269684u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x269688: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x269688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26968c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26968cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269690: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x269690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x269694: 0xc091de2  jal         func_247788
    ctx->pc = 0x269694u;
    SET_GPR_U32(ctx, 31, 0x26969Cu);
    ctx->pc = 0x269698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269694u;
    // 0x269698: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x269694u, 0x26969Cu)) {
        return;
    }
    ctx->pc = 0x26969Cu;
label_26969c:
    // 0x26969c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2696a0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2696a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2696a4: 0x24a534f8  addiu       $a1, $a1, 0x34F8
    ctx->pc = 0x2696a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13560));
    // 0x2696a8: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x2696A8u;
    SET_GPR_U32(ctx, 31, 0x2696B0u);
    ctx->pc = 0x2696ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696A8u;
    // 0x2696ac: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x2696A8u, 0x2696B0u)) {
        return;
    }
    ctx->pc = 0x2696B0u;
label_2696b0:
    // 0x2696b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2696b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2696b4: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x2696b4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x2696b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2696b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2696bc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2696bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2696c0: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2696c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2696c4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2696c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2696c8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2696C8u;
    {
        const bool branch_taken_0x2696c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2696c8) {
            ctx->pc = 0x2696CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2696C8u;
            // 0x2696cc: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2696E0u;
            goto label_2696e0;
        }
    }
    ctx->pc = 0x2696D0u;
    // 0x2696d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2696d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2696d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2696d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2696d8: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x2696d8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x2696dc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2696dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2696e0:
    // 0x2696e0: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x2696e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x2696e4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2696e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2696e8: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2696E8u;
    {
        const bool branch_taken_0x2696e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2696ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E8u;
        // 0x2696ec: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696e8) {
            ctx->pc = 0x269730u;
            goto label_269730;
        }
    }
    ctx->pc = 0x2696F0u;
    // 0x2696f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2696f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2696f4: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x2696f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x2696f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2696f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2696fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2696fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x269700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x269700u;
    {
        const bool branch_taken_0x269700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269700u;
        // 0x269704: 0xff828480  sd          $v0, -0x7B80($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269700) {
            ctx->pc = 0x269728u;
            goto label_269728;
        }
    }
    ctx->pc = 0x269708u;
label_269708:
    // 0x269708: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26970c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26970cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x269710: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x269710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x269714: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269718: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x269718u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x26971c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269720: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269724: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x269724u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
label_269728:
    // 0x269728: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26972c: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26972cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
label_269730:
    // 0x269730: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x269730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269734: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x269734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x269738: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x269738u;
    {
        const bool branch_taken_0x269738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269738u;
        // 0x26973c: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269738) {
            ctx->pc = 0x269790u;
            goto label_269790;
        }
    }
    ctx->pc = 0x269740u;
    // 0x269740: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x269740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x269744: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x269744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x269748: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x269748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26974c: 0xc091de2  jal         func_247788
    ctx->pc = 0x26974Cu;
    SET_GPR_U32(ctx, 31, 0x269754u);
    ctx->pc = 0x269750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26974Cu;
    // 0x269750: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x26974Cu, 0x269754u)) {
        return;
    }
    ctx->pc = 0x269754u;
label_269754:
    // 0x269754: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x269754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x269758: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x269758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26975c: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x26975Cu;
    SET_GPR_U32(ctx, 31, 0x269764u);
    ctx->pc = 0x269760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26975Cu;
    // 0x269760: 0x92460050  lbu         $a2, 0x50($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x26975Cu, 0x269764u)) {
        return;
    }
    ctx->pc = 0x269764u;
label_269764:
    // 0x269764: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x269764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x269768: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26976c: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x26976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x269770: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x269770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x269774: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x269774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x269778: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x269778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x26977c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x26977cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x269780: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269780u;
    {
        const bool branch_taken_0x269780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x269784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269780u;
        // 0x269784: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269780) {
            ctx->pc = 0x269790u;
            goto label_269790;
        }
    }
    ctx->pc = 0x269788u;
    // 0x269788: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x269788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26978c: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x26978cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_269790:
    // 0x269790: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x269790u;
    {
        const bool branch_taken_0x269790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269790) {
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x269798u;
    // 0x269798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x269798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26979c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2697a0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2697a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2697a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2697A4u;
    {
        const bool branch_taken_0x2697a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697a4) {
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x2697ACu;
    // 0x2697ac: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2697ACu;
    {
        const bool branch_taken_0x2697ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697ac) {
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x2697B4u;
    // 0x2697b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2697b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2697b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2697b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2697bc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2697bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2697c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2697C0u;
    {
        const bool branch_taken_0x2697c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697c0) {
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x2697C8u;
    // 0x2697c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2697c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2697cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2697ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2697d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2697d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2697d4: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x2697d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_2697d8:
    // 0x2697d8: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2697D8u;
    SET_GPR_U32(ctx, 31, 0x2697E0u);
    ctx->pc = 0x2697DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697D8u;
    // 0x2697dc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2697D8u, 0x2697E0u)) {
        return;
    }
    ctx->pc = 0x2697E0u;
label_2697e0:
    // 0x2697e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2697e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2697e4: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x2697e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x2697e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2697e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697ec: 0x71231b89  pcpyld      $v1, $t1, $v1
    ctx->pc = 0x2697ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x2697f0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2697f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2697f4: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x2697f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2697f8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2697f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2697fc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2697fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x269800: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269804: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x269804u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269808: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x269808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x26980c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26980cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x269810: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x269810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x269814: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x269814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x269818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x269818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26981c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x26981cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269820: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x269820u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x269824: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x269824u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269828: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x269828u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x26982c: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x26982cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x269830: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x269830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x269834: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x269834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x269838: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x269838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x26983c: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x26983cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x269840: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x269840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x269844: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x269844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x269848: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x269848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26984c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x26984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x269850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x269850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x269854: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x269854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x269858: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x269858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x26985c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x26985cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x269860: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x269860u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x269864: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x269864u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x269868: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x269868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26986c: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x26986cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x269870: 0x35088002  ori         $t0, $t0, 0x8002
    ctx->pc = 0x269870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32770);
    // 0x269874: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x269874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x269878: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x269878u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x26987c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x26987cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x269880: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x269884: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x269884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269888: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269888u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26988c: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x26988cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x269890: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x269890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x269894: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269898: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x269898u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x26989c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x26989cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2698a0: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x2698a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x2698a4: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x2698a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x2698a8: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x2698a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x2698ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2698acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2698b0: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x2698b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2698b4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2698b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2698b8: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x2698b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x2698bc: 0x70971389  pcpyld      $v0, $a0, $s7
    ctx->pc = 0x2698bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 23)));
    // 0x2698c0: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x2698c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
    // 0x2698c4: 0xde880000  ld          $t0, 0x0($s4)
    ctx->pc = 0x2698c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2698c8: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x2698c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2698cc: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x2698ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x2698d0: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x2698d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
    // 0x2698d4: 0xde880010  ld          $t0, 0x10($s4)
    ctx->pc = 0x2698d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2698d8: 0xdea20010  ld          $v0, 0x10($s5)
    ctx->pc = 0x2698d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2698dc: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x2698dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x2698e0: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x2698e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
    // 0x2698e4: 0xde880030  ld          $t0, 0x30($s4)
    ctx->pc = 0x2698e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2698e8: 0xdea20030  ld          $v0, 0x30($s5)
    ctx->pc = 0x2698e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2698ec: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x2698ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x2698f0: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x2698f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
    // 0x2698f4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2698f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2698f8: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2698f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2698fc: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x2698fcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x269900: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x269900u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x269904: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x269904u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269908: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x269908u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
    // 0x26990c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x26990cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x269910: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x269910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x269914: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x269914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x269918: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x269918u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x26991c: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x26991cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
    // 0x269920: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x269920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x269924: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x269924u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x269928: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x269928u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
    // 0x26992c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x269930: 0x70561389  pcpyld      $v0, $v0, $s6
    ctx->pc = 0x269930u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x269934: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x269934u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
    // 0x269938: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x269938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x26993c: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x26993cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x269940: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x269940u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269944: 0x7ca200f0  sq          $v0, 0xF0($a1)
    ctx->pc = 0x269944u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 2));
    // 0x269948: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x269948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26994c: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x26994cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269950: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269950u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269954: 0x7ca20100  sq          $v0, 0x100($a1)
    ctx->pc = 0x269954u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 256), GPR_VEC(ctx, 2));
    // 0x269958: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x269958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x26995c: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x26995cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269960: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x269960u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269964: 0x7ca20110  sq          $v0, 0x110($a1)
    ctx->pc = 0x269964u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 272), GPR_VEC(ctx, 2));
    // 0x269968: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x269968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x26996c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269970: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269974: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x269974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x269978: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x269978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26997c: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x26997cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x269980: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x269980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x269984: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x269984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x269988: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x269988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26998c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26998cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x269990: 0x70892389  pcpyld      $a0, $a0, $t1
    ctx->pc = 0x269990u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x269994: 0x7ca40120  sq          $a0, 0x120($a1)
    ctx->pc = 0x269994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 288), GPR_VEC(ctx, 4));
    // 0x269998: 0x24a50130  addiu       $a1, $a1, 0x130
    ctx->pc = 0x269998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x26999c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2699a0: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x2699a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2699a4: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x2699a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x2699a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2699a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2699ac: 0x8c634134  lw          $v1, 0x4134($v1)
    ctx->pc = 0x2699acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4134u));
    // 0x2699b0: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2699b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2699b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2699b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2699b8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2699b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2699bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2699BCu;
    {
        const bool branch_taken_0x2699bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699BCu;
        // 0x2699c0: 0xaf8290cc  sw          $v0, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699bc) {
            ctx->pc = 0x2699D8u;
            goto label_2699d8;
        }
    }
    ctx->pc = 0x2699C4u;
    // 0x2699c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2699c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2699c8: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x2699c8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x2699cc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2699ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2699d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2699D0u;
    {
        const bool branch_taken_0x2699d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699D0u;
        // 0x2699d4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699d0) {
            ctx->pc = 0x2699E8u;
            goto label_2699e8;
        }
    }
    ctx->pc = 0x2699D8u;
label_2699d8:
    // 0x2699d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2699d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2699dc: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x2699dcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x2699e0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2699e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2699e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2699e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2699e8:
    // 0x2699e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2699e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2699ec: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x2699ecu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x2699f0: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x2699f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x2699f4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2699f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2699f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2699f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2699fc: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x2699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x269a00: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x269a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x269a04: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x269a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x269a08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x269a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x269a0c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x269a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x269a10: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x269a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x269a14: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x269a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x269a18: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x269a18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x269a1c: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x269a1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x269a20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x269a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x269a24: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x269a28: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x269a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x269a2c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x269a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x269a30: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x269a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x269a34: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x269a34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x269a38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x269a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x269a3c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x269a3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x269a40: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x269a40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x269a44: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x269a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x269a48: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x269a48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269a4c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x269a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x269a50: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x269a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x269a54: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269a58: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x269a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269a5c: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x269a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x269a60: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x269a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x269a64: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x269a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x269a68: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x269a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x269a6c: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x269a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x269a70: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x269a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x269a74: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x269a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x269a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x269a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a7c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x269a7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x269a80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x269a80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x269a84: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x269a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x269a88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269a8c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269a90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269a94: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x269a94u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x269a98: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x269a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x269a9c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x269a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x269aa0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x269aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x269aa4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x269aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x269aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x269AA8u;
    {
        const bool branch_taken_0x269aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AA8u;
        // 0x269aac: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269aa8) {
            ctx->pc = 0x269AC0u;
            goto label_269ac0;
        }
    }
    ctx->pc = 0x269AB0u;
    // 0x269ab0: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x269ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x269ab4: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x269ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x269ab8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x269ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x269abc: 0x0  nop
    ctx->pc = 0x269abcu;
    // NOP
label_269ac0:
    // 0x269ac0: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x269ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x269ac4: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x269ac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x269ac8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x269ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x269acc: 0x0  nop
    ctx->pc = 0x269accu;
    // NOP
    // 0x269ad0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x269ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x269ad4: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x269ad4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x269ad8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x269ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x269adc: 0x0  nop
    ctx->pc = 0x269adcu;
    // NOP
    // 0x269ae0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x269ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x269ae4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x269ae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269ae8: 0x0  nop
    ctx->pc = 0x269ae8u;
    // NOP
    // 0x269aec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x269aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x269af0: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x269af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x269af4: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x269af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x269af8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x269af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269afc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x269afcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269b00: 0x0  nop
    ctx->pc = 0x269b00u;
    // NOP
    // 0x269b04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269b08: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x269b08u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269b0c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x269b0cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x269b10: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x269b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269b14: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x269b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269b18: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x269b18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x269b1c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x269b1cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x269b20: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x269b20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x269b24: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x269b24u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x269b28: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x269b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269b2c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x269b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269b30: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x269b30u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269b34: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x269b34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x269b38: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x269b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x269b3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269b40: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269b44: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x269b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x269b48: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x269b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x269b4c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x269b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x269b50: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x269b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x269b54: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x269b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x269b58: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x269b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x269b5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x269b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x269b60: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x269b60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x269b64: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x269b64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x269b68: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x269b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x269b6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269b70: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269b70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269b74: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x269b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x269b78: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x269b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x269b7c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x269b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x269b80: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x269b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x269b84: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x269b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269b88: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x269b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269b8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x269b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269b90: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x269b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b94: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x269b94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x269b98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269b9c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x269b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269ba0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x269ba0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x269ba4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x269ba4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x269ba8: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x269ba8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x269bac: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x269bacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x269bb0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x269bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269bb4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x269bb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269bb8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x269bb8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269bbc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x269bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x269bc0: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x269bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x269bc4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269bc8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269bcc: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x269bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x269bd0: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x269bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x269bd4: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x269bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x269bd8: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x269bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x269bdc: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x269bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x269be0: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x269be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x269be4: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x269be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x269be8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x269be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x269bec: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x269becu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x269bf0: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x269bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x269bf4: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x269bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x269bf8: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x269bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x269bfc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269c00: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269c04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269c08: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x269c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x269c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x269C0Cu;
    {
        const bool branch_taken_0x269c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C0Cu;
        // 0x269c10: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c0c) {
            ctx->pc = 0x269C20u;
            goto label_269c20;
        }
    }
    ctx->pc = 0x269C14u;
    // 0x269c14: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x269C14u;
    {
        const bool branch_taken_0x269c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c14) {
            ctx->pc = 0x269C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269C14u;
            // 0x269c18: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x269C40u;
            goto label_269c40;
        }
    }
    ctx->pc = 0x269C1Cu;
    // 0x269c1c: 0x0  nop
    ctx->pc = 0x269c1cu;
    // NOP
label_269c20:
    // 0x269c20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269c24: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x269c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x269c28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x269C28u;
    {
        const bool branch_taken_0x269c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C28u;
        // 0x269c2c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c28) {
            ctx->pc = 0x269C70u;
            goto label_269c70;
        }
    }
    ctx->pc = 0x269C30u;
    // 0x269c30: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x269C30u;
    {
        const bool branch_taken_0x269c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c30) {
            ctx->pc = 0x269C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269C30u;
            // 0x269c34: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269C78u;
            goto label_269c78;
        }
    }
    ctx->pc = 0x269C38u;
    // 0x269c38: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x269c38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x269c3c: 0x0  nop
    ctx->pc = 0x269c3cu;
    // NOP
label_269c40:
    // 0x269c40: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269c44: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x269c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269c48: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x269c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x269c4c: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x269c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x269c50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x269c50u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x269c54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269c54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269c58: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x269c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269c5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269c60: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269c64: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x269c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x269c68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x269C68u;
    {
        const bool branch_taken_0x269c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C68u;
        // 0x269c6c: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c68) {
            ctx->pc = 0x269CA0u;
            goto label_269ca0;
        }
    }
    ctx->pc = 0x269C70u;
label_269c70:
    // 0x269c70: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x269c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x269c74: 0x0  nop
    ctx->pc = 0x269c74u;
    // NOP
label_269c78:
    // 0x269c78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269c7c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x269c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269c80: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x269c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x269c84: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x269c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269c88: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269c88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269c8c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x269c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269c90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269c94: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269c98: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x269c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x269c9c: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x269c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_269ca0:
    // 0x269ca0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x269ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269ca4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x269ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269ca8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269cac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269cb0: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x269cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269cb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269cb8: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x269cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x269cbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x269cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269cc0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269CC0u;
    {
        const bool branch_taken_0x269cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x269CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CC0u;
        // 0x269cc4: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cc0) {
            ctx->pc = 0x269CD4u;
            goto label_269cd4;
        }
    }
    ctx->pc = 0x269CC8u;
    // 0x269cc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x269cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x269ccc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269cd0: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x269cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_269cd4:
    // 0x269cd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269cd8: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x269cd8u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x269cdc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x269cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x269ce0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269ce4: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x269ce4u;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x269ce8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x269ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x269cec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x269cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x269cf0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x269cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x269cf4: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x269cf4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x269cf8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269cfc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x269cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269d00: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x269d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x269d04: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x269d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269d08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269d0c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269d10: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x269d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x269d14: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x269D14u;
    {
        const bool branch_taken_0x269d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D14u;
        // 0x269d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d14) {
            ctx->pc = 0x269DB8u;
            goto label_269db8;
        }
    }
    ctx->pc = 0x269D1Cu;
    // 0x269d1c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x269d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x269d20: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x269d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x269d24: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x269d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x269d28: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x269d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x269d2c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269d2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269d30: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269d30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269d34: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x269d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269d38: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269d3c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269d40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x269d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x269d44: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x269d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x269d48: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x269d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x269d4c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x269d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x269d50: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269d50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269d54: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x269d54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x269d58: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x269d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x269d5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269d60: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269d64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269d68: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x269d68u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x269d6c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x269d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x269d70: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269d70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269d74: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x269d74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x269d78: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x269d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x269d7c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269d80: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269d84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269d88: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x269d88u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x269d8c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x269d90: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269d90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269d94: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x269d94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x269d98: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x269d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x269d9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269da0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269da4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269da8: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x269da8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x269dac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x269DACu;
    {
        const bool branch_taken_0x269dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DACu;
        // 0x269db0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dac) {
            ctx->pc = 0x269E38u;
            goto label_269e38;
        }
    }
    ctx->pc = 0x269DB4u;
    // 0x269db4: 0x0  nop
    ctx->pc = 0x269db4u;
    // NOP
label_269db8:
    // 0x269db8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x269db8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269dbc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269dc0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x269dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269dc4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269dc8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269dc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269dcc: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x269dccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269dd0: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x269dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x269dd4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x269dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x269dd8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269ddc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269de0: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x269de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x269de4: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x269de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x269de8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x269de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x269dec: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x269decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x269df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269df4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269df4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269df8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x269df8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x269dfc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x269dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x269e00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269e04: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269e08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x269e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x269e0c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x269e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x269e10: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x269e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x269e14: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x269e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x269e18: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269e18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269e1c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x269e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x269e20: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x269e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x269e24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269e28: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269e2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269e30: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x269e30u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x269e34: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x269e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_269e38:
    // 0x269e38: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269e38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269e3c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x269e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x269e40: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x269e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x269e44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269e48: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269e4c: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x269e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x269e50: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x269e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x269e54: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x269e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x269e58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x269e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x269e5c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x269e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x269e60: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x269e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x269e64: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x269e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x269e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x269e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x269e6c: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x269e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x269e70: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x269e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x269e74: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x269e78: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x269e78u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x269e7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269e80: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x269e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x269e84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269e8c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x269e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269e90: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x269E90u;
    {
        const bool branch_taken_0x269e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x269E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E90u;
        // 0x269e94: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e90) {
            ctx->pc = 0x269EC8u;
            goto label_269ec8;
        }
    }
    ctx->pc = 0x269E98u;
    // 0x269e98: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x269e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x269e9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x269e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x269ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ea4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x269ea4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269ea8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269eac: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x269eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269eb0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269eb4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x269eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x269eb8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269ebc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269ebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269ec0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269ec4: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x269ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_269ec8:
    // 0x269ec8: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x269ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x269ecc: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x269eccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x269ed0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x269ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x269ed4: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x269ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x269ed8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x269ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269edc: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x269edcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x269ee0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x269ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x269ee4: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x269ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x269ee8: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x269ee8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x269eec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x269eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x269ef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x269ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x269ef4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x269ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x269ef8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x269ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x269efc: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x269efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x269f00: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x269f00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269f04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x269f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x269f08: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x269f08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269f0c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x269f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x269f10: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x269f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x269f14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269f18: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x269f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269f1c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x269f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_269f20:
    // 0x269f20: 0x42000039  di
    ctx->pc = 0x269f20u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x269f24: 0x40f  sync.p
    ctx->pc = 0x269f24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x269f28: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x269f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x269f2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269f30: 0x0  nop
    ctx->pc = 0x269f30u;
    // NOP
    // 0x269f34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x269F34u;
    {
        const bool branch_taken_0x269f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x269f34) {
            ctx->pc = 0x269F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269f20;
        }
    }
    ctx->pc = 0x269F3Cu;
    // 0x269f3c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x269f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x269f40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x269f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x269f44: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x269f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x269f48: 0x42000038  ei
    ctx->pc = 0x269f48u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x269f4c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x269f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x269f50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x269f58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269F58u;
    {
        const bool branch_taken_0x269f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x269F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F58u;
        // 0x269f5c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f58) {
            ctx->pc = 0x269F68u;
            goto label_269f68;
        }
    }
    ctx->pc = 0x269F60u;
    // 0x269f60: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x269F60u;
    SET_GPR_U32(ctx, 31, 0x269F68u);
    ctx->pc = 0x269F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F60u;
    // 0x269f64: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x269F60u, 0x269F68u)) {
        return;
    }
    ctx->pc = 0x269F68u;
label_269f68:
    // 0x269f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x269f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f6c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x269F6Cu;
    SET_GPR_U32(ctx, 31, 0x269F74u);
    ctx->pc = 0x269F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F6Cu;
    // 0x269f70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x269F6Cu, 0x269F74u)) {
        return;
    }
    ctx->pc = 0x269F74u;
label_269f74:
    // 0x269f74: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x269f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x269f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f7c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x269f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x269f80: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x269f80u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269f84: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x269f88: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x269f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x269f8c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x269f8cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x269f90: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x269f90u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269f94: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x269f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x269f98: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x269f98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x269f9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x269f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x269fa0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x269fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269fa4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269fa8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269fac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x269facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x269fb0: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x269fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x269fb4: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x269fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x269fb8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x269fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x269fbc: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x269fbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x269fc0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x269fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x269fc4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x269fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x269fc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269fcc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x269fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269fd0: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x269fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x269fd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x269fd8: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x269fd8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x269fdc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x269fdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x269fe0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x269fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x269fe4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x269fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x269fe8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x269fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x269fec: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x269fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x269ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269ff4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x269ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x269ff8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x269ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x269ffc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x269ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26a000: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x26a000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26a004: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x26a004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26a008: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x26a008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26a00c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x26a00cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26a010: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x26a010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26a014: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26a014u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a018: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26a018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a01c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A01Cu;
        // 0x26a020: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A024u;
    // 0x26a024: 0x0  nop
    ctx->pc = 0x26a024u;
    // NOP
    ctx->pc = 0x26a028u;
}
