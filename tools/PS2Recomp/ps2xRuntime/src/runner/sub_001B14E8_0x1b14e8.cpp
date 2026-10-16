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

// Function: sub_001B14E8
// Address: 0x1b14e8 - 0x1b1af8
void sub_001B14E8_0x1b14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14E8_0x1b14e8");
#endif

    switch (ctx->pc) {
        case 0x1b15e4u: goto label_1b15e4;
        case 0x1b164cu: goto label_1b164c;
        case 0x1b1660u: goto label_1b1660;
        case 0x1b1674u: goto label_1b1674;
        case 0x1b1718u: goto label_1b1718;
        case 0x1b172cu: goto label_1b172c;
        case 0x1b17c4u: goto label_1b17c4;
        case 0x1b17d8u: goto label_1b17d8;
        case 0x1b188cu: goto label_1b188c;
        case 0x1b18a0u: goto label_1b18a0;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b194cu: goto label_1b194c;
        case 0x1b19c8u: goto label_1b19c8;
        case 0x1b1a58u: goto label_1b1a58;
        case 0x1b1a68u: goto label_1b1a68;
        case 0x1b1adcu: goto label_1b1adc;
        default: break;
    }

    ctx->pc = 0x1b14e8u;

    // 0x1b14e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b14e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b14ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b14ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b14f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b14f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b14f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b14f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1b14f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b14fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b14fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1504: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b1504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b1508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b150c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b1510: 0x8c4300f8  lw          $v1, 0xF8($v0)
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1b1514: 0x10600171  beqz        $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x1B1514u;
    {
        const bool branch_taken_0x1b1514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1514u;
        // 0x1b1518: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1514) {
            ctx->pc = 0x1B1ADCu;
            goto label_1b1adc;
        }
    }
    ctx->pc = 0x1B151Cu;
    // 0x1b151c: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B151Cu;
    {
        const bool branch_taken_0x1b151c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1B1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B151Cu;
        // 0x1b1520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b151c) {
            ctx->pc = 0x1B1528u;
            goto label_1b1528;
        }
    }
    ctx->pc = 0x1B1524u;
    // 0x1b1524: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_1b1528:
    // 0x1b1528: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B152Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1528u;
            // 0x1b152c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1694u;
            goto label_1b1694;
        }
    }
    ctx->pc = 0x1B1530u;
    // 0x1b1530: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1b1534: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1534u;
    {
        const bool branch_taken_0x1b1534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1534) {
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B153Cu;
    // 0x1b153c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1b153cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b1540: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b1540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b1544: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1544u;
    {
        const bool branch_taken_0x1b1544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1544u;
        // 0x1b1548: 0x2a220008  slti        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1544) {
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B154Cu;
    // 0x1b154c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B154Cu;
    {
        const bool branch_taken_0x1b154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b154c) {
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B1554u;
    // 0x1b1554: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b1554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b1558: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b1558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b155c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b155cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1560: 0x0  nop
    ctx->pc = 0x1b1560u;
    // NOP
    // 0x1b1564: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b1564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1568: 0x0  nop
    ctx->pc = 0x1b1568u;
    // NOP
    // 0x1b156c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B156Cu;
    {
        const bool branch_taken_0x1b156c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b156c) {
            ctx->pc = 0x1B1570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B156Cu;
            // 0x1b1570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1574u;
            goto label_1b1574;
        }
    }
    ctx->pc = 0x1B1574u;
label_1b1574:
    // 0x1b1574: 0x54600133  bnel        $v1, $zero, . + 4 + (0x133 << 2)
    ctx->pc = 0x1B1574u;
    {
        const bool branch_taken_0x1b1574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1574) {
            ctx->pc = 0x1B1578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1574u;
            // 0x1b1578: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A44u;
            goto label_1b1a44;
        }
    }
    ctx->pc = 0x1B157Cu;
    // 0x1b157c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b1580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1584: 0x2249007  srav        $s2, $a0, $s1
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x1b1588: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1b1588u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b158c: 0x3a520001  xori        $s2, $s2, 0x1
    ctx->pc = 0x1b158cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x1b1590: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1590u;
    {
        const bool branch_taken_0x1b1590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1590u;
        // 0x1b1594: 0x32520001  andi        $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1590) {
            ctx->pc = 0x1B15ECu;
            goto label_1b15ec;
        }
    }
    ctx->pc = 0x1B1598u;
    // 0x1b1598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b159c: 0x2251004  sllv        $v0, $a1, $s1
    ctx->pc = 0x1b159cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x1b15a0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1b15a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b15a4: 0x1640002b  bnez        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B15A4u;
    {
        const bool branch_taken_0x1b15a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15A4u;
        // 0x1b15a8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15a4) {
            ctx->pc = 0x1B1654u;
            goto label_1b1654;
        }
    }
    ctx->pc = 0x1B15ACu;
    // 0x1b15ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b15b0: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B15B0u;
    {
        const bool branch_taken_0x1b15b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B0u;
        // 0x1b15b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b0) {
            ctx->pc = 0x1B15D8u;
            goto label_1b15d8;
        }
    }
    ctx->pc = 0x1B15B8u;
    // 0x1b15b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B15B8u;
    {
        const bool branch_taken_0x1b15b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B8u;
        // 0x1b15bc: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b8) {
            ctx->pc = 0x1B15D8u;
            goto label_1b15d8;
        }
    }
    ctx->pc = 0x1B15C0u;
    // 0x1b15c0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B15C0u;
    {
        const bool branch_taken_0x1b15c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15C0u;
        // 0x1b15c4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15c0) {
            ctx->pc = 0x1B15D8u;
            goto label_1b15d8;
        }
    }
    ctx->pc = 0x1B15C8u;
    // 0x1b15c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B15C8u;
    {
        const bool branch_taken_0x1b15c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15C8u;
        // 0x1b15cc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15c8) {
            ctx->pc = 0x1B15D8u;
            goto label_1b15d8;
        }
    }
    ctx->pc = 0x1B15D0u;
    // 0x1b15d0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B15D0u;
    {
        const bool branch_taken_0x1b15d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b15d0) {
            ctx->pc = 0x1B164Cu;
            goto label_1b164c;
        }
    }
    ctx->pc = 0x1B15D8u;
