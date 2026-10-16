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

// Function: sub_001C8460
// Address: 0x1c8460 - 0x1c85a0
void sub_001C8460_0x1c8460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8460_0x1c8460");
#endif

    switch (ctx->pc) {
        case 0x1c8460u: goto label_1c8460;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c8468u: goto label_1c8468;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c8470u: goto label_1c8470;
        case 0x1c8474u: goto label_1c8474;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c847cu: goto label_1c847c;
        case 0x1c8480u: goto label_1c8480;
        case 0x1c8484u: goto label_1c8484;
        case 0x1c8488u: goto label_1c8488;
        case 0x1c848cu: goto label_1c848c;
        case 0x1c8490u: goto label_1c8490;
        case 0x1c8494u: goto label_1c8494;
        case 0x1c8498u: goto label_1c8498;
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84a0u: goto label_1c84a0;
        case 0x1c84a4u: goto label_1c84a4;
        case 0x1c84a8u: goto label_1c84a8;
        case 0x1c84acu: goto label_1c84ac;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84b4u: goto label_1c84b4;
        case 0x1c84b8u: goto label_1c84b8;
        case 0x1c84bcu: goto label_1c84bc;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84c4u: goto label_1c84c4;
        case 0x1c84c8u: goto label_1c84c8;
        case 0x1c84ccu: goto label_1c84cc;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84d4u: goto label_1c84d4;
        case 0x1c84d8u: goto label_1c84d8;
        case 0x1c84dcu: goto label_1c84dc;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84e4u: goto label_1c84e4;
        case 0x1c84e8u: goto label_1c84e8;
        case 0x1c84ecu: goto label_1c84ec;
        case 0x1c84f0u: goto label_1c84f0;
        case 0x1c84f4u: goto label_1c84f4;
        case 0x1c84f8u: goto label_1c84f8;
        case 0x1c84fcu: goto label_1c84fc;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c8504u: goto label_1c8504;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c850cu: goto label_1c850c;
        case 0x1c8510u: goto label_1c8510;
        case 0x1c8514u: goto label_1c8514;
        case 0x1c8518u: goto label_1c8518;
        case 0x1c851cu: goto label_1c851c;
        case 0x1c8520u: goto label_1c8520;
        case 0x1c8524u: goto label_1c8524;
        case 0x1c8528u: goto label_1c8528;
        case 0x1c852cu: goto label_1c852c;
        case 0x1c8530u: goto label_1c8530;
        case 0x1c8534u: goto label_1c8534;
        case 0x1c8538u: goto label_1c8538;
        case 0x1c853cu: goto label_1c853c;
        case 0x1c8540u: goto label_1c8540;
        case 0x1c8544u: goto label_1c8544;
        case 0x1c8548u: goto label_1c8548;
        case 0x1c854cu: goto label_1c854c;
        case 0x1c8550u: goto label_1c8550;
        case 0x1c8554u: goto label_1c8554;
        case 0x1c8558u: goto label_1c8558;
        case 0x1c855cu: goto label_1c855c;
        case 0x1c8560u: goto label_1c8560;
        case 0x1c8564u: goto label_1c8564;
        case 0x1c8568u: goto label_1c8568;
        case 0x1c856cu: goto label_1c856c;
        case 0x1c8570u: goto label_1c8570;
        case 0x1c8574u: goto label_1c8574;
        case 0x1c8578u: goto label_1c8578;
        case 0x1c857cu: goto label_1c857c;
        case 0x1c8580u: goto label_1c8580;
        case 0x1c8584u: goto label_1c8584;
        case 0x1c8588u: goto label_1c8588;
        case 0x1c858cu: goto label_1c858c;
        case 0x1c8590u: goto label_1c8590;
        case 0x1c8594u: goto label_1c8594;
        case 0x1c8598u: goto label_1c8598;
        case 0x1c859cu: goto label_1c859c;
        default: break;
    }

    ctx->pc = 0x1c8460u;

label_1c8460:
    // 0x1c8460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c8460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c8464:
    // 0x1c8464: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c8464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c8468:
    // 0x1c8468: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c8468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c846c:
    // 0x1c846c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8470:
    // 0x1c8470: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c8470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c8474:
    // 0x1c8474: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c8478:
    // 0x1c8478: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c8478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c847c:
    // 0x1c847c: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c8480:
    // 0x1c8480: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1c8484:
    if (ctx->pc == 0x1C8484u) {
        ctx->pc = 0x1C8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8480u;
        // 0x1c8484: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8488u;
        goto label_1c8488;
    }
    ctx->pc = 0x1C8480u;
    {
        const bool branch_taken_0x1c8480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8480u;
        // 0x1c8484: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8480) {
            ctx->pc = 0x1C8570u;
            goto label_1c8570;
        }
    }
    ctx->pc = 0x1C8488u;
