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

// Function: sub_00253500
// Address: 0x253500 - 0x253a30
void sub_00253500_0x253500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253500_0x253500");
#endif

    switch (ctx->pc) {
        case 0x253550u: goto label_253550;
        case 0x253584u: goto label_253584;
        case 0x25359cu: goto label_25359c;
        case 0x2535b8u: goto label_2535b8;
        case 0x2535e0u: goto label_2535e0;
        case 0x2535f0u: goto label_2535f0;
        case 0x253668u: goto label_253668;
        case 0x2536b8u: goto label_2536b8;
        case 0x2536d8u: goto label_2536d8;
        case 0x2536e4u: goto label_2536e4;
        case 0x2536fcu: goto label_2536fc;
        case 0x253720u: goto label_253720;
        case 0x253740u: goto label_253740;
        case 0x25374cu: goto label_25374c;
        case 0x253764u: goto label_253764;
        case 0x25378cu: goto label_25378c;
        case 0x2537acu: goto label_2537ac;
        case 0x2537b8u: goto label_2537b8;
        case 0x2537d4u: goto label_2537d4;
        case 0x253800u: goto label_253800;
        case 0x25380cu: goto label_25380c;
        case 0x253830u: goto label_253830;
        case 0x25383cu: goto label_25383c;
        case 0x253854u: goto label_253854;
        case 0x25388cu: goto label_25388c;
        case 0x2538acu: goto label_2538ac;
        case 0x2538b8u: goto label_2538b8;
        case 0x2538d4u: goto label_2538d4;
        case 0x253900u: goto label_253900;
        case 0x253984u: goto label_253984;
        case 0x2539a4u: goto label_2539a4;
        case 0x2539c4u: goto label_2539c4;
        case 0x2539e4u: goto label_2539e4;
        case 0x2539f4u: goto label_2539f4;
        default: break;
    }

    ctx->pc = 0x253500u;

    // 0x253500: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x253500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x253504: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x253504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x253508: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x253508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x25350c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25350cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253510: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x253510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x253514: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x253514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253518: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x253518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25351c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x25351cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253520: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x253520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x253524: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x253524u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253528: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x253528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x25352c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25352cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253530: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x253530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x253534: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x253534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x253538: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25353c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x25353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x253540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253544: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x253544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x253548: 0xc09270a  jal         func_249C28
    ctx->pc = 0x253548u;
    SET_GPR_U32(ctx, 31, 0x253550u);
    ctx->pc = 0x25354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253548u;
    // 0x25354c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x253548u, 0x253550u)) {
        return;
    }
    ctx->pc = 0x253550u;
label_253550:
    // 0x253550: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x253550u;
    {
        const bool branch_taken_0x253550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253550u;
        // 0x253554: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253550) {
            ctx->pc = 0x2535F0u;
            goto label_2535f0;
        }
    }
    ctx->pc = 0x253558u;
    // 0x253558: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x253558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x25355c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x25355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x253560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x253560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253564: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x253564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x253568: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x253568u;
    {
        const bool branch_taken_0x253568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253568u;
        // 0x25356c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253568) {
            ctx->pc = 0x253590u;
            goto label_253590;
        }
    }
    ctx->pc = 0x253570u;
    // 0x253570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253574: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253578: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x253578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x25357c: 0xc092848  jal         func_24A120
    ctx->pc = 0x25357Cu;
    SET_GPR_U32(ctx, 31, 0x253584u);
    ctx->pc = 0x253580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25357Cu;
    // 0x253580: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25357Cu, 0x253584u)) {
        return;
    }
    ctx->pc = 0x253584u;
label_253584:
    // 0x253584: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x253584u;
    {
        const bool branch_taken_0x253584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253584u;
        // 0x253588: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253584) {
            ctx->pc = 0x2535E8u;
            goto label_2535e8;
        }
    }
    ctx->pc = 0x25358Cu;
    // 0x25358c: 0x0  nop
    ctx->pc = 0x25358cu;
    // NOP