label_1b15d8:
    // 0x1b15d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b15d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15dc: 0xc06c49c  jal         func_1B1270
    ctx->pc = 0x1B15DCu;
    SET_GPR_U32(ctx, 31, 0x1B15E4u);
    ctx->pc = 0x1B15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15DCu;
    // 0x1b15e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1270u, 0x1B15DCu, 0x1B15E4u)) {
        return;
    }
    ctx->pc = 0x1B15E4u;
label_1b15e4:
    // 0x1b15e4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B15E4u;
    {
        const bool branch_taken_0x1b15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15e4) {
            ctx->pc = 0x1B164Cu;
            goto label_1b164c;
        }
    }
    ctx->pc = 0x1B15ECu;
label_1b15ec:
    // 0x1b15ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b15ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b15f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b15f4: 0x2251804  sllv        $v1, $a1, $s1
    ctx->pc = 0x1b15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x1b15f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b15fc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1b15fcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1b1600: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b1600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b1604: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1b1604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1b1608: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1b160c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B160Cu;
    {
        const bool branch_taken_0x1b160c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B160Cu;
        // 0x1b1610: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b160c) {
            ctx->pc = 0x1B164Cu;
            goto label_1b164c;
        }
    }
    ctx->pc = 0x1B1614u;
    // 0x1b1614: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b1618: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1618u;
    {
        const bool branch_taken_0x1b1618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1618u;
        // 0x1b161c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1618) {
            ctx->pc = 0x1B1640u;
            goto label_1b1640;
        }
    }
    ctx->pc = 0x1B1620u;
    // 0x1b1620: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1620u;
    {
        const bool branch_taken_0x1b1620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1620u;
        // 0x1b1624: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1620) {
            ctx->pc = 0x1B1640u;
            goto label_1b1640;
        }
    }
    ctx->pc = 0x1B1628u;
    // 0x1b1628: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1628u;
    {
        const bool branch_taken_0x1b1628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1628u;
        // 0x1b162c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1628) {
            ctx->pc = 0x1B1640u;
            goto label_1b1640;
        }
    }
    ctx->pc = 0x1B1630u;
    // 0x1b1630: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1630u;
    {
        const bool branch_taken_0x1b1630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1630u;
        // 0x1b1634: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1630) {
            ctx->pc = 0x1B1640u;
            goto label_1b1640;
        }
    }
    ctx->pc = 0x1B1638u;
    // 0x1b1638: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1638u;
    {
        const bool branch_taken_0x1b1638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1638) {
            ctx->pc = 0x1B164Cu;
            goto label_1b164c;
        }
    }
    ctx->pc = 0x1B1640u;
