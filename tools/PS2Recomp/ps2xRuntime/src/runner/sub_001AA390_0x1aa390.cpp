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

// Function: sub_001AA390
// Address: 0x1aa390 - 0x1aa4a0
void sub_001AA390_0x1aa390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA390_0x1aa390");
#endif

    switch (ctx->pc) {
        case 0x1aa390u: goto label_1aa390;
        case 0x1aa394u: goto label_1aa394;
        case 0x1aa398u: goto label_1aa398;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa3a0u: goto label_1aa3a0;
        case 0x1aa3a4u: goto label_1aa3a4;
        case 0x1aa3a8u: goto label_1aa3a8;
        case 0x1aa3acu: goto label_1aa3ac;
        case 0x1aa3b0u: goto label_1aa3b0;
        case 0x1aa3b4u: goto label_1aa3b4;
        case 0x1aa3b8u: goto label_1aa3b8;
        case 0x1aa3bcu: goto label_1aa3bc;
        case 0x1aa3c0u: goto label_1aa3c0;
        case 0x1aa3c4u: goto label_1aa3c4;
        case 0x1aa3c8u: goto label_1aa3c8;
        case 0x1aa3ccu: goto label_1aa3cc;
        case 0x1aa3d0u: goto label_1aa3d0;
        case 0x1aa3d4u: goto label_1aa3d4;
        case 0x1aa3d8u: goto label_1aa3d8;
        case 0x1aa3dcu: goto label_1aa3dc;
        case 0x1aa3e0u: goto label_1aa3e0;
        case 0x1aa3e4u: goto label_1aa3e4;
        case 0x1aa3e8u: goto label_1aa3e8;
        case 0x1aa3ecu: goto label_1aa3ec;
        case 0x1aa3f0u: goto label_1aa3f0;
        case 0x1aa3f4u: goto label_1aa3f4;
        case 0x1aa3f8u: goto label_1aa3f8;
        case 0x1aa3fcu: goto label_1aa3fc;
        case 0x1aa400u: goto label_1aa400;
        case 0x1aa404u: goto label_1aa404;
        case 0x1aa408u: goto label_1aa408;
        case 0x1aa40cu: goto label_1aa40c;
        case 0x1aa410u: goto label_1aa410;
        case 0x1aa414u: goto label_1aa414;
        case 0x1aa418u: goto label_1aa418;
        case 0x1aa41cu: goto label_1aa41c;
        case 0x1aa420u: goto label_1aa420;
        case 0x1aa424u: goto label_1aa424;
        case 0x1aa428u: goto label_1aa428;
        case 0x1aa42cu: goto label_1aa42c;
        case 0x1aa430u: goto label_1aa430;
        case 0x1aa434u: goto label_1aa434;
        case 0x1aa438u: goto label_1aa438;
        case 0x1aa43cu: goto label_1aa43c;
        case 0x1aa440u: goto label_1aa440;
        case 0x1aa444u: goto label_1aa444;
        case 0x1aa448u: goto label_1aa448;
        case 0x1aa44cu: goto label_1aa44c;
        case 0x1aa450u: goto label_1aa450;
        case 0x1aa454u: goto label_1aa454;
        case 0x1aa458u: goto label_1aa458;
        case 0x1aa45cu: goto label_1aa45c;
        case 0x1aa460u: goto label_1aa460;
        case 0x1aa464u: goto label_1aa464;
        case 0x1aa468u: goto label_1aa468;
        case 0x1aa46cu: goto label_1aa46c;
        case 0x1aa470u: goto label_1aa470;
        case 0x1aa474u: goto label_1aa474;
        case 0x1aa478u: goto label_1aa478;
        case 0x1aa47cu: goto label_1aa47c;
        case 0x1aa480u: goto label_1aa480;
        case 0x1aa484u: goto label_1aa484;
        case 0x1aa488u: goto label_1aa488;
        case 0x1aa48cu: goto label_1aa48c;
        case 0x1aa490u: goto label_1aa490;
        case 0x1aa494u: goto label_1aa494;
        case 0x1aa498u: goto label_1aa498;
        case 0x1aa49cu: goto label_1aa49c;
        default: break;
    }

    ctx->pc = 0x1aa390u;