label_253590:
    // 0x253590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x253590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253594: 0xc093546  jal         func_24D518
    ctx->pc = 0x253594u;
    SET_GPR_U32(ctx, 31, 0x25359Cu);
    ctx->pc = 0x253598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253594u;
    // 0x253598: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x253594u, 0x25359Cu)) {
        return;
    }
    ctx->pc = 0x25359Cu;
label_25359c:
    // 0x25359c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x25359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2535a0: 0x14430117  bne         $v0, $v1, . + 4 + (0x117 << 2)
    ctx->pc = 0x2535A0u;
    {
        const bool branch_taken_0x2535a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2535A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535A0u;
        // 0x2535a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535a0) {
            ctx->pc = 0x253A00u;
            goto label_253a00;
        }
    }
    ctx->pc = 0x2535A8u;
    // 0x2535a8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2535a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2535ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2535acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535b0: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x2535B0u;
    SET_GPR_U32(ctx, 31, 0x2535B8u);
    ctx->pc = 0x2535B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535B0u;
    // 0x2535b4: 0x8c451280  lw          $a1, 0x1280($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x2535B0u, 0x2535B8u)) {
        return;
    }
    ctx->pc = 0x2535B8u;
label_2535b8:
    // 0x2535b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2535b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535bc: 0x5640000e  bnel        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2535BCu;
    {
        const bool branch_taken_0x2535bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2535bc) {
            ctx->pc = 0x2535C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2535BCu;
            // 0x2535c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2535F8u;
            goto label_2535f8;
        }
    }
    ctx->pc = 0x2535C4u;
    // 0x2535c4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2535c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2535c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2535c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2535cc: 0x8c451280  lw          $a1, 0x1280($v0)
    ctx->pc = 0x2535ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5C1280u));
    // 0x2535d0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x2535d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    // 0x2535d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2535d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2535d8: 0xc092848  jal         func_24A120
    ctx->pc = 0x2535D8u;
    SET_GPR_U32(ctx, 31, 0x2535E0u);
    ctx->pc = 0x2535DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535D8u;
    // 0x2535dc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2535D8u, 0x2535E0u)) {
        return;
    }
    ctx->pc = 0x2535E0u;
label_2535e0:
    // 0x2535e0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2535e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2535e4: 0x0  nop
    ctx->pc = 0x2535e4u;
    // NOP
label_2535e8:
    // 0x2535e8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2535E8u;
    SET_GPR_U32(ctx, 31, 0x2535F0u);
    ctx->pc = 0x2535ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535E8u;
    // 0x2535ec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2535E8u, 0x2535F0u)) {
        return;
    }
    ctx->pc = 0x2535F0u;
label_2535f0:
    // 0x2535f0: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2535F0u;
    {
        const bool branch_taken_0x2535f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2535F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535F0u;
        // 0x2535f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535f0) {
            ctx->pc = 0x253A00u;
            goto label_253a00;
        }
    }
    ctx->pc = 0x2535F8u;