label_1b1640:
    // 0x1b1640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1644: 0xc06c4ec  jal         func_1B13B0
    ctx->pc = 0x1B1644u;
    SET_GPR_U32(ctx, 31, 0x1B164Cu);
    ctx->pc = 0x1B1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1644u;
    // 0x1b1648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B13B0u, 0x1B1644u, 0x1B164Cu)) {
        return;
    }
    ctx->pc = 0x1B164Cu;
label_1b164c:
    // 0x1b164c: 0x52400124  beql        $s2, $zero, . + 4 + (0x124 << 2)
    ctx->pc = 0x1B164Cu;
    {
        const bool branch_taken_0x1b164c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b164c) {
            ctx->pc = 0x1B1650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B164Cu;
            // 0x1b1650: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1654u;
label_1b1654:
    // 0x1b1654: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1658: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1658u;
    SET_GPR_U32(ctx, 31, 0x1B1660u);
    ctx->pc = 0x1B165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1658u;
    // 0x1b165c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1658u, 0x1B1660u)) {
        return;
    }
    ctx->pc = 0x1B1660u;
label_1b1660:
    // 0x1b1660: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b1660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1664: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b1664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b1668: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b1668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b166c: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1b166cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1b1670: 0xe4f40004  swc1        $f20, 0x4($a3)
    ctx->pc = 0x1b1670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1b1674:
    // 0x1b1674: 0x10c00119  beqz        $a2, . + 4 + (0x119 << 2)
    ctx->pc = 0x1B1674u;
    {
        const bool branch_taken_0x1b1674 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1674u;
        // 0x1b1678: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1674) {
            ctx->pc = 0x1B1ADCu;
            goto label_1b1adc;
        }
    }
    ctx->pc = 0x1B167Cu;
    // 0x1b167c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1680: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b1684: 0x548300c0  bnel        $a0, $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1B1684u;
    {
        const bool branch_taken_0x1b1684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1684) {
            ctx->pc = 0x1B1688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1684u;
            // 0x1b1688: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1988u;
            goto label_1b1988;
        }
    }
    ctx->pc = 0x1B168Cu;
    // 0x1b168c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1B168Cu;
    {
        const bool branch_taken_0x1b168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B168Cu;
        // 0x1b1690: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b168c) {
            ctx->pc = 0x1B19B8u;
            goto label_1b19b8;
        }
    }
    ctx->pc = 0x1B1694u;