label_1aa390:
    // 0x1aa390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aa390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1aa394:
    // 0x1aa394: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aa394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1aa398:
    // 0x1aa398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aa398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1aa39c:
    // 0x1aa39c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3a0:
    // 0x1aa3a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aa3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1aa3a4:
    // 0x1aa3a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3a8:
    // 0x1aa3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa3ac:
    // 0x1aa3ac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1aa3b0:
    if (ctx->pc == 0x1AA3B0u) {
        ctx->pc = 0x1AA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3ACu;
        // 0x1aa3b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3B4u;
        goto label_1aa3b4;
    }
    ctx->pc = 0x1AA3ACu;
    {
        const bool branch_taken_0x1aa3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3ACu;
        // 0x1aa3b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3ac) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA3B4u;
label_1aa3b4:
    // 0x1aa3b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa3b8:
    // 0x1aa3b8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_1aa3bc:
    if (ctx->pc == 0x1AA3BCu) {
        ctx->pc = 0x1AA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3B8u;
        // 0x1aa3bc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3C0u;
        goto label_1aa3c0;
    }
    ctx->pc = 0x1AA3B8u;
    {
        const bool branch_taken_0x1aa3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3B8u;
        // 0x1aa3bc: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3b8) {
            ctx->pc = 0x1AA400u;
            goto label_1aa400;
        }
    }
    ctx->pc = 0x1AA3C0u;
label_1aa3c0:
    // 0x1aa3c0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1aa3c4:
    if (ctx->pc == 0x1AA3C4u) {
        ctx->pc = 0x1AA3C8u;
        goto label_1aa3c8;
    }
    ctx->pc = 0x1AA3C0u;
    {
        const bool branch_taken_0x1aa3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa3c0) {
            ctx->pc = 0x1AA450u;
            goto label_1aa450;
        }
    }
    ctx->pc = 0x1AA3C8u;
label_1aa3c8:
    // 0x1aa3c8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1aa3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aa3cc:
    // 0x1aa3cc: 0xc0808f0  jal         func_2023C0
label_1aa3d0:
    if (ctx->pc == 0x1AA3D0u) {
        ctx->pc = 0x1AA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3CCu;
        // 0x1aa3d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3D4u;
        goto label_1aa3d4;
    }
    ctx->pc = 0x1AA3CCu;
    SET_GPR_U32(ctx, 31, 0x1AA3D4u);
    ctx->pc = 0x1AA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3CCu;
    // 0x1aa3d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1AA3CCu, 0x1AA3D4u)) {
        return;
    }
    ctx->pc = 0x1AA3D4u;
label_1aa3d4:
    // 0x1aa3d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1aa3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1aa3d8:
    // 0x1aa3d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3dc:
    // 0x1aa3dc: 0x2463b380  addiu       $v1, $v1, -0x4C80
    ctx->pc = 0x1aa3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947712));
label_1aa3e0:
    // 0x1aa3e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1aa3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1aa3e4:
    // 0x1aa3e4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1aa3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_1aa3e8:
    // 0x1aa3e8: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1aa3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_1aa3ec:
    // 0x1aa3ec: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1aa3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1aa3f0:
    // 0x1aa3f0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1aa3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1aa3f4:
    // 0x1aa3f4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1aa3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_1aa3f8:
    // 0x1aa3f8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1aa3fc:
    if (ctx->pc == 0x1AA3FCu) {
        ctx->pc = 0x1AA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3F8u;
        // 0x1aa3fc: 0xa440001c  sh          $zero, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA400u;
        goto label_1aa400;
    }
    ctx->pc = 0x1AA3F8u;
    {
        const bool branch_taken_0x1aa3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3F8u;
        // 0x1aa3fc: 0xa440001c  sh          $zero, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3f8) {
            ctx->pc = 0x1AA450u;
            goto label_1aa450;
        }
    }
    ctx->pc = 0x1AA400u;
label_1aa400:
    // 0x1aa400: 0xc0808f0  jal         func_2023C0