label_2535f8:
    // 0x2535f8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2535f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2535fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2535fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x253600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x253600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253604: 0x6ba30013  ldl         $v1, 0x13($sp)
    ctx->pc = 0x253604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x253608: 0x6fa3000c  ldr         $v1, 0xC($sp)
    ctx->pc = 0x253608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25360c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x25360cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x253610: 0xb2430073  sdl         $v1, 0x73($s2)
    ctx->pc = 0x253610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x253614: 0xb643006c  sdr         $v1, 0x6C($s2)
    ctx->pc = 0x253614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x253618: 0xae450074  sw          $a1, 0x74($s2)
    ctx->pc = 0x253618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
    // 0x25361c: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x25361cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x253620: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x253620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x253624: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x253624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253628: 0xb2420067  sdl         $v0, 0x67($s2)
    ctx->pc = 0x253628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25362c: 0xb6420060  sdr         $v0, 0x60($s2)
    ctx->pc = 0x25362cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x253630: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x253630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x253634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253638: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x253638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25363c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x25363cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253640: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x253640u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x253644: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x253644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x253648: 0xa6430084  sh          $v1, 0x84($s2)
    ctx->pc = 0x253648u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x25364c: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x25364cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253650: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x253650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x253654: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x253654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x253658: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x253658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x25365c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x25365cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x253660: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x253660u;
    SET_GPR_U32(ctx, 31, 0x253668u);
    ctx->pc = 0x253664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253660u;
    // 0x253664: 0xa6420082  sh          $v0, 0x82($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 130), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x253660u, 0x253668u)) {
        return;
    }
    ctx->pc = 0x253668u;
label_253668:
    // 0x253668: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x253668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x25366c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x25366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x253670: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x253670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x253674: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x253674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x253678: 0xae440044  sw          $a0, 0x44($s2)
    ctx->pc = 0x253678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 4));
    // 0x25367c: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x25367cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x253680: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x253680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x253684: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x253684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x253688: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x253688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x25368c: 0xae440040  sw          $a0, 0x40($s2)
    ctx->pc = 0x25368cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 4));
    // 0x253690: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x253690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x253694: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x253694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x253698: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x253698u;
    {
        const bool branch_taken_0x253698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253698u;
        // 0x25369c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253698) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x2536A0u;
    // 0x2536a0: 0x10a00073  beqz        $a1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2536A0u;
    {
        const bool branch_taken_0x2536a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536A0u;
        // 0x2536a4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536a0) {
            ctx->pc = 0x253870u;
            goto label_253870;
        }
    }
    ctx->pc = 0x2536A8u;
    // 0x2536a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2536a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536ac: 0xa28018  mult        $s0, $a1, $v0
    ctx->pc = 0x2536acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2536b0: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x2536B0u;
    SET_GPR_U32(ctx, 31, 0x2536B8u);
    ctx->pc = 0x2536B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536B0u;
    // 0x2536b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x2536B0u, 0x2536B8u)) {
        return;
    }
    ctx->pc = 0x2536B8u;
label_2536b8:
    // 0x2536b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2536B8u;
    {
        const bool branch_taken_0x2536b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2536BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536B8u;
        // 0x2536bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536b8) {
            ctx->pc = 0x2536E8u;
            goto label_2536e8;
        }
    }
    ctx->pc = 0x2536C0u;
    // 0x2536c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2536c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2536c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2536c8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2536c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2536cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2536ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536d0: 0xc092848  jal         func_24A120
    ctx->pc = 0x2536D0u;
    SET_GPR_U32(ctx, 31, 0x2536D8u);
    ctx->pc = 0x2536D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536D0u;
    // 0x2536d4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2536D0u, 0x2536D8u)) {
        return;
    }
    ctx->pc = 0x2536D8u;
label_2536d8:
    // 0x2536d8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2536d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2536dc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2536DCu;
    SET_GPR_U32(ctx, 31, 0x2536E4u);
    ctx->pc = 0x2536E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536DCu;
    // 0x2536e0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2536DCu, 0x2536E4u)) {
        return;
    }
    ctx->pc = 0x2536E4u;
label_2536e4:
    // 0x2536e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2536e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2536e8:
    // 0x2536e8: 0x128000b8  beqz        $s4, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2536E8u;
    {
        const bool branch_taken_0x2536e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536E8u;
        // 0x2536ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536e8) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x2536F0u;
    // 0x2536f0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2536f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2536f4: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x2536F4u;
    SET_GPR_U32(ctx, 31, 0x2536FCu);
    ctx->pc = 0x2536F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536F4u;
    // 0x2536f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x2536F4u, 0x2536FCu)) {
        return;
    }
    ctx->pc = 0x2536FCu;