label_1c8488:
    // 0x1c8488: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1c8488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c848c:
    // 0x1c848c: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_1c8490:
    if (ctx->pc == 0x1C8490u) {
        ctx->pc = 0x1C8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C848Cu;
        // 0x1c8490: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8494u;
        goto label_1c8494;
    }
    ctx->pc = 0x1C848Cu;
    {
        const bool branch_taken_0x1c848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c848c) {
            ctx->pc = 0x1C8490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C848Cu;
            // 0x1c8490: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8574u;
            goto label_1c8574;
        }
    }
    ctx->pc = 0x1C8494u;
label_1c8494:
    // 0x1c8494: 0xc06ba6c  jal         func_1AE9B0
label_1c8498:
    if (ctx->pc == 0x1C8498u) {
        ctx->pc = 0x1C849Cu;
        goto label_1c849c;
    }
    ctx->pc = 0x1C8494u;
    SET_GPR_U32(ctx, 31, 0x1C849Cu);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C8494u, 0x1C849Cu)) {
        return;
    }
    ctx->pc = 0x1C849Cu;
label_1c849c:
    // 0x1c849c: 0x56200035  bnel        $s1, $zero, . + 4 + (0x35 << 2)
label_1c84a0:
    if (ctx->pc == 0x1C84A0u) {
        ctx->pc = 0x1C84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C849Cu;
        // 0x1c84a0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84A4u;
        goto label_1c84a4;
    }
    ctx->pc = 0x1C849Cu;
    {
        const bool branch_taken_0x1c849c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c849c) {
            ctx->pc = 0x1C84A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C849Cu;
            // 0x1c84a0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8574u;
            goto label_1c8574;
        }
    }
    ctx->pc = 0x1C84A4u;
label_1c84a4:
    // 0x1c84a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c84a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c84a8:
    // 0x1c84a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c84a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c84ac:
    // 0x1c84ac: 0xc0c493d  jal         func_3124F4
label_1c84b0:
    if (ctx->pc == 0x1C84B0u) {
        ctx->pc = 0x1C84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84ACu;
        // 0x1c84b0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84B4u;
        goto label_1c84b4;
    }
    ctx->pc = 0x1C84ACu;
    SET_GPR_U32(ctx, 31, 0x1C84B4u);
    ctx->pc = 0x1C84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84ACu;
    // 0x1c84b0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C84ACu, 0x1C84B4u)) {
        return;
    }
    ctx->pc = 0x1C84B4u;
label_1c84b4:
    // 0x1c84b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c84b8:
    // 0x1c84b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c84b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c84bc:
    // 0x1c84bc: 0xc0c493d  jal         func_3124F4
label_1c84c0:
    if (ctx->pc == 0x1C84C0u) {
        ctx->pc = 0x1C84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84BCu;
        // 0x1c84c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84C4u;
        goto label_1c84c4;
    }
    ctx->pc = 0x1C84BCu;
    SET_GPR_U32(ctx, 31, 0x1C84C4u);
    ctx->pc = 0x1C84C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84BCu;
    // 0x1c84c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C84BCu, 0x1C84C4u)) {
        return;
    }
    ctx->pc = 0x1C84C4u;
label_1c84c4:
    // 0x1c84c4: 0xc06c8ba  jal         func_1B22E8
label_1c84c8:
    if (ctx->pc == 0x1C84C8u) {
        ctx->pc = 0x1C84CCu;
        goto label_1c84cc;
    }
    ctx->pc = 0x1C84C4u;
    SET_GPR_U32(ctx, 31, 0x1C84CCu);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1C84C4u, 0x1C84CCu)) {
        return;
    }
    ctx->pc = 0x1C84CCu;
label_1c84cc:
    // 0x1c84cc: 0x3c0143d7  lui         $at, 0x43D7
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17367 << 16));
label_1c84d0:
    // 0x1c84d0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1c84d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_1c84d4:
    // 0x1c84d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c84d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c84d8:
    // 0x1c84d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c84dc:
    if (ctx->pc == 0x1C84DCu) {
        ctx->pc = 0x1C84E0u;
        goto label_1c84e0;
    }
    ctx->pc = 0x1C84D8u;
    {
        const bool branch_taken_0x1c84d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84d8) {
            ctx->pc = 0x1C84E8u;
            goto label_1c84e8;
        }
    }
    ctx->pc = 0x1C84E0u;
label_1c84e0:
    // 0x1c84e0: 0x3c0143c1  lui         $at, 0x43C1
    ctx->pc = 0x1c84e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17345 << 16));
label_1c84e4:
    // 0x1c84e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c84e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c84e8:
    // 0x1c84e8: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1c84e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
label_1c84ec:
    // 0x1c84ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c84ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c84f0:
    // 0x1c84f0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1c84f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c84f4:
    // 0x1c84f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c84f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c84f8:
    // 0x1c84f8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1c84f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1c84fc:
    // 0x1c84fc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1c84fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1c8500:
    // 0x1c8500: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1c8500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c8504:
    // 0x1c8504: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1c8504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c8508:
    // 0x1c8508: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x1c8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c850c:
    // 0x1c850c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8510:
    // 0x1c8510: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c8510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8514:
    // 0x1c8514: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1c8514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c8518:
    // 0x1c8518: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c8518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c851c:
    // 0x1c851c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c851cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c8520:
    // 0x1c8520: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c8520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8524:
    // 0x1c8524: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c8524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1c8528:
    // 0x1c8528: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c8528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c852c:
    // 0x1c852c: 0xc093ab4  jal         func_24EAD0