label_1aa404:
    if (ctx->pc == 0x1AA404u) {
        ctx->pc = 0x1AA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA400u;
        // 0x1aa404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA408u;
        goto label_1aa408;
    }
    ctx->pc = 0x1AA400u;
    SET_GPR_U32(ctx, 31, 0x1AA408u);
    ctx->pc = 0x1AA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA400u;
    // 0x1aa404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1AA400u, 0x1AA408u)) {
        return;
    }
    ctx->pc = 0x1AA408u;
label_1aa408:
    // 0x1aa408: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1aa408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1aa40c:
    // 0x1aa40c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1aa40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1aa410:
    // 0x1aa410: 0x2463b600  addiu       $v1, $v1, -0x4A00
    ctx->pc = 0x1aa410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948352));
label_1aa414:
    // 0x1aa414: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1aa414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1aa418:
    // 0x1aa418: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1aa418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_1aa41c:
    // 0x1aa41c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1aa41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1aa420:
    // 0x1aa420: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1aa420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1aa424:
    // 0x1aa424: 0x24430090  addiu       $v1, $v0, 0x90
    ctx->pc = 0x1aa424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1aa428:
    // 0x1aa428: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1aa428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1aa42c:
    // 0x1aa42c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa430:
    // 0x1aa430: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1aa430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_1aa434:
    // 0x1aa434: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x1aa434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_1aa438:
    // 0x1aa438: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1aa438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1aa43c:
    // 0x1aa43c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1aa43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1aa440:
    // 0x1aa440: 0xac500090  sw          $s0, 0x90($v0)
    ctx->pc = 0x1aa440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 16));
label_1aa444:
    // 0x1aa444: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1aa444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1aa448:
    // 0x1aa448: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1aa448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1aa44c:
    // 0x1aa44c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1aa44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_1aa450:
    // 0x1aa450: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_1aa454:
    if (ctx->pc == 0x1AA454u) {
        ctx->pc = 0x1AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA450u;
        // 0x1aa454: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA458u;
        goto label_1aa458;
    }
    ctx->pc = 0x1AA450u;
    {
        const bool branch_taken_0x1aa450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA450u;
        // 0x1aa454: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa450) {
            ctx->pc = 0x1AA488u;
            goto label_1aa488;
        }
    }
    ctx->pc = 0x1AA458u;
label_1aa458:
    // 0x1aa458: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1aa458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aa45c:
    // 0x1aa45c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1aa460:
    // 0x1aa460: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1aa460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1aa464:
    // 0x1aa464: 0xa0f809  jalr        $a1
label_1aa468:
    if (ctx->pc == 0x1AA468u) {
        ctx->pc = 0x1AA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA464u;
        // 0x1aa468: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA46Cu;
        goto label_1aa46c;
    }
    ctx->pc = 0x1AA464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AA46Cu);
        ctx->pc = 0x1AA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA464u;
        // 0x1aa468: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA464u, 0x1AA46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA46Cu;
label_1aa46c:
    // 0x1aa46c: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_1aa470:
    // 0x1aa470: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aa474:
    // 0x1aa474: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1aa474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1aa478:
    // 0x1aa478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1aa47c:
    // 0x1aa47c: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x1aa47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
label_1aa480:
    // 0x1aa480: 0xae4300e4  sw          $v1, 0xE4($s2)
    ctx->pc = 0x1aa480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
label_1aa484:
    // 0x1aa484: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aa484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa488:
    // 0x1aa488: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aa488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa48c:
    // 0x1aa48c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aa48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa490:
    // 0x1aa490: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1aa490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa494:
    // 0x1aa494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa498:
    // 0x1aa498: 0x3e00008  jr          $ra
label_1aa49c:
    if (ctx->pc == 0x1AA49Cu) {
        ctx->pc = 0x1AA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA498u;
        // 0x1aa49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA4A0u;
        goto label_fallthrough_0x1aa498;
    }
    ctx->pc = 0x1AA498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA498u;
        // 0x1aa49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa498:
    ctx->pc = 0x1AA4A0u;
}