label_1b1694:
    // 0x1b1694: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1B1694u;
    {
        const bool branch_taken_0x1b1694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1694u;
        // 0x1b1698: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1694) {
            ctx->pc = 0x1B19F4u;
            goto label_1b19f4;
        }
    }
    ctx->pc = 0x1B169Cu;
    // 0x1b169c: 0x1622005c  bne         $s1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B169Cu;
    {
        const bool branch_taken_0x1b169c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B169Cu;
        // 0x1b16a0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b169c) {
            ctx->pc = 0x1B1810u;
            goto label_1b1810;
        }
    }
    ctx->pc = 0x1B16A4u;
    // 0x1b16a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b16a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b16a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b16a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b16ac: 0x0  nop
    ctx->pc = 0x1b16acu;
    // NOP
    // 0x1b16b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b16b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b16b4: 0x0  nop
    ctx->pc = 0x1b16b4u;
    // NOP
    // 0x1b16b8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1B16B8u;
    {
        const bool branch_taken_0x1b16b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B8u;
        // 0x1b16bc: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16b8) {
            ctx->pc = 0x1B1750u;
            goto label_1b1750;
        }
    }
    ctx->pc = 0x1B16C0u;
    // 0x1b16c0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b16c4: 0x28c43  sra         $s1, $v0, 17
    ctx->pc = 0x1b16c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 17));
    // 0x1b16c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b16c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b16cc: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x1b16ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1b16d0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x1b16d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b16d4: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B16D4u;
    {
        const bool branch_taken_0x1b16d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16D4u;
        // 0x1b16d8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d4) {
            ctx->pc = 0x1B1720u;
            goto label_1b1720;
        }
    }
    ctx->pc = 0x1B16DCu;
    // 0x1b16dc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b16e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b16e4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B16E4u;
    {
        const bool branch_taken_0x1b16e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16E4u;
        // 0x1b16e8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16e4) {
            ctx->pc = 0x1B170Cu;
            goto label_1b170c;
        }
    }
    ctx->pc = 0x1B16ECu;
    // 0x1b16ec: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B16ECu;
    {
        const bool branch_taken_0x1b16ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16ECu;
        // 0x1b16f0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16ec) {
            ctx->pc = 0x1B170Cu;
            goto label_1b170c;
        }
    }
    ctx->pc = 0x1B16F4u;
    // 0x1b16f4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B16F4u;
    {
        const bool branch_taken_0x1b16f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16F4u;
        // 0x1b16f8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f4) {
            ctx->pc = 0x1B170Cu;
            goto label_1b170c;
        }
    }
    ctx->pc = 0x1B16FCu;
    // 0x1b16fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B16FCu;
    {
        const bool branch_taken_0x1b16fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16FCu;
        // 0x1b1700: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16fc) {
            ctx->pc = 0x1B170Cu;
            goto label_1b170c;
        }
    }
    ctx->pc = 0x1B1704u;
    // 0x1b1704: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1704u;
    {
        const bool branch_taken_0x1b1704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1704) {
            ctx->pc = 0x1B1718u;
            goto label_1b1718;
        }
    }
    ctx->pc = 0x1B170Cu;
label_1b170c:
    // 0x1b170c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1710: 0xc06c49c  jal         func_1B1270
    ctx->pc = 0x1B1710u;
    SET_GPR_U32(ctx, 31, 0x1B1718u);
    ctx->pc = 0x1B1714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1710u;
    // 0x1b1714: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1270u, 0x1B1710u, 0x1B1718u)) {
        return;
    }
    ctx->pc = 0x1B1718u;
label_1b1718:
    // 0x1b1718: 0x522000f1  beql        $s1, $zero, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1B1718u;
    {
        const bool branch_taken_0x1b1718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1718) {
            ctx->pc = 0x1B171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1718u;
            // 0x1b171c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1720u;
label_1b1720:
    // 0x1b1720: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1724: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1724u;
    SET_GPR_U32(ctx, 31, 0x1B172Cu);
    ctx->pc = 0x1B1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1724u;
    // 0x1b1728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1724u, 0x1B172Cu)) {
        return;
    }
    ctx->pc = 0x1B172Cu;
label_1b172c:
    // 0x1b172c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b172cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1738: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b1738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b173c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1740: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b1740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1744: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1b1744u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1b1748: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1B1748u;
    {
        const bool branch_taken_0x1b1748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1748u;
        // 0x1b174c: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1748) {
            ctx->pc = 0x1B1674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1674;
        }
    }
    ctx->pc = 0x1B1750u;