label_1c8530:
    if (ctx->pc == 0x1C8530u) {
        ctx->pc = 0x1C8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C852Cu;
        // 0x1c8530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8534u;
        goto label_1c8534;
    }
    ctx->pc = 0x1C852Cu;
    SET_GPR_U32(ctx, 31, 0x1C8534u);
    ctx->pc = 0x1C8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C852Cu;
    // 0x1c8530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1C852Cu, 0x1C8534u)) {
        return;
    }
    ctx->pc = 0x1C8534u;
label_1c8534:
    // 0x1c8534: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1c8534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1c8538:
    // 0x1c8538: 0xc44186b0  lwc1        $f1, -0x7950($v0)
    ctx->pc = 0x1c8538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c853c:
    // 0x1c853c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c853cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8540:
    // 0x1c8540: 0x0  nop
    ctx->pc = 0x1c8540u;
    // NOP
label_1c8544:
    // 0x1c8544: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1c8548:
    if (ctx->pc == 0x1C8548u) {
        ctx->pc = 0x1C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8544u;
        // 0x1c8548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C854Cu;
        goto label_1c854c;
    }
    ctx->pc = 0x1C8544u;
    {
        const bool branch_taken_0x1c8544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8544u;
        // 0x1c8548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8544) {
            ctx->pc = 0x1C8570u;
            goto label_1c8570;
        }
    }
    ctx->pc = 0x1C854Cu;
label_1c854c:
    // 0x1c854c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c854cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c8550:
    // 0x1c8550: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c8550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c8554:
    // 0x1c8554: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c8554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c8558:
    // 0x1c8558: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c855c:
    // 0x1c855c: 0x60f809  jalr        $v1
label_1c8560:
    if (ctx->pc == 0x1C8560u) {
        ctx->pc = 0x1C8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C855Cu;
        // 0x1c8560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8564u;
        goto label_1c8564;
    }
    ctx->pc = 0x1C855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8564u);
        ctx->pc = 0x1C8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C855Cu;
        // 0x1c8560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C855Cu, 0x1C8564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8564u;
label_1c8564:
    // 0x1c8564: 0xc072168  jal         func_1C85A0
label_1c8568:
    if (ctx->pc == 0x1C8568u) {
        ctx->pc = 0x1C8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8564u;
        // 0x1c8568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C856Cu;
        goto label_1c856c;
    }
    ctx->pc = 0x1C8564u;
    SET_GPR_U32(ctx, 31, 0x1C856Cu);
    ctx->pc = 0x1C8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8564u;
    // 0x1c8568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C85A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C85A0u, 0x1C8564u, 0x1C856Cu)) {
        return;
    }
    ctx->pc = 0x1C856Cu;
label_1c856c:
    // 0x1c856c: 0x0  nop
    ctx->pc = 0x1c856cu;
    // NOP
label_1c8570:
    // 0x1c8570: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c8574:
    // 0x1c8574: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c8578:
    if (ctx->pc == 0x1C8578u) {
        ctx->pc = 0x1C8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8574u;
        // 0x1c8578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C857Cu;
        goto label_1c857c;
    }
    ctx->pc = 0x1C8574u;
    {
        const bool branch_taken_0x1c8574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8574u;
        // 0x1c8578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8574) {
            ctx->pc = 0x1C8584u;
            goto label_1c8584;
        }
    }
    ctx->pc = 0x1C857Cu;
label_1c857c:
    // 0x1c857c: 0xc06dbc8  jal         func_1B6F20
label_1c8580:
    if (ctx->pc == 0x1C8580u) {
        ctx->pc = 0x1C8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C857Cu;
        // 0x1c8580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8584u;
        goto label_1c8584;
    }
    ctx->pc = 0x1C857Cu;
    SET_GPR_U32(ctx, 31, 0x1C8584u);
    ctx->pc = 0x1C8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C857Cu;
    // 0x1c8580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1C857Cu, 0x1C8584u)) {
        return;
    }
    ctx->pc = 0x1C8584u;
label_1c8584:
    // 0x1c8584: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c8584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c8588:
    // 0x1c8588: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c8588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c858c:
    // 0x1c858c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8590:
    // 0x1c8590: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c8594:
    // 0x1c8594: 0x3e00008  jr          $ra
label_1c8598:
    if (ctx->pc == 0x1C8598u) {
        ctx->pc = 0x1C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8594u;
        // 0x1c8598: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C859Cu;
        goto label_1c859c;
    }
    ctx->pc = 0x1C8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8594u;
        // 0x1c8598: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C859Cu;
label_1c859c:
    // 0x1c859c: 0x0  nop
    ctx->pc = 0x1c859cu;
    // NOP
    ctx->pc = 0x1c85a0u;
}