label_2536fc:
    // 0x2536fc: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x2536fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
    // 0x253700: 0x128000b2  beqz        $s4, . + 4 + (0xB2 << 2)
    ctx->pc = 0x253700u;
    {
        const bool branch_taken_0x253700 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253700u;
        // 0x253704: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253700) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253708u;
    // 0x253708: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x253708u;
    {
        const bool branch_taken_0x253708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253708u;
        // 0x25370c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253708) {
            ctx->pc = 0x25376Cu;
            goto label_25376c;
        }
    }
    ctx->pc = 0x253710u;
    // 0x253710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x253710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253714: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x253714u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x253718: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x253718u;
    SET_GPR_U32(ctx, 31, 0x253720u);
    ctx->pc = 0x25371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253718u;
    // 0x25371c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x253718u, 0x253720u)) {
        return;
    }
    ctx->pc = 0x253720u;
label_253720:
    // 0x253720: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x253720u;
    {
        const bool branch_taken_0x253720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253720u;
        // 0x253724: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253720) {
            ctx->pc = 0x253750u;
            goto label_253750;
        }
    }
    ctx->pc = 0x253728u;
    // 0x253728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25372c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25372cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253730: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x253730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x253734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x253734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253738: 0xc092848  jal         func_24A120
    ctx->pc = 0x253738u;
    SET_GPR_U32(ctx, 31, 0x253740u);
    ctx->pc = 0x25373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253738u;
    // 0x25373c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253738u, 0x253740u)) {
        return;
    }
    ctx->pc = 0x253740u;
label_253740:
    // 0x253740: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x253740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x253744: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253744u;
    SET_GPR_U32(ctx, 31, 0x25374Cu);
    ctx->pc = 0x253748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253744u;
    // 0x253748: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253744u, 0x25374Cu)) {
        return;
    }
    ctx->pc = 0x25374Cu;
label_25374c:
    // 0x25374c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25374cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253750:
    // 0x253750: 0x1280009e  beqz        $s4, . + 4 + (0x9E << 2)
    ctx->pc = 0x253750u;
    {
        const bool branch_taken_0x253750 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253750u;
        // 0x253754: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253750) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253758u;
    // 0x253758: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x253758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25375c: 0xc093546  jal         func_24D518
    ctx->pc = 0x25375Cu;
    SET_GPR_U32(ctx, 31, 0x253764u);
    ctx->pc = 0x253760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25375Cu;
    // 0x253760: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25375Cu, 0x253764u)) {
        return;
    }
    ctx->pc = 0x253764u;
label_253764:
    // 0x253764: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x253764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x253768: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x253768u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_25376c:
    // 0x25376c: 0x12800097  beqz        $s4, . + 4 + (0x97 << 2)
    ctx->pc = 0x25376Cu;
    {
        const bool branch_taken_0x25376c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25376Cu;
        // 0x253770: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25376c) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253774u;
    // 0x253774: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x253774u;
    {
        const bool branch_taken_0x253774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253774u;
        // 0x253778: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253774) {
            ctx->pc = 0x2537D8u;
            goto label_2537d8;
        }
    }
    ctx->pc = 0x25377Cu;
    // 0x25377c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253780: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x253780u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x253784: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x253784u;
    SET_GPR_U32(ctx, 31, 0x25378Cu);
    ctx->pc = 0x253788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253784u;
    // 0x253788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x253784u, 0x25378Cu)) {
        return;
    }
    ctx->pc = 0x25378Cu;
label_25378c:
    // 0x25378c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25378Cu;
    {
        const bool branch_taken_0x25378c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25378Cu;
        // 0x253790: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25378c) {
            ctx->pc = 0x2537C0u;
            goto label_2537c0;
        }
    }
    ctx->pc = 0x253794u;
    // 0x253794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253798: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x25379c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2537a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2537a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537a4: 0xc092848  jal         func_24A120
    ctx->pc = 0x2537A4u;
    SET_GPR_U32(ctx, 31, 0x2537ACu);
    ctx->pc = 0x2537A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537A4u;
    // 0x2537a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2537A4u, 0x2537ACu)) {
        return;
    }
    ctx->pc = 0x2537ACu;