label_1b1750:
    // 0x1b1750: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1b1750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1b1754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1758: 0x0  nop
    ctx->pc = 0x1b1758u;
    // NOP
    // 0x1b175c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b175cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1760: 0x0  nop
    ctx->pc = 0x1b1760u;
    // NOP
    // 0x1b1764: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1B1764u;
    {
        const bool branch_taken_0x1b1764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1764u;
        // 0x1b1768: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1764) {
            ctx->pc = 0x1B17FCu;
            goto label_1b17fc;
        }
    }
    ctx->pc = 0x1B176Cu;
    // 0x1b176c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b1770: 0x28c83  sra         $s1, $v0, 18
    ctx->pc = 0x1b1770u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 18));
    // 0x1b1774: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1778: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x1b1778u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1b177c: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x1b177cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b1780: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1780u;
    {
        const bool branch_taken_0x1b1780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1780u;
        // 0x1b1784: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1780) {
            ctx->pc = 0x1B17CCu;
            goto label_1b17cc;
        }
    }
    ctx->pc = 0x1B1788u;
    // 0x1b1788: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b178c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1790: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1790u;
    {
        const bool branch_taken_0x1b1790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1790u;
        // 0x1b1794: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1790) {
            ctx->pc = 0x1B17B8u;
            goto label_1b17b8;
        }
    }
    ctx->pc = 0x1B1798u;
    // 0x1b1798: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1798u;
    {
        const bool branch_taken_0x1b1798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1798u;
        // 0x1b179c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1798) {
            ctx->pc = 0x1B17B8u;
            goto label_1b17b8;
        }
    }
    ctx->pc = 0x1B17A0u;
    // 0x1b17a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B17A0u;
    {
        const bool branch_taken_0x1b17a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A0u;
        // 0x1b17a4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a0) {
            ctx->pc = 0x1B17B8u;
            goto label_1b17b8;
        }
    }
    ctx->pc = 0x1B17A8u;
    // 0x1b17a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B17A8u;
    {
        const bool branch_taken_0x1b17a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A8u;
        // 0x1b17ac: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a8) {
            ctx->pc = 0x1B17B8u;
            goto label_1b17b8;
        }
    }
    ctx->pc = 0x1B17B0u;
    // 0x1b17b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B17B0u;
    {
        const bool branch_taken_0x1b17b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b17b0) {
            ctx->pc = 0x1B17C4u;
            goto label_1b17c4;
        }
    }
    ctx->pc = 0x1B17B8u;
label_1b17b8:
    // 0x1b17b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17bc: 0xc06c49c  jal         func_1B1270
    ctx->pc = 0x1B17BCu;
    SET_GPR_U32(ctx, 31, 0x1B17C4u);
    ctx->pc = 0x1B17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17BCu;
    // 0x1b17c0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1270u, 0x1B17BCu, 0x1B17C4u)) {
        return;
    }
    ctx->pc = 0x1B17C4u;
label_1b17c4:
    // 0x1b17c4: 0x522000c6  beql        $s1, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x1B17C4u;
    {
        const bool branch_taken_0x1b17c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b17c4) {
            ctx->pc = 0x1B17C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B17C4u;
            // 0x1b17c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B17CCu;
label_1b17cc:
    // 0x1b17cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b17d0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B17D0u;
    SET_GPR_U32(ctx, 31, 0x1B17D8u);
    ctx->pc = 0x1B17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17D0u;
    // 0x1b17d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B17D0u, 0x1B17D8u)) {
        return;
    }
    ctx->pc = 0x1B17D8u;
label_1b17d8:
    // 0x1b17d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b17d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b17dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b17e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b17e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b17e4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b17e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b17e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b17ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b17ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17f0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1b17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1b17f4: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x1B17F4u;
    {
        const bool branch_taken_0x1b17f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17F4u;
        // 0x1b17f8: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17f4) {
            ctx->pc = 0x1B1674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1674;
        }
    }
    ctx->pc = 0x1B17FCu;
label_1b17fc:
    // 0x1b17fc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b1800: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x1b1804: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
    // 0x1b1808: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1B1808u;
    {
        const bool branch_taken_0x1b1808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1808u;
        // 0x1b180c: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1808) {
            ctx->pc = 0x1B19E0u;
            goto label_1b19e0;
        }
    }
    ctx->pc = 0x1B1810u;