label_2537ac:
    // 0x2537ac: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2537acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2537b0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2537B0u;
    SET_GPR_U32(ctx, 31, 0x2537B8u);
    ctx->pc = 0x2537B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537B0u;
    // 0x2537b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2537B0u, 0x2537B8u)) {
        return;
    }
    ctx->pc = 0x2537B8u;
label_2537b8:
    // 0x2537b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2537b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537bc: 0x0  nop
    ctx->pc = 0x2537bcu;
    // NOP
label_2537c0:
    // 0x2537c0: 0x12800082  beqz        $s4, . + 4 + (0x82 << 2)
    ctx->pc = 0x2537C0u;
    {
        const bool branch_taken_0x2537c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2537C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C0u;
        // 0x2537c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537c0) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x2537C8u;
    // 0x2537c8: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x2537c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2537cc: 0xc093546  jal         func_24D518
    ctx->pc = 0x2537CCu;
    SET_GPR_U32(ctx, 31, 0x2537D4u);
    ctx->pc = 0x2537D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537CCu;
    // 0x2537d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2537CCu, 0x2537D4u)) {
        return;
    }
    ctx->pc = 0x2537D4u;
label_2537d4:
    // 0x2537d4: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x2537d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_2537d8:
    // 0x2537d8: 0x5280007d  beql        $s4, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x2537D8u;
    {
        const bool branch_taken_0x2537d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537d8) {
            ctx->pc = 0x2537DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2537D8u;
            // 0x2537dc: 0x93c20003  lbu         $v0, 0x3($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2539D0u;
            goto label_2539d0;
        }
    }
    ctx->pc = 0x2537E0u;
    // 0x2537e0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x2537e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2537e4: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2537E4u;
    {
        const bool branch_taken_0x2537e4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2537e4) {
            ctx->pc = 0x253870u;
            goto label_253870;
        }
    }
    ctx->pc = 0x2537ECu;
    // 0x2537ec: 0x96420082  lhu         $v0, 0x82($s2)
    ctx->pc = 0x2537ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x2537f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2537f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537f4: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2537F4u;
    {
        const bool branch_taken_0x2537f4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2537F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537F4u;
        // 0x2537f8: 0x288c0  sll         $s1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2537f4) {
            ctx->pc = 0x253870u;
            goto label_253870;
        }
    }
    ctx->pc = 0x2537FCu;
    // 0x2537fc: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2537fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_253800:
    // 0x253800: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x253800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253804: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x253804u;
    SET_GPR_U32(ctx, 31, 0x25380Cu);
    ctx->pc = 0x253808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253804u;
    // 0x253808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x253804u, 0x25380Cu)) {
        return;
    }
    ctx->pc = 0x25380Cu;
label_25380c:
    // 0x25380c: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x25380Cu;
    {
        const bool branch_taken_0x25380c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25380Cu;
        // 0x253810: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25380c) {
            ctx->pc = 0x25385Cu;
            goto label_25385c;
        }
    }
    ctx->pc = 0x253814u;
    // 0x253814: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x253814u;
    {
        const bool branch_taken_0x253814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253814u;
        // 0x253818: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253814) {
            ctx->pc = 0x253848u;
            goto label_253848;
        }
    }
    ctx->pc = 0x25381Cu;
    // 0x25381c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25381cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x253820: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x253820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    // 0x253824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253828: 0xc092848  jal         func_24A120
    ctx->pc = 0x253828u;
    SET_GPR_U32(ctx, 31, 0x253830u);
    ctx->pc = 0x25382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253828u;
    // 0x25382c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x253828u, 0x253830u)) {
        return;
    }
    ctx->pc = 0x253830u;
label_253830:
    // 0x253830: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x253830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x253834: 0xc09281a  jal         func_24A068
    ctx->pc = 0x253834u;
    SET_GPR_U32(ctx, 31, 0x25383Cu);
    ctx->pc = 0x253838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253834u;
    // 0x253838: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x253834u, 0x25383Cu)) {
        return;
    }
    ctx->pc = 0x25383Cu;
label_25383c:
    // 0x25383c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25383Cu;
    {
        const bool branch_taken_0x25383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25383Cu;
        // 0x253840: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25383c) {
            ctx->pc = 0x253870u;
            goto label_253870;
        }
    }
    ctx->pc = 0x253844u;
    // 0x253844: 0x0  nop
    ctx->pc = 0x253844u;
    // NOP
label_253848:
    // 0x253848: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x253848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25384c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x25384Cu;
    SET_GPR_U32(ctx, 31, 0x253854u);
    ctx->pc = 0x253850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25384Cu;
    // 0x253850: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x25384Cu, 0x253854u)) {
        return;
    }
    ctx->pc = 0x253854u;
label_253854:
    // 0x253854: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x253854u;
    {
        const bool branch_taken_0x253854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253854) {
            ctx->pc = 0x253858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253854u;
            // 0x253858: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253870u;
            goto label_253870;
        }
    }
    ctx->pc = 0x25385Cu;
label_25385c:
    // 0x25385c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x25385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x253860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x253860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x253864: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x253864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253868: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x253868u;
    {
        const bool branch_taken_0x253868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253868u;
        // 0x25386c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253868) {
            ctx->pc = 0x253800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253800;
        }
    }
    ctx->pc = 0x253870u;
label_253870:
    // 0x253870: 0x12800056  beqz        $s4, . + 4 + (0x56 << 2)
    ctx->pc = 0x253870u;
    {
        const bool branch_taken_0x253870 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253870u;
        // 0x253874: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253870) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253878u;
    // 0x253878: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x253878u;
    {
        const bool branch_taken_0x253878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253878u;
        // 0x25387c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253878) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x253880u;
    // 0x253880: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x253880u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x253884: 0xc094d3c  jal         func_2534F0
    ctx->pc = 0x253884u;
    SET_GPR_U32(ctx, 31, 0x25388Cu);
    ctx->pc = 0x253888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253884u;
    // 0x253888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2534F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2534F0u, 0x253884u, 0x25388Cu)) {
        return;
    }
    ctx->pc = 0x25388Cu;
label_25388c:
    // 0x25388c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25388Cu;
    {
        const bool branch_taken_0x25388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25388Cu;
        // 0x253890: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25388c) {
            ctx->pc = 0x2538C0u;
            goto label_2538c0;
        }
    }
    ctx->pc = 0x253894u;
    // 0x253894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253898: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x253898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x25389c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x25389cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2538a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2538a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538a4: 0xc092848  jal         func_24A120
    ctx->pc = 0x2538A4u;
    SET_GPR_U32(ctx, 31, 0x2538ACu);
    ctx->pc = 0x2538A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538A4u;
    // 0x2538a8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2538A4u, 0x2538ACu)) {
        return;
    }
    ctx->pc = 0x2538ACu;
label_2538ac:
    // 0x2538ac: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2538acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2538b0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2538B0u;
    SET_GPR_U32(ctx, 31, 0x2538B8u);
    ctx->pc = 0x2538B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538B0u;
    // 0x2538b4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2538B0u, 0x2538B8u)) {
        return;
    }
    ctx->pc = 0x2538B8u;
label_2538b8:
    // 0x2538b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2538b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538bc: 0x0  nop
    ctx->pc = 0x2538bcu;
    // NOP