label_1b1810:
    // 0x1b1810: 0x562200b3  bnel        $s1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1B1810u;
    {
        const bool branch_taken_0x1b1810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1810) {
            ctx->pc = 0x1B1814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1810u;
            // 0x1b1814: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1818u;
    // 0x1b1818: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b1818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b181c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b181cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1820: 0x0  nop
    ctx->pc = 0x1b1820u;
    // NOP
    // 0x1b1824: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b1824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1828: 0x0  nop
    ctx->pc = 0x1b1828u;
    // NOP
    // 0x1b182c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1B182Cu;
    {
        const bool branch_taken_0x1b182c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B182Cu;
        // 0x1b1830: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b182c) {
            ctx->pc = 0x1B18C4u;
            goto label_1b18c4;
        }
    }
    ctx->pc = 0x1B1834u;
    // 0x1b1834: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b1834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b1838: 0x28cc3  sra         $s1, $v0, 19
    ctx->pc = 0x1b1838u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 19));
    // 0x1b183c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1840: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1b1844: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x1b1844u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b1848: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1848u;
    {
        const bool branch_taken_0x1b1848 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1848u;
        // 0x1b184c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1848) {
            ctx->pc = 0x1B1894u;
            goto label_1b1894;
        }
    }
    ctx->pc = 0x1B1850u;
    // 0x1b1850: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b1854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1858: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1858u;
        // 0x1b185c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B1880u;
            goto label_1b1880;
        }
    }
    ctx->pc = 0x1B1860u;
    // 0x1b1860: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1860u;
    {
        const bool branch_taken_0x1b1860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1860u;
        // 0x1b1864: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1860) {
            ctx->pc = 0x1B1880u;
            goto label_1b1880;
        }
    }
    ctx->pc = 0x1B1868u;
    // 0x1b1868: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1868u;
    {
        const bool branch_taken_0x1b1868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1868u;
        // 0x1b186c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1868) {
            ctx->pc = 0x1B1880u;
            goto label_1b1880;
        }
    }
    ctx->pc = 0x1B1870u;
    // 0x1b1870: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1870u;
    {
        const bool branch_taken_0x1b1870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1870u;
        // 0x1b1874: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1870) {
            ctx->pc = 0x1B1880u;
            goto label_1b1880;
        }
    }
    ctx->pc = 0x1B1878u;
    // 0x1b1878: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1878u;
    {
        const bool branch_taken_0x1b1878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1878) {
            ctx->pc = 0x1B188Cu;
            goto label_1b188c;
        }
    }
    ctx->pc = 0x1B1880u;
label_1b1880:
    // 0x1b1880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1884: 0xc06c49c  jal         func_1B1270
    ctx->pc = 0x1B1884u;
    SET_GPR_U32(ctx, 31, 0x1B188Cu);
    ctx->pc = 0x1B1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1884u;
    // 0x1b1888: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1270u, 0x1B1884u, 0x1B188Cu)) {
        return;
    }
    ctx->pc = 0x1B188Cu;
label_1b188c:
    // 0x1b188c: 0x52200094  beql        $s1, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x1B188Cu;
    {
        const bool branch_taken_0x1b188c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b188c) {
            ctx->pc = 0x1B1890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B188Cu;
            // 0x1b1890: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1894u;
label_1b1894:
    // 0x1b1894: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1898: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1898u;
    SET_GPR_U32(ctx, 31, 0x1B18A0u);
    ctx->pc = 0x1B189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1898u;
    // 0x1b189c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1898u, 0x1B18A0u)) {
        return;
    }
    ctx->pc = 0x1B18A0u;
label_1b18a0:
    // 0x1b18a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b18a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b18a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b18a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18ac: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b18acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b18b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b18b4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b18b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18b8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1b18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1b18bc: 0x1000ff6d  b           . + 4 + (-0x93 << 2)
    ctx->pc = 0x1B18BCu;
    {
        const bool branch_taken_0x1b18bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18BCu;
        // 0x1b18c0: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18bc) {
            ctx->pc = 0x1B1674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1674;
        }
    }
    ctx->pc = 0x1B18C4u;
label_1b18c4:
    // 0x1b18c4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1b18c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1b18c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b18c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18cc: 0x0  nop
    ctx->pc = 0x1b18ccu;
    // NOP
    // 0x1b18d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b18d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b18d4: 0x0  nop
    ctx->pc = 0x1b18d4u;
    // NOP
    // 0x1b18d8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1B18D8u;
    {
        const bool branch_taken_0x1b18d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18D8u;
        // 0x1b18dc: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18d8) {
            ctx->pc = 0x1B19D0u;
            goto label_1b19d0;
        }
    }
    ctx->pc = 0x1B18E0u;
    // 0x1b18e0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b18e4: 0x28d03  sra         $s1, $v0, 20
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1b18e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b18ec: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x1b18ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x1b18f0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x1b18f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b18f4: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B18F4u;
    {
        const bool branch_taken_0x1b18f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18F4u;
        // 0x1b18f8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18f4) {
            ctx->pc = 0x1B1940u;
            goto label_1b1940;
        }
    }
    ctx->pc = 0x1B18FCu;
    // 0x1b18fc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b1900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1904: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1904u;
    {
        const bool branch_taken_0x1b1904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1904u;
        // 0x1b1908: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1904) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B190Cu;
    // 0x1b190c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B190Cu;
    {
        const bool branch_taken_0x1b190c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B190Cu;
        // 0x1b1910: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b190c) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B1914u;
    // 0x1b1914: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1914u;
    {
        const bool branch_taken_0x1b1914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1914u;
        // 0x1b1918: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1914) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B191Cu;
    // 0x1b191c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B1924u;
    // 0x1b1924: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1924u;
    {
        const bool branch_taken_0x1b1924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1924) {
            ctx->pc = 0x1B1938u;
            goto label_1b1938;
        }
    }
    ctx->pc = 0x1B192Cu;
label_1b192c:
    // 0x1b192c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1930: 0xc06c49c  jal         func_1B1270
    ctx->pc = 0x1B1930u;
    SET_GPR_U32(ctx, 31, 0x1B1938u);
    ctx->pc = 0x1B1934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1930u;
    // 0x1b1934: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1270u, 0x1B1930u, 0x1B1938u)) {
        return;
    }
    ctx->pc = 0x1B1938u;
label_1b1938:
    // 0x1b1938: 0x52200069  beql        $s1, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x1B1938u;
    {
        const bool branch_taken_0x1b1938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1938) {
            ctx->pc = 0x1B193Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1938u;
            // 0x1b193c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1940u;
label_1b1940:
    // 0x1b1940: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b1940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1944: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1944u;
    SET_GPR_U32(ctx, 31, 0x1B194Cu);
    ctx->pc = 0x1B1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1944u;
    // 0x1b1948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1944u, 0x1B194Cu)) {
        return;
    }
    ctx->pc = 0x1B194Cu;
label_1b194c:
    // 0x1b194c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b194cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1958: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b195c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1960: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b1960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1964: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1b1964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1b1968: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1b1968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1b196c: 0x10c0005b  beqz        $a2, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B196Cu;
    {
        const bool branch_taken_0x1b196c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B196Cu;
        // 0x1b1970: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b196c) {
            ctx->pc = 0x1B1ADCu;
            goto label_1b1adc;
        }
    }
    ctx->pc = 0x1B1974u;
    // 0x1b1974: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1978: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b1978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b197c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B197Cu;
    {
        const bool branch_taken_0x1b197c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B197Cu;
        // 0x1b1980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b197c) {
            ctx->pc = 0x1B19B8u;
            goto label_1b19b8;
        }
    }
    ctx->pc = 0x1B1984u;
    // 0x1b1984: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1b1988:
    // 0x1b1988: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b1988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b198c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b1990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b1994: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1998: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b1998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b199c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b199cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1b19a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b19a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b19a8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1b19ac: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b19b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b19b4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1b19b8:
    // 0x1b19b8: 0x15000049  bnez        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1B19B8u;
    {
        const bool branch_taken_0x1b19b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19B8u;
        // 0x1b19bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19b8) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B19C0u;
    // 0x1b19c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B19C0u;
    SET_GPR_U32(ctx, 31, 0x1B19C8u);
    ctx->pc = 0x1B19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19C0u;
    // 0x1b19c4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B19C0u, 0x1B19C8u)) {
        return;
    }
    ctx->pc = 0x1B19C8u;
label_1b19c8:
    // 0x1b19c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B19C8u;
    {
        const bool branch_taken_0x1b19c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19C8u;
        // 0x1b19cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19c8) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B19D0u;
label_1b19d0:
    // 0x1b19d0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b19d4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1b19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1b19d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b19d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b19dc: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x1b19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
label_1b19e0:
    // 0x1b19e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b19e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b19e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1b19e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b19e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b19e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b19ec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B19ECu;
    {
        const bool branch_taken_0x1b19ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19ECu;
        // 0x1b19f0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19ec) {
            ctx->pc = 0x1B1ADCu;
            goto label_1b1adc;
        }
    }
    ctx->pc = 0x1B19F4u;