label_2538c0:
    // 0x2538c0: 0x12800042  beqz        $s4, . + 4 + (0x42 << 2)
    ctx->pc = 0x2538C0u;
    {
        const bool branch_taken_0x2538c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C0u;
        // 0x2538c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538c0) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x2538C8u;
    // 0x2538c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2538c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2538cc: 0xc092796  jal         func_249E58
    ctx->pc = 0x2538CCu;
    SET_GPR_U32(ctx, 31, 0x2538D4u);
    ctx->pc = 0x2538D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538CCu;
    // 0x2538d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x2538CCu, 0x2538D4u)) {
        return;
    }
    ctx->pc = 0x2538D4u;
label_2538d4:
    // 0x2538d4: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x2538d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
    // 0x2538d8: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x2538D8u;
    {
        const bool branch_taken_0x2538d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538D8u;
        // 0x2538dc: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538d8) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x2538E0u;
    // 0x2538e0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2538e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2538e4: 0x34426001  ori         $v0, $v0, 0x6001
    ctx->pc = 0x2538e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24577);
    // 0x2538e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2538e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2538ec: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2538ECu;
    {
        const bool branch_taken_0x2538ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2538F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538ECu;
        // 0x2538f0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538ec) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x2538F4u;
    // 0x2538f4: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2538F4u;
    {
        const bool branch_taken_0x2538f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2538F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538F4u;
        // 0x2538f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538f4) {
            ctx->pc = 0x25396Cu;
            goto label_25396c;
        }
    }
    ctx->pc = 0x2538FCu;
    // 0x2538fc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2538fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_253900:
    // 0x253900: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x253900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x253904: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x253904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x253908: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x253908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25390c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x25390cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x253910: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x253910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x253914: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x253914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x253918: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x253918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25391c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x253920: 0x97a40052  lhu         $a0, 0x52($sp)
    ctx->pc = 0x253920u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
    // 0x253924: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x253924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x253928: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x253928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x25392c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x25392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x253930: 0x97a40054  lhu         $a0, 0x54($sp)
    ctx->pc = 0x253930u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x253934: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x253934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x253938: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x253938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x25393c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x253940: 0x97a30056  lhu         $v1, 0x56($sp)
    ctx->pc = 0x253940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 86)));
    // 0x253944: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x253944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x253948: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x253948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x25394c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x25394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x253950: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x253950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253954: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x253954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x253958: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x253958u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x25395c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x25395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x253960: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x253960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253964: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x253964u;
    {
        const bool branch_taken_0x253964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253964) {
            ctx->pc = 0x253968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253964u;
            // 0x253968: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253900;
        }
    }
    ctx->pc = 0x25396Cu;
label_25396c:
    // 0x25396c: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x25396Cu;
    {
        const bool branch_taken_0x25396c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25396Cu;
        // 0x253970: 0x3c07005c  lui         $a3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25396c) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x253974u;
    // 0x253974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x253974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253978: 0x24f01280  addiu       $s0, $a3, 0x1280
    ctx->pc = 0x253978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4736));
    // 0x25397c: 0xc093958  jal         func_24E560
    ctx->pc = 0x25397Cu;
    SET_GPR_U32(ctx, 31, 0x253984u);
    ctx->pc = 0x253980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25397Cu;
    // 0x253980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x25397Cu, 0x253984u)) {
        return;
    }
    ctx->pc = 0x253984u;
label_253984:
    // 0x253984: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x253984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253988: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x253988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25398c: 0xac203fa0  sw          $zero, 0x3FA0($at)
    ctx->pc = 0x25398cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FA0u, _value); } while (0);
    // 0x253990: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x253990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x253994: 0xac203fa4  sw          $zero, 0x3FA4($at)
    ctx->pc = 0x253994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FA4u, _value); } while (0);
    // 0x253998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25399c: 0xc093708  jal         func_24DC20
    ctx->pc = 0x25399Cu;
    SET_GPR_U32(ctx, 31, 0x2539A4u);
    ctx->pc = 0x2539A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25399Cu;
    // 0x2539a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x25399Cu, 0x2539A4u)) {
        return;
    }
    ctx->pc = 0x2539A4u;