label_1b19f4:
    // 0x1b19f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b19f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b19f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b19f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b19fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b19fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1a00: 0x0  nop
    ctx->pc = 0x1b1a00u;
    // NOP
    // 0x1b1a04: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b1a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1a08: 0x0  nop
    ctx->pc = 0x1b1a08u;
    // NOP
    // 0x1b1a0c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A0Cu;
    {
        const bool branch_taken_0x1b1a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1a0c) {
            ctx->pc = 0x1B1A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1A0Cu;
            // 0x1b1a10: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1A38u;
            goto label_1b1a38;
        }
    }
    ctx->pc = 0x1B1A14u;
    // 0x1b1a14: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1b1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1b1a18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b1a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b1a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1a20: 0x0  nop
    ctx->pc = 0x1b1a20u;
    // NOP
    // 0x1b1a24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b1a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1a28: 0x0  nop
    ctx->pc = 0x1b1a28u;
    // NOP
    // 0x1b1a2c: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x1B1A2Cu;
    {
        const bool branch_taken_0x1b1a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1a2c) {
            ctx->pc = 0x1B1A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1A2Cu;
            // 0x1b1a30: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1A34u;
    // 0x1b1a34: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b1a38:
    // 0x1b1a38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1A38u;
    {
        const bool branch_taken_0x1b1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A38u;
        // 0x1b1a3c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a38) {
            ctx->pc = 0x1B1A60u;
            goto label_1b1a60;
        }
    }
    ctx->pc = 0x1B1A40u;
    // 0x1b1a40: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1b1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1b1a44:
    // 0x1b1a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a48: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1b1a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b1a4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b1a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a50: 0xc06c150  jal         func_1B0540
    ctx->pc = 0x1B1A50u;
    SET_GPR_U32(ctx, 31, 0x1B1A58u);
    ctx->pc = 0x1B1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A50u;
    // 0x1b1a54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0540u, 0x1B1A50u, 0x1B1A58u)) {
        return;
    }
    ctx->pc = 0x1B1A58u;
label_1b1a58:
    // 0x1b1a58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B1A58u;
    {
        const bool branch_taken_0x1b1a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A58u;
        // 0x1b1a5c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a58) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1A60u;
label_1b1a60:
    // 0x1b1a60: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1A60u;
    SET_GPR_U32(ctx, 31, 0x1B1A68u);
    ctx->pc = 0x1B1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A60u;
    // 0x1b1a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1A60u, 0x1B1A68u)) {
        return;
    }
    ctx->pc = 0x1B1A68u;
label_1b1a68:
    // 0x1b1a68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b1a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a6c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b1a70: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b1a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a74: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1b1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1b1a78: 0xe4f40004  swc1        $f20, 0x4($a3)
    ctx->pc = 0x1b1a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1b1a7c: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1A7Cu;
    {
        const bool branch_taken_0x1b1a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A7Cu;
        // 0x1b1a80: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a7c) {
            ctx->pc = 0x1B1ADCu;
            goto label_1b1adc;
        }
    }
    ctx->pc = 0x1B1A84u;
    // 0x1b1a84: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1a88: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b1a8c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1A8Cu;
    {
        const bool branch_taken_0x1b1a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A8Cu;
        // 0x1b1a90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a8c) {
            ctx->pc = 0x1B1AC8u;
            goto label_1b1ac8;
        }
    }
    ctx->pc = 0x1B1A94u;
    // 0x1b1a94: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b1a98: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b1a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1a9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b1aa0: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1aa4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b1aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1aa8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b1aa8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1b1aac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1ab0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b1ab4: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1b1ab8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1abc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1ac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1AC0u;
    {
        const bool branch_taken_0x1b1ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AC0u;
        // 0x1b1ac4: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ac0) {
            ctx->pc = 0x1B1ACCu;
            goto label_1b1acc;
        }
    }
    ctx->pc = 0x1B1AC8u;
label_1b1ac8:
    // 0x1b1ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1acc:
    // 0x1b1acc: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1ACCu;
    {
        const bool branch_taken_0x1b1acc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ACCu;
        // 0x1b1ad0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1acc) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1AD4u;
    // 0x1b1ad4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B1AD4u;
    SET_GPR_U32(ctx, 31, 0x1B1ADCu);
    ctx->pc = 0x1B1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AD4u;
    // 0x1b1ad8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B1AD4u, 0x1B1ADCu)) {
        return;
    }
    ctx->pc = 0x1B1ADCu;
label_1b1adc:
    // 0x1b1adc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b1adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1ae0:
    // 0x1b1ae0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1aec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b1aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AF0u;
        // 0x1b1af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1AF8u;
}