label_2539a4:
    // 0x2539a4: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x2539a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
    // 0x2539a8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2539A8u;
    {
        const bool branch_taken_0x2539a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539A8u;
        // 0x2539ac: 0x8f858f30  lw          $a1, -0x70D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539a8) {
            ctx->pc = 0x2539CCu;
            goto label_2539cc;
        }
    }
    ctx->pc = 0x2539B0u;
    // 0x2539b0: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2539B0u;
    {
        const bool branch_taken_0x2539b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539B0u;
        // 0x2539b4: 0x8f878f34  lw          $a3, -0x70CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539b0) {
            ctx->pc = 0x2539FCu;
            goto label_2539fc;
        }
    }
    ctx->pc = 0x2539B8u;
    // 0x2539b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2539b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539bc: 0xc09376c  jal         func_24DDB0
    ctx->pc = 0x2539BCu;
    SET_GPR_U32(ctx, 31, 0x2539C4u);
    ctx->pc = 0x2539C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539BCu;
    // 0x2539c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DDB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DDB0u, 0x2539BCu, 0x2539C4u)) {
        return;
    }
    ctx->pc = 0x2539C4u;
label_2539c4:
    // 0x2539c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2539C4u;
    {
        const bool branch_taken_0x2539c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539C4u;
        // 0x2539c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539c4) {
            ctx->pc = 0x253A00u;
            goto label_253a00;
        }
    }
    ctx->pc = 0x2539CCu;
label_2539cc:
    // 0x2539cc: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x2539ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
label_2539d0:
    // 0x2539d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2539d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2539d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2539D4u;
    {
        const bool branch_taken_0x2539d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2539d4) {
            ctx->pc = 0x2539ECu;
            goto label_2539ec;
        }
    }
    ctx->pc = 0x2539DCu;
    // 0x2539dc: 0xc096f10  jal         func_25BC40
    ctx->pc = 0x2539DCu;
    SET_GPR_U32(ctx, 31, 0x2539E4u);
    ctx->pc = 0x2539E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539DCu;
    // 0x2539e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25BC40u, 0x2539DCu, 0x2539E4u)) {
        return;
    }
    ctx->pc = 0x2539E4u;
label_2539e4:
    // 0x2539e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2539E4u;
    {
        const bool branch_taken_0x2539e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539E4u;
        // 0x2539e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539e4) {
            ctx->pc = 0x253A00u;
            goto label_253a00;
        }
    }
    ctx->pc = 0x2539ECu;
label_2539ec:
    // 0x2539ec: 0xc096f54  jal         func_25BD50
    ctx->pc = 0x2539ECu;
    SET_GPR_U32(ctx, 31, 0x2539F4u);
    ctx->pc = 0x2539F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539ECu;
    // 0x2539f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BD50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25BD50u, 0x2539ECu, 0x2539F4u)) {
        return;
    }
    ctx->pc = 0x2539F4u;
label_2539f4:
    // 0x2539f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2539F4u;
    {
        const bool branch_taken_0x2539f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539F4u;
        // 0x2539f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539f4) {
            ctx->pc = 0x253A00u;
            goto label_253a00;
        }
    }
    ctx->pc = 0x2539FCu;
label_2539fc:
    // 0x2539fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2539fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_253a00:
    // 0x253a00: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x253a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x253a04: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x253a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x253a08: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x253a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x253a0c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x253a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x253a10: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x253a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x253a14: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x253a14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x253a18: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x253a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x253a1c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x253a1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253a20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x253a20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253a24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x253a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253a28: 0x3e00008  jr          $ra
    ctx->pc = 0x253A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253A28u;
        // 0x253a2c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253A30u;
}
