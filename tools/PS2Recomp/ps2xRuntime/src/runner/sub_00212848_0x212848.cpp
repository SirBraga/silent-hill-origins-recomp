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

// Function: sub_00212848
// Address: 0x212848 - 0x2142c8
void sub_00212848_0x212848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212848_0x212848");
#endif

    switch (ctx->pc) {
        case 0x2128f8u: goto label_2128f8;
        case 0x2128fcu: goto label_2128fc;
        case 0x212938u: goto label_212938;
        case 0x212988u: goto label_212988;
        case 0x2129acu: goto label_2129ac;
        case 0x212a08u: goto label_212a08;
        case 0x212a8cu: goto label_212a8c;
        case 0x212ab8u: goto label_212ab8;
        case 0x212b6cu: goto label_212b6c;
        case 0x212b88u: goto label_212b88;
        case 0x212c08u: goto label_212c08;
        case 0x212c28u: goto label_212c28;
        case 0x212cacu: goto label_212cac;
        case 0x212cd8u: goto label_212cd8;
        case 0x212d48u: goto label_212d48;
        case 0x212dd8u: goto label_212dd8;
        case 0x212df4u: goto label_212df4;
        case 0x212e40u: goto label_212e40;
        case 0x212ea8u: goto label_212ea8;
        case 0x212ef0u: goto label_212ef0;
        case 0x212f58u: goto label_212f58;
        case 0x212fa0u: goto label_212fa0;
        case 0x213020u: goto label_213020;
        case 0x213038u: goto label_213038;
        case 0x2130ecu: goto label_2130ec;
        case 0x213130u: goto label_213130;
        case 0x213228u: goto label_213228;
        case 0x2132c4u: goto label_2132c4;
        case 0x2132f0u: goto label_2132f0;
        case 0x2133b8u: goto label_2133b8;
        case 0x2133d8u: goto label_2133d8;
        case 0x213450u: goto label_213450;
        case 0x21349cu: goto label_21349c;
        case 0x2134b4u: goto label_2134b4;
        case 0x213500u: goto label_213500;
        case 0x213548u: goto label_213548;
        case 0x2135d8u: goto label_2135d8;
        case 0x213650u: goto label_213650;
        case 0x2136d8u: goto label_2136d8;
        case 0x213748u: goto label_213748;
        case 0x2137d0u: goto label_2137d0;
        case 0x213854u: goto label_213854;
        case 0x2138a0u: goto label_2138a0;
        case 0x213908u: goto label_213908;
        case 0x213978u: goto label_213978;
        case 0x213a50u: goto label_213a50;
        case 0x213b58u: goto label_213b58;
        case 0x213c08u: goto label_213c08;
        case 0x213ce8u: goto label_213ce8;
        case 0x213dc8u: goto label_213dc8;
        case 0x213ee0u: goto label_213ee0;
        case 0x213f60u: goto label_213f60;
        case 0x213fdcu: goto label_213fdc;
        case 0x213ff4u: goto label_213ff4;
        case 0x214098u: goto label_214098;
        case 0x214174u: goto label_214174;
        case 0x21420cu: goto label_21420c;
        case 0x214224u: goto label_214224;
        default: break;
    }

    ctx->pc = 0x212848u;

    // 0x212848: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x212848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x21284c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x21284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x212850: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x212850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x212854: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x212854u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212858: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x212858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x21285c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x21285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x212860: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x212860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x212864: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x212864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x212868: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x212868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x21286c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x21286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x212870: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x212870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x212874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x212874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x212878: 0x12e00627  beqz        $s7, . + 4 + (0x627 << 2)
    ctx->pc = 0x212878u;
    {
        const bool branch_taken_0x212878 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x21287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212878u;
        // 0x21287c: 0xafa50030  sw          $a1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212878) {
            ctx->pc = 0x214118u;
            goto label_214118;
        }
    }
    ctx->pc = 0x212880u;
    // 0x212880: 0x8ef30024  lw          $s3, 0x24($s7)
    ctx->pc = 0x212880u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x212884: 0x12600681  beqz        $s3, . + 4 + (0x681 << 2)
    ctx->pc = 0x212884u;
    {
        const bool branch_taken_0x212884 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x212888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212884u;
        // 0x212888: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212884) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x21288Cu;
    // 0x21288c: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x21288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x212890: 0x1040067e  beqz        $v0, . + 4 + (0x67E << 2)
    ctx->pc = 0x212890u;
    {
        const bool branch_taken_0x212890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212890u;
        // 0x212894: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212890) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x212898u;
    // 0x212898: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x212898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21289c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21289Cu;
    {
        const bool branch_taken_0x21289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21289c) {
            ctx->pc = 0x2128A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21289Cu;
            // 0x2128a0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2128B4u;
            goto label_2128b4;
        }
    }
    ctx->pc = 0x2128A4u;
    // 0x2128a4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2128a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2128a8: 0x14400678  bnez        $v0, . + 4 + (0x678 << 2)
    ctx->pc = 0x2128A8u;
    {
        const bool branch_taken_0x2128a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128A8u;
        // 0x2128ac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128a8) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x2128B0u;
    // 0x2128b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2128b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2128b4:
    // 0x2128b4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2128b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2128b8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2128B8u;
    {
        const bool branch_taken_0x2128b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2128b8) {
            ctx->pc = 0x2128BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2128B8u;
            // 0x2128bc: 0x8ee20014  lw          $v0, 0x14($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2128D0u;
            goto label_2128d0;
        }
    }
    ctx->pc = 0x2128C0u;
    // 0x2128c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2128c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2128c4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2128c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2128c8: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x2128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2128cc: 0x0  nop
    ctx->pc = 0x2128ccu;
    // NOP
label_2128d0:
    // 0x2128d0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2128d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2128d4: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x2128d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2128d8: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2128d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2128dc: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2128e0: 0x8ef40004  lw          $s4, 0x4($s7)
    ctx->pc = 0x2128e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2128e4: 0xde720040  ld          $s2, 0x40($s3)
    ctx->pc = 0x2128e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2128e8: 0x8e710048  lw          $s1, 0x48($s3)
    ctx->pc = 0x2128e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2128ec: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x2128ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
    // 0x2128f0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2128f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2128f4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2128f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_2128f8:
    // 0x2128f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2128f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2128fc:
    // 0x2128fc: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x2128fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x212900: 0x10400605  beqz        $v0, . + 4 + (0x605 << 2)
    ctx->pc = 0x212900u;
    {
        const bool branch_taken_0x212900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212900u;
        // 0x212904: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212900) {
            ctx->pc = 0x214118u;
            goto label_214118;
        }
    }
    ctx->pc = 0x212908u;
    // 0x212908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x212908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21290c: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x21290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
    // 0x212910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x212910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212914: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x212914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212918: 0x800008  jr          $a0
    ctx->pc = 0x212918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212920u: goto label_212920;
            case 0x212AD8u: goto label_212ad8;
            case 0x212BA8u: goto label_212ba8;
            case 0x212C48u: goto label_212c48;
            case 0x212CC0u: goto label_212cc0;
            case 0x212D74u: goto label_212d74;
            case 0x212E20u: goto label_212e20;
            case 0x212ED4u: goto label_212ed4;
            case 0x212F80u: goto label_212f80;
            case 0x213058u: goto label_213058;
            case 0x2130A8u: goto label_2130a8;
            case 0x2130FCu: goto label_2130fc;
            case 0x21310Cu: goto label_21310c;
            case 0x213210u: goto label_213210;
            case 0x213290u: goto label_213290;
            case 0x213310u: goto label_213310;
            case 0x213398u: goto label_213398;
            case 0x2134D8u: goto label_2134d8;
            case 0x2138C4u: goto label_2138c4;
            case 0x213B40u: goto label_213b40;
            case 0x213BB8u: goto label_213bb8;
            case 0x213DB4u: goto label_213db4;
            case 0x213E58u: goto label_213e58;
            case 0x213F18u: goto label_213f18;
            case 0x213F48u: goto label_213f48;
            case 0x214074u: goto label_214074;
            case 0x2140F8u: goto label_2140f8;
            case 0x214104u: goto label_214104;
            case 0x214110u: goto label_214110;
            case 0x214118u: goto label_214118;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212918u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x212920u;
label_212920:
    // 0x212920: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x212920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x212924: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x212924u;
    {
        const bool branch_taken_0x212924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212924u;
        // 0x212928: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212924) {
            ctx->pc = 0x212960u;
            goto label_212960;
        }
    }
    ctx->pc = 0x21292Cu;
    // 0x21292c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x212930: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x212930u;
    {
        const bool branch_taken_0x212930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212930u;
        // 0x212934: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212930) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x212938u;
label_212938:
    // 0x212938: 0x128005fb  beqz        $s4, . + 4 + (0x5FB << 2)
    ctx->pc = 0x212938u;
    {
        const bool branch_taken_0x212938 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212938u;
        // 0x21293c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212938) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x212940u;
    // 0x212940: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x212940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x212944: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x212944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x212948: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x212948u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x21294c: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x21294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x212950: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x212950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x212954: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x212954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x212958: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x212958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x21295c: 0x0  nop
    ctx->pc = 0x21295cu;
    // NOP
label_212960:
    // 0x212960: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x212960u;
    {
        const bool branch_taken_0x212960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212960u;
        // 0x212964: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212960) {
            ctx->pc = 0x212938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212938;
        }
    }
    ctx->pc = 0x212968u;
    // 0x212968: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x212968u;
    {
        const bool branch_taken_0x212968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212968u;
        // 0x21296c: 0x34028b1f  ori         $v0, $zero, 0x8B1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35615);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212968) {
            ctx->pc = 0x2129C8u;
            goto label_2129c8;
        }
    }
    ctx->pc = 0x212970u;
    // 0x212970: 0x56420016  bnel        $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x212970u;
    {
        const bool branch_taken_0x212970 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x212970) {
            ctx->pc = 0x212974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212970u;
            // 0x212974: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2129CCu;
            goto label_2129cc;
        }
    }
    ctx->pc = 0x212978u;
    // 0x212978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21297c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21297cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212980: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212980u;
    SET_GPR_U32(ctx, 31, 0x212988u);
    ctx->pc = 0x212984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212980u;
    // 0x212984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212980u, 0x212988u)) {
        return;
    }
    ctx->pc = 0x212988u;
label_212988:
    // 0x212988: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212988u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x21298c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x21298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x212990: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x212990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x212994: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x212994u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x212998: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x212998u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x21299c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x21299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2129a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2129a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2129a4: 0xc0889ce  jal         func_222738
    ctx->pc = 0x2129A4u;
    SET_GPR_U32(ctx, 31, 0x2129ACu);
    ctx->pc = 0x2129A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129A4u;
    // 0x2129a8: 0xde640018  ld          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x2129A4u, 0x2129ACu)) {
        return;
    }
    ctx->pc = 0x2129ACu;
label_2129ac:
    // 0x2129ac: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x2129acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x2129b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2129b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2129b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2129b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2129bc: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x2129BCu;
    {
        const bool branch_taken_0x2129bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129BCu;
        // 0x2129c0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129bc) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x2129C4u;
    // 0x2129c4: 0x0  nop
    ctx->pc = 0x2129c4u;
    // NOP
label_2129c8:
    // 0x2129c8: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2129c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2129cc:
    // 0x2129cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2129CCu;
    {
        const bool branch_taken_0x2129cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129CCu;
        // 0x2129d0: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129cc) {
            ctx->pc = 0x2129DCu;
            goto label_2129dc;
        }
    }
    ctx->pc = 0x2129D4u;
    // 0x2129d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2129d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2129d8: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2129d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_2129dc:
    // 0x2129dc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2129dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2129e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2129e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2129e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2129E4u;
    {
        const bool branch_taken_0x2129e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129E4u;
        // 0x2129e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129e4) {
            ctx->pc = 0x212A10u;
            goto label_212a10;
        }
    }
    ctx->pc = 0x2129ECu;
    // 0x2129ec: 0x12803c  dsll32      $s0, $s2, 0
    ctx->pc = 0x2129ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2129f0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2129f0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2129f4: 0x12123a  dsrl        $v0, $s2, 8
    ctx->pc = 0x2129f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
    // 0x2129f8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x2129f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2129fc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2129fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x212a00: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x212A00u;
    SET_GPR_U32(ctx, 31, 0x212A08u);
    ctx->pc = 0x212A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A00u;
    // 0x212a04: 0x82202d  daddu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x212A00u, 0x212A08u)) {
        return;
    }
    ctx->pc = 0x212A08u;
label_212a08:
    // 0x212a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212A08u;
    {
        const bool branch_taken_0x212a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A08u;
        // 0x212a0c: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a08) {
            ctx->pc = 0x212A20u;
            goto label_212a20;
        }
    }
    ctx->pc = 0x212A10u;
label_212a10:
    // 0x212a10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x212a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x212a14: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x212a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212a18: 0x100005af  b           . + 4 + (0x5AF << 2)
    ctx->pc = 0x212A18u;
    {
        const bool branch_taken_0x212a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A18u;
        // 0x212a1c: 0x244260a8  addiu       $v0, $v0, 0x60A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a18) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x212A20u;
label_212a20:
    // 0x212a20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x212a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x212a24: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212A24u;
    {
        const bool branch_taken_0x212a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A24u;
        // 0x212a28: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a24) {
            ctx->pc = 0x212A38u;
            goto label_212a38;
        }
    }
    ctx->pc = 0x212A2Cu;
    // 0x212a2c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x212a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212a30: 0x100005a9  b           . + 4 + (0x5A9 << 2)
    ctx->pc = 0x212A30u;
    {
        const bool branch_taken_0x212a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A30u;
        // 0x212a34: 0x244260c0  addiu       $v0, $v0, 0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a30) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x212A38u;
label_212a38:
    // 0x212a38: 0x12913a  dsrl        $s2, $s2, 4
    ctx->pc = 0x212a38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 4);
    // 0x212a3c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x212a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x212a40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x212a40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x212a44: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x212a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x212a48: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x212a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x212a4c: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x212a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x212a50: 0x75182b  sltu        $v1, $v1, $s5
    ctx->pc = 0x212a50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x212a54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212A54u;
    {
        const bool branch_taken_0x212a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A54u;
        // 0x212a58: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a54) {
            ctx->pc = 0x212A70u;
            goto label_212a70;
        }
    }
    ctx->pc = 0x212A5Cu;
    // 0x212a5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x212a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x212a60: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x212a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212a64: 0x1000059c  b           . + 4 + (0x59C << 2)
    ctx->pc = 0x212A64u;
    {
        const bool branch_taken_0x212a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A64u;
        // 0x212a68: 0x244260e0  addiu       $v0, $v0, 0x60E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a64) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x212A6Cu;
    // 0x212a6c: 0x0  nop
    ctx->pc = 0x212a6cu;
    // NOP
label_212a70:
    // 0x212a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212a74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a78: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x212a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x212a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a80: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x212a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x212a84: 0xc0887d4  jal         func_221F50
    ctx->pc = 0x212A84u;
    SET_GPR_U32(ctx, 31, 0x212A8Cu);
    ctx->pc = 0x212A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A84u;
    // 0x212a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x221F50u, 0x212A84u, 0x212A8Cu)) {
        return;
    }
    ctx->pc = 0x212A8Cu;
label_212a8c:
    // 0x212a8c: 0x32450200  andi        $a1, $s2, 0x200
    ctx->pc = 0x212a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x212a90: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212a90u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x212a94: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x212a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x212a98: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x212a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x212a9c: 0xfee20038  sd          $v0, 0x38($s7)
    ctx->pc = 0x212a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 56), GPR_U64(ctx, 2));
    // 0x212aa0: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x212aa0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x212aa4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x212aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x212aa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aac: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x212AACu;
    {
        const bool branch_taken_0x212aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AACu;
        // 0x212ab0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212aac) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x212AB4u;
    // 0x212ab4: 0x0  nop
    ctx->pc = 0x212ab4u;
    // NOP
label_212ab8:
    // 0x212ab8: 0x1280059b  beqz        $s4, . + 4 + (0x59B << 2)
    ctx->pc = 0x212AB8u;
    {
        const bool branch_taken_0x212ab8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AB8u;
        // 0x212abc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ab8) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x212AC0u;
    // 0x212ac0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x212ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x212ac4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x212ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x212ac8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x212ac8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x212acc: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x212accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x212ad0: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x212ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x212ad4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x212ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_212ad8:
    // 0x212ad8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x212ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x212adc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x212ADCu;
    {
        const bool branch_taken_0x212adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ADCu;
        // 0x212ae0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212adc) {
            ctx->pc = 0x212AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212ab8;
        }
    }
    ctx->pc = 0x212AE4u;
    // 0x212ae4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x212ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x212ae8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x212ae8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x212aec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x212aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x212af0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x212AF0u;
    {
        const bool branch_taken_0x212af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x212AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AF0u;
        // 0x212af4: 0xae640010  sw          $a0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212af0) {
            ctx->pc = 0x212B08u;
            goto label_212b08;
        }
    }
    ctx->pc = 0x212AF8u;
    // 0x212af8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x212af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x212afc: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x212afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212b00: 0x10000575  b           . + 4 + (0x575 << 2)
    ctx->pc = 0x212B00u;
    {
        const bool branch_taken_0x212b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B00u;
        // 0x212b04: 0x244260c0  addiu       $v0, $v0, 0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b00) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x212B08u;
label_212b08:
    // 0x212b08: 0x3082e000  andi        $v0, $a0, 0xE000
    ctx->pc = 0x212b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)57344);
    // 0x212b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212B0Cu;
    {
        const bool branch_taken_0x212b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b0c) {
            ctx->pc = 0x212B20u;
            goto label_212b20;
        }
    }
    ctx->pc = 0x212B14u;
    // 0x212b14: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212b18: 0x1000056f  b           . + 4 + (0x56F << 2)
    ctx->pc = 0x212B18u;
    {
        const bool branch_taken_0x212b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B18u;
        // 0x212b1c: 0x244260f8  addiu       $v0, $v0, 0x60F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b18) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x212B20u;
label_212b20:
    // 0x212b20: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x212b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212b24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x212B24u;
    {
        const bool branch_taken_0x212b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B24u;
        // 0x212b28: 0x12123a  dsrl        $v0, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b24) {
            ctx->pc = 0x212B3Cu;
            goto label_212b3c;
        }
    }
    ctx->pc = 0x212B2Cu;
    // 0x212b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212b30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x212b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x212b34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x212b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x212b38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x212b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_212b3c:
    // 0x212b3c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212b40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212b44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x212B44u;
    {
        const bool branch_taken_0x212b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B44u;
        // 0x212b48: 0x12123a  dsrl        $v0, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b44) {
            ctx->pc = 0x212B70u;
            goto label_212b70;
        }
    }
    ctx->pc = 0x212B4Cu;
    // 0x212b4c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x212b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x212b50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x212b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x212b54: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x212b54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x212b58: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x212b58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x212b5c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x212b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212b60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212b64: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212B64u;
    SET_GPR_U32(ctx, 31, 0x212B6Cu);
    ctx->pc = 0x212B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B64u;
    // 0x212b68: 0xde640018  ld          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212B64u, 0x212B6Cu)) {
        return;
    }
    ctx->pc = 0x212B6Cu;
label_212b6c:
    // 0x212b6c: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_212b70:
    // 0x212b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212b7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x212B7Cu;
    {
        const bool branch_taken_0x212b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B7Cu;
        // 0x212b80: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b7c) {
            ctx->pc = 0x212BA8u;
            goto label_212ba8;
        }
    }
    ctx->pc = 0x212B84u;
    // 0x212b84: 0x0  nop
    ctx->pc = 0x212b84u;
    // NOP
label_212b88:
    // 0x212b88: 0x12800567  beqz        $s4, . + 4 + (0x567 << 2)
    ctx->pc = 0x212B88u;
    {
        const bool branch_taken_0x212b88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B88u;
        // 0x212b8c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b88) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x212B90u;
    // 0x212b90: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x212b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x212b94: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x212b98: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x212b9c: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x212b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x212ba0: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x212ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x212ba4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x212ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_212ba8:
    // 0x212ba8: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x212ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x212bac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x212BACu;
    {
        const bool branch_taken_0x212bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212bac) {
            ctx->pc = 0x212B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212b88;
        }
    }
    ctx->pc = 0x212BB4u;
    // 0x212bb4: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212bb8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x212BB8u;
    {
        const bool branch_taken_0x212bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212bb8) {
            ctx->pc = 0x212BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212BB8u;
            // 0x212bbc: 0xfc520008  sd          $s2, 0x8($v0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BC0u;
            goto label_212bc0;
        }
    }
    ctx->pc = 0x212BC0u;
label_212bc0:
    // 0x212bc0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212bc4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212bc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x212BC8u;
    {
        const bool branch_taken_0x212bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC8u;
        // 0x212bcc: 0x123e3a  dsrl        $a3, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bc8) {
            ctx->pc = 0x212C10u;
            goto label_212c10;
        }
    }
    ctx->pc = 0x212BD0u;
    // 0x212bd0: 0x12123a  dsrl        $v0, $s2, 8
    ctx->pc = 0x212bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
    // 0x212bd4: 0x12243a  dsrl        $a0, $s2, 16
    ctx->pc = 0x212bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 16);
    // 0x212bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x212bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x212bdc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x212bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x212be0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x212be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x212be4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x212be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x212be8: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x212be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x212bec: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x212becu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x212bf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x212bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212bf4: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x212bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x212bf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212bfc: 0xa3a70023  sb          $a3, 0x23($sp)
    ctx->pc = 0x212bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 7));
    // 0x212c00: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212C00u;
    SET_GPR_U32(ctx, 31, 0x212C08u);
    ctx->pc = 0x212C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C00u;
    // 0x212c04: 0xde640018  ld          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212C00u, 0x212C08u)) {
        return;
    }
    ctx->pc = 0x212C08u;
label_212c08:
    // 0x212c08: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212c08u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x212c0c: 0x0  nop
    ctx->pc = 0x212c0cu;
    // NOP
label_212c10:
    // 0x212c10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x212c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x212c1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x212C1Cu;
    {
        const bool branch_taken_0x212c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C1Cu;
        // 0x212c20: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c1c) {
            ctx->pc = 0x212C48u;
            goto label_212c48;
        }
    }
    ctx->pc = 0x212C24u;
    // 0x212c24: 0x0  nop
    ctx->pc = 0x212c24u;
    // NOP
label_212c28:
    // 0x212c28: 0x1280053f  beqz        $s4, . + 4 + (0x53F << 2)
    ctx->pc = 0x212C28u;
    {
        const bool branch_taken_0x212c28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C28u;
        // 0x212c2c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c28) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x212C30u;
    // 0x212c30: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x212c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x212c34: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x212c34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x212c38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x212c38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x212c3c: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x212c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x212c40: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x212c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x212c44: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x212c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_212c48:
    // 0x212c48: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x212c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x212c4c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x212C4Cu;
    {
        const bool branch_taken_0x212c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212c4c) {
            ctx->pc = 0x212C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212c28;
        }
    }
    ctx->pc = 0x212C54u;
    // 0x212c54: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212c58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x212C58u;
    {
        const bool branch_taken_0x212c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C58u;
        // 0x212c5c: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c58) {
            ctx->pc = 0x212C7Cu;
            goto label_212c7c;
        }
    }
    ctx->pc = 0x212C60u;
    // 0x212c60: 0x122638  dsll        $a0, $s2, 24
    ctx->pc = 0x212c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << 24);
    // 0x212c64: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x212c64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x212c68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x212c6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x212c6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x212c70: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x212c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x212c74: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x212c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212c78: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x212c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_212c7c:
    // 0x212c7c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212c80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212c84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x212C84u;
    {
        const bool branch_taken_0x212c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C84u;
        // 0x212c88: 0x12123a  dsrl        $v0, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c84) {
            ctx->pc = 0x212CB0u;
            goto label_212cb0;
        }
    }
    ctx->pc = 0x212C8Cu;
    // 0x212c8c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x212c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x212c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x212c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x212c94: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x212c94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x212c98: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x212c98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x212c9c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x212c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212ca0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x212ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212ca4: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212CA4u;
    SET_GPR_U32(ctx, 31, 0x212CACu);
    ctx->pc = 0x212CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CA4u;
    // 0x212ca8: 0xde640018  ld          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212CA4u, 0x212CACu)) {
        return;
    }
    ctx->pc = 0x212CACu;
label_212cac:
    // 0x212cac: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212cacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_212cb0:
    // 0x212cb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212cb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212cbc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x212cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_212cc0:
    // 0x212cc0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212cc4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x212cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x212cc8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x212CC8u;
    {
        const bool branch_taken_0x212cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CC8u;
        // 0x212ccc: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cc8) {
            ctx->pc = 0x212D60u;
            goto label_212d60;
        }
    }
    ctx->pc = 0x212CD0u;
    // 0x212cd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212CD0u;
    {
        const bool branch_taken_0x212cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212cd0) {
            ctx->pc = 0x212D00u;
            goto label_212d00;
        }
    }
    ctx->pc = 0x212CD8u;
label_212cd8:
    // 0x212cd8: 0x12800513  beqz        $s4, . + 4 + (0x513 << 2)
    ctx->pc = 0x212CD8u;
    {
        const bool branch_taken_0x212cd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CD8u;
        // 0x212cdc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cd8) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x212CE0u;
    // 0x212ce0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x212ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x212ce4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x212ce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x212ce8: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x212ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x212cec: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x212cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x212cf0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x212cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x212cf4: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x212cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x212cf8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x212CF8u;
    {
        const bool branch_taken_0x212cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CF8u;
        // 0x212cfc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212cf8) {
            ctx->pc = 0x212CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212cd8;
        }
    }
    ctx->pc = 0x212D00u;
label_212d00:
    // 0x212d00: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x212d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x212d04: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x212d04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x212d08: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x212d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212d0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x212D0Cu;
    {
        const bool branch_taken_0x212d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D0Cu;
        // 0x212d10: 0xae63004c  sw          $v1, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d0c) {
            ctx->pc = 0x212D18u;
            goto label_212d18;
        }
    }
    ctx->pc = 0x212D14u;
    // 0x212d14: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x212d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_212d18:
    // 0x212d18: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212d1c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212d20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x212D20u;
    {
        const bool branch_taken_0x212d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D20u;
        // 0x212d24: 0x12123a  dsrl        $v0, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d20) {
            ctx->pc = 0x212D50u;
            goto label_212d50;
        }
    }
    ctx->pc = 0x212D28u;
    // 0x212d28: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x212d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x212d2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x212d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x212d30: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x212d30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x212d34: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x212d34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x212d38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x212d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212d3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x212d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212d40: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212D40u;
    SET_GPR_U32(ctx, 31, 0x212D48u);
    ctx->pc = 0x212D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D40u;
    // 0x212d44: 0xde640018  ld          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212D40u, 0x212D48u)) {
        return;
    }
    ctx->pc = 0x212D48u;
label_212d48:
    // 0x212d48: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212d48u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x212d4c: 0x0  nop
    ctx->pc = 0x212d4cu;
    // NOP
label_212d50:
    // 0x212d50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x212D54u;
    {
        const bool branch_taken_0x212d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D54u;
        // 0x212d58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d54) {
            ctx->pc = 0x212D6Cu;
            goto label_212d6c;
        }
    }
    ctx->pc = 0x212D5Cu;
    // 0x212d5c: 0x0  nop
    ctx->pc = 0x212d5cu;
    // NOP
label_212d60:
    // 0x212d60: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x212d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212d64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x212D64u;
    {
        const bool branch_taken_0x212d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212d64) {
            ctx->pc = 0x212D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D64u;
            // 0x212d68: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D6Cu;
            goto label_212d6c;
        }
    }
    ctx->pc = 0x212D6Cu;
label_212d6c:
    // 0x212d6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x212d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x212d70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x212d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_212d74:
    // 0x212d74: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212d78: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x212d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x212d7c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x212D7Cu;
    {
        const bool branch_taken_0x212d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D7Cu;
        // 0x212d80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d7c) {
            ctx->pc = 0x212E18u;
            goto label_212e18;
        }
    }
    ctx->pc = 0x212D84u;
    // 0x212d84: 0x8e70004c  lw          $s0, 0x4C($s3)
    ctx->pc = 0x212d84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x212d88: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x212d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212d8c: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x212d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x212d90: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x212d90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20));
    // 0x212d94: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x212D94u;
    {
        const bool branch_taken_0x212d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x212d94) {
            ctx->pc = 0x212D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D94u;
            // 0x212d98: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212E10u;
            goto label_212e10;
        }
    }
    ctx->pc = 0x212D9Cu;
    // 0x212d9c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x212d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212da0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x212DA0u;
    {
        const bool branch_taken_0x212da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212da0) {
            ctx->pc = 0x212DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212DA0u;
            // 0x212da4: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212DDCu;
            goto label_212ddc;
        }
    }
    ctx->pc = 0x212DA8u;
    // 0x212da8: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x212da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x212dac: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x212DACu;
    {
        const bool branch_taken_0x212dac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DACu;
        // 0x212db0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212dac) {
            ctx->pc = 0x212DD8u;
            goto label_212dd8;
        }
    }
    ctx->pc = 0x212DB4u;
    // 0x212db4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x212db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x212db8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x212db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x212dbc: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x212dbcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x212dc0: 0x553023  subu        $a2, $v0, $s5
    ctx->pc = 0x212dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x212dc4: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x212dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x212dc8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x212dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x212dcc: 0xf52021  addu        $a0, $a3, $s5
    ctx->pc = 0x212dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x212dd0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x212DD0u;
    SET_GPR_U32(ctx, 31, 0x212DD8u);
    ctx->pc = 0x212DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DD0u;
    // 0x212dd4: 0x202300a  movz        $a2, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x212DD0u, 0x212DD8u)) {
        return;
    }
    ctx->pc = 0x212DD8u;
label_212dd8:
    // 0x212dd8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_212ddc:
    // 0x212ddc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212de0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212DE0u;
    {
        const bool branch_taken_0x212de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DE0u;
        // 0x212de4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212de0) {
            ctx->pc = 0x212DF8u;
            goto label_212df8;
        }
    }
    ctx->pc = 0x212DE8u;
    // 0x212de8: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x212de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x212dec: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212DECu;
    SET_GPR_U32(ctx, 31, 0x212DF4u);
    ctx->pc = 0x212DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DECu;
    // 0x212df0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212DECu, 0x212DF4u)) {
        return;
    }
    ctx->pc = 0x212DF4u;
label_212df4:
    // 0x212df4: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212df4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_212df8:
    // 0x212df8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x212df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x212dfc: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x212dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x212e00: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x212e00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x212e04: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x212e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x212e08: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x212e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x212e0c: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x212e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_212e10:
    // 0x212e10: 0x144004c3  bnez        $v0, . + 4 + (0x4C3 << 2)
    ctx->pc = 0x212E10u;
    {
        const bool branch_taken_0x212e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E10u;
        // 0x212e14: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e10) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x212E18u;
label_212e18:
    // 0x212e18: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x212e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
    // 0x212e1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x212e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_212e20:
    // 0x212e20: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212e24: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x212e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x212e28: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x212E28u;
    {
        const bool branch_taken_0x212e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212e28) {
            ctx->pc = 0x212E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212E28u;
            // 0x212e2c: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212EC0u;
            goto label_212ec0;
        }
    }
    ctx->pc = 0x212E30u;
    // 0x212e30: 0x128004bb  beqz        $s4, . + 4 + (0x4BB << 2)
    ctx->pc = 0x212E30u;
    {
        const bool branch_taken_0x212e30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E30u;
        // 0x212e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e30) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x212E38u;
    // 0x212e38: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x212e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x212e3c: 0x0  nop
    ctx->pc = 0x212e3cu;
    // NOP
label_212e40:
    // 0x212e40: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212e44: 0x90550000  lbu         $s5, 0x0($v0)
    ctx->pc = 0x212e44u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212e48: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x212E48u;
    {
        const bool branch_taken_0x212e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E48u;
        // 0x212e4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e48) {
            ctx->pc = 0x212E7Cu;
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212E50u;
    // 0x212e50: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x212e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x212e54: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212E54u;
    {
        const bool branch_taken_0x212e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x212e54) {
            ctx->pc = 0x212E7Cu;
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212E5Cu;
    // 0x212e5c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x212e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x212e60: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x212e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x212e64: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x212e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x212e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212E68u;
    {
        const bool branch_taken_0x212e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E68u;
        // 0x212e6c: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e68) {
            ctx->pc = 0x212E7Cu;
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212E70u;
    // 0x212e70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x212e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x212e74: 0xa0550000  sb          $s5, 0x0($v0)
    ctx->pc = 0x212e74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x212e78: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x212e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
label_212e7c:
    // 0x212e7c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x212E7Cu;
    {
        const bool branch_taken_0x212e7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E7Cu;
        // 0x212e80: 0x214102b  sltu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e7c) {
            ctx->pc = 0x212E8Cu;
            goto label_212e8c;
        }
    }
    ctx->pc = 0x212E84u;
    // 0x212e84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x212E84u;
    {
        const bool branch_taken_0x212e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E84u;
        // 0x212e88: 0x2d01021  addu        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e84) {
            ctx->pc = 0x212E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212e40;
        }
    }
    ctx->pc = 0x212E8Cu;
label_212e8c:
    // 0x212e8c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212e90: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212E94u;
    {
        const bool branch_taken_0x212e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E94u;
        // 0x212e98: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e94) {
            ctx->pc = 0x212EACu;
            goto label_212eac;
        }
    }
    ctx->pc = 0x212E9Cu;
    // 0x212e9c: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x212e9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x212ea0: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212EA0u;
    SET_GPR_U32(ctx, 31, 0x212EA8u);
    ctx->pc = 0x212EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EA0u;
    // 0x212ea4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212EA0u, 0x212EA8u)) {
        return;
    }
    ctx->pc = 0x212EA8u;
label_212ea8:
    // 0x212ea8: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_212eac:
    // 0x212eac: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x212eacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x212eb0: 0x16a0049b  bnez        $s5, . + 4 + (0x49B << 2)
    ctx->pc = 0x212EB0u;
    {
        const bool branch_taken_0x212eb0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x212EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EB0u;
        // 0x212eb4: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212eb0) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x212EB8u;
    // 0x212eb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x212EB8u;
    {
        const bool branch_taken_0x212eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EB8u;
        // 0x212ebc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212eb8) {
            ctx->pc = 0x212ECCu;
            goto label_212ecc;
        }
    }
    ctx->pc = 0x212EC0u;
label_212ec0:
    // 0x212ec0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x212EC0u;
    {
        const bool branch_taken_0x212ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212ec0) {
            ctx->pc = 0x212EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212EC0u;
            // 0x212ec4: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212EC8u;
            goto label_212ec8;
        }
    }
    ctx->pc = 0x212EC8u;
label_212ec8:
    // 0x212ec8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x212ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_212ecc:
    // 0x212ecc: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x212eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
    // 0x212ed0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x212ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_212ed4:
    // 0x212ed4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212ed8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x212ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x212edc: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x212EDCu;
    {
        const bool branch_taken_0x212edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212edc) {
            ctx->pc = 0x212EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212EDCu;
            // 0x212ee0: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212F70u;
            goto label_212f70;
        }
    }
    ctx->pc = 0x212EE4u;
    // 0x212ee4: 0x1280048e  beqz        $s4, . + 4 + (0x48E << 2)
    ctx->pc = 0x212EE4u;
    {
        const bool branch_taken_0x212ee4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE4u;
        // 0x212ee8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ee4) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x212EECu;
    // 0x212eec: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x212eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_212ef0:
    // 0x212ef0: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x212ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212ef4: 0x90550000  lbu         $s5, 0x0($v0)
    ctx->pc = 0x212ef4u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212ef8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x212EF8u;
    {
        const bool branch_taken_0x212ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EF8u;
        // 0x212efc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ef8) {
            ctx->pc = 0x212F2Cu;
            goto label_212f2c;
        }
    }
    ctx->pc = 0x212F00u;
    // 0x212f00: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x212f04: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212F04u;
    {
        const bool branch_taken_0x212f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x212f04) {
            ctx->pc = 0x212F2Cu;
            goto label_212f2c;
        }
    }
    ctx->pc = 0x212F0Cu;
    // 0x212f0c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x212f10: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x212f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x212f14: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x212f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x212f18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212F18u;
    {
        const bool branch_taken_0x212f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F18u;
        // 0x212f1c: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f18) {
            ctx->pc = 0x212F2Cu;
            goto label_212f2c;
        }
    }
    ctx->pc = 0x212F20u;
    // 0x212f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x212f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x212f24: 0xa0550000  sb          $s5, 0x0($v0)
    ctx->pc = 0x212f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x212f28: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x212f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
label_212f2c:
    // 0x212f2c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x212F2Cu;
    {
        const bool branch_taken_0x212f2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F2Cu;
        // 0x212f30: 0x214102b  sltu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f2c) {
            ctx->pc = 0x212F3Cu;
            goto label_212f3c;
        }
    }
    ctx->pc = 0x212F34u;
    // 0x212f34: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x212F34u;
    {
        const bool branch_taken_0x212f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F34u;
        // 0x212f38: 0x2d01021  addu        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f34) {
            ctx->pc = 0x212EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212ef0;
        }
    }
    ctx->pc = 0x212F3Cu;
label_212f3c:
    // 0x212f3c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212f40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212F44u;
    {
        const bool branch_taken_0x212f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F44u;
        // 0x212f48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f44) {
            ctx->pc = 0x212F5Cu;
            goto label_212f5c;
        }
    }
    ctx->pc = 0x212F4Cu;
    // 0x212f4c: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x212f50: 0xc0889ce  jal         func_222738
    ctx->pc = 0x212F50u;
    SET_GPR_U32(ctx, 31, 0x212F58u);
    ctx->pc = 0x212F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F50u;
    // 0x212f54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x212F50u, 0x212F58u)) {
        return;
    }
    ctx->pc = 0x212F58u;
label_212f58:
    // 0x212f58: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x212f58u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_212f5c:
    // 0x212f5c: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x212f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x212f60: 0x16a0046f  bnez        $s5, . + 4 + (0x46F << 2)
    ctx->pc = 0x212F60u;
    {
        const bool branch_taken_0x212f60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F60u;
        // 0x212f64: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f60) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x212F68u;
    // 0x212f68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x212F68u;
    {
        const bool branch_taken_0x212f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F68u;
        // 0x212f6c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f68) {
            ctx->pc = 0x212F7Cu;
            goto label_212f7c;
        }
    }
    ctx->pc = 0x212F70u;
label_212f70:
    // 0x212f70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x212F70u;
    {
        const bool branch_taken_0x212f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212f70) {
            ctx->pc = 0x212F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212F70u;
            // 0x212f74: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212F78u;
            goto label_212f78;
        }
    }
    ctx->pc = 0x212F78u;
label_212f78:
    // 0x212f78: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x212f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_212f7c:
    // 0x212f7c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x212f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_212f80:
    // 0x212f80: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x212f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x212f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x212f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x212f8c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x212F8Cu;
    {
        const bool branch_taken_0x212f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F8Cu;
        // 0x212f90: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f8c) {
            ctx->pc = 0x212FF0u;
            goto label_212ff0;
        }
    }
    ctx->pc = 0x212F94u;
    // 0x212f94: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x212F94u;
    {
        const bool branch_taken_0x212f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212f94) {
            ctx->pc = 0x212F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212F94u;
            // 0x212f98: 0x96620018  lhu         $v0, 0x18($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212FD0u;
            goto label_212fd0;
        }
    }
    ctx->pc = 0x212F9Cu;
    // 0x212f9c: 0x0  nop
    ctx->pc = 0x212f9cu;
    // NOP
label_212fa0:
    // 0x212fa0: 0x12800461  beqz        $s4, . + 4 + (0x461 << 2)
    ctx->pc = 0x212FA0u;
    {
        const bool branch_taken_0x212fa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FA0u;
        // 0x212fa4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fa0) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x212FA8u;
    // 0x212fa8: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x212fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x212fac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x212facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x212fb0: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x212fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x212fb4: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x212fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x212fb8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x212fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x212fbc: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x212fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x212fc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x212FC0u;
    {
        const bool branch_taken_0x212fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FC0u;
        // 0x212fc4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fc0) {
            ctx->pc = 0x212FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212fa0;
        }
    }
    ctx->pc = 0x212FC8u;
    // 0x212fc8: 0x96620018  lhu         $v0, 0x18($s3)
    ctx->pc = 0x212fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x212fcc: 0x0  nop
    ctx->pc = 0x212fccu;
    // NOP
label_212fd0:
    // 0x212fd0: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x212FD0u;
    {
        const bool branch_taken_0x212fd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x212FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FD0u;
        // 0x212fd4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fd0) {
            ctx->pc = 0x212FE4u;
            goto label_212fe4;
        }
    }
    ctx->pc = 0x212FD8u;
    // 0x212fd8: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x212fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x212fdc: 0x1000043e  b           . + 4 + (0x43E << 2)
    ctx->pc = 0x212FDCu;
    {
        const bool branch_taken_0x212fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FDCu;
        // 0x212fe0: 0x24426118  addiu       $v0, $v0, 0x6118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fdc) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x212FE4u;
label_212fe4:
    // 0x212fe4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fe8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212fec: 0x0  nop
    ctx->pc = 0x212fecu;
    // NOP
label_212ff0:
    // 0x212ff0: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x212ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x212ff4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212FF4u;
    {
        const bool branch_taken_0x212ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FF4u;
        // 0x212ff8: 0x41243  sra         $v0, $a0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ff4) {
            ctx->pc = 0x213010u;
            goto label_213010;
        }
    }
    ctx->pc = 0x212FFCu;
    // 0x212ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213004: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x213004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x213008: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x213008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x21300c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x21300cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_213010:
    // 0x213010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213018: 0xc0889ce  jal         func_222738
    ctx->pc = 0x213018u;
    SET_GPR_U32(ctx, 31, 0x213020u);
    ctx->pc = 0x21301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213018u;
    // 0x21301c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x213018u, 0x213020u)) {
        return;
    }
    ctx->pc = 0x213020u;
label_213020:
    // 0x213020: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x213020u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x213024: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x213024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x213028: 0xfee20038  sd          $v0, 0x38($s7)
    ctx->pc = 0x213028u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 56), GPR_U64(ctx, 2));
    // 0x21302c: 0x1000fe32  b           . + 4 + (-0x1CE << 2)
    ctx->pc = 0x21302Cu;
    {
        const bool branch_taken_0x21302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21302Cu;
        // 0x213030: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21302c) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x213034u;
    // 0x213034: 0x0  nop
    ctx->pc = 0x213034u;
    // NOP
label_213038:
    // 0x213038: 0x1280043b  beqz        $s4, . + 4 + (0x43B << 2)
    ctx->pc = 0x213038u;
    {
        const bool branch_taken_0x213038 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213038u;
        // 0x21303c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213038) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213040u;
    // 0x213040: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213044: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213048: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x21304c: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x21304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213050: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213054: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_213058:
    // 0x213058: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x213058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x21305c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21305Cu;
    {
        const bool branch_taken_0x21305c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21305Cu;
        // 0x213060: 0x121e3a  dsrl        $v1, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21305c) {
            ctx->pc = 0x213038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213038;
        }
    }
    ctx->pc = 0x213064u;
    // 0x213064: 0x12123a  dsrl        $v0, $s2, 8
    ctx->pc = 0x213064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
    // 0x213068: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x213068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21306c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x213070: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x213070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213074: 0x3244ff00  andi        $a0, $s2, 0xFF00
    ctx->pc = 0x213074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
    // 0x213078: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x213078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x21307c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x21307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x213080: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x213080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x213084: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x213084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x213088: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x213088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21308c: 0xfe630018  sd          $v1, 0x18($s3)
    ctx->pc = 0x21308cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
    // 0x213090: 0xfee30038  sd          $v1, 0x38($s7)
    ctx->pc = 0x213090u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 56), GPR_U64(ctx, 3));
    // 0x213094: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21309c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2130a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2130a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2130a4: 0x0  nop
    ctx->pc = 0x2130a4u;
    // NOP
label_2130a8:
    // 0x2130a8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2130ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2130ACu;
    {
        const bool branch_taken_0x2130ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130ACu;
        // 0x2130b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130ac) {
            ctx->pc = 0x2130E0u;
            goto label_2130e0;
        }
    }
    ctx->pc = 0x2130B4u;
    // 0x2130b4: 0xaef40004  sw          $s4, 0x4($s7)
    ctx->pc = 0x2130b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 20));
    // 0x2130b8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2130b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2130bc: 0xaee40010  sw          $a0, 0x10($s7)
    ctx->pc = 0x2130bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 4));
    // 0x2130c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2130c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2130c4: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x2130c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x2130c8: 0xaee50014  sw          $a1, 0x14($s7)
    ctx->pc = 0x2130c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 5));
    // 0x2130cc: 0xae710048  sw          $s1, 0x48($s3)
    ctx->pc = 0x2130ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 17));
    // 0x2130d0: 0xfe720040  sd          $s2, 0x40($s3)
    ctx->pc = 0x2130d0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 18));
    // 0x2130d4: 0x1000046d  b           . + 4 + (0x46D << 2)
    ctx->pc = 0x2130D4u;
    {
        const bool branch_taken_0x2130d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130D4u;
        // 0x2130d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130d4) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x2130DCu;
    // 0x2130dc: 0x0  nop
    ctx->pc = 0x2130dcu;
    // NOP
label_2130e0:
    // 0x2130e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2130e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130e4: 0xc0887d4  jal         func_221F50
    ctx->pc = 0x2130E4u;
    SET_GPR_U32(ctx, 31, 0x2130ECu);
    ctx->pc = 0x2130E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130E4u;
    // 0x2130e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x221F50u, 0x2130E4u, 0x2130ECu)) {
        return;
    }
    ctx->pc = 0x2130ECu;
label_2130ec:
    // 0x2130ec: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x2130ecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x2130f0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2130f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2130f4: 0xfee20038  sd          $v0, 0x38($s7)
    ctx->pc = 0x2130f4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 56), GPR_U64(ctx, 2));
    // 0x2130f8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2130f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2130fc:
    // 0x2130fc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2130fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213100: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x213100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x213104: 0x10c20408  beq         $a2, $v0, . + 4 + (0x408 << 2)
    ctx->pc = 0x213104u;
    {
        const bool branch_taken_0x213104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x213108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213104u;
        // 0x213108: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213104) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x21310Cu;
label_21310c:
    // 0x21310c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x21310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x213110: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x213110u;
    {
        const bool branch_taken_0x213110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213110u;
        // 0x213114: 0x32220007  andi        $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213110) {
            ctx->pc = 0x213150u;
            goto label_213150;
        }
    }
    ctx->pc = 0x213118u;
    // 0x213118: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x213118u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21311c: 0x529016  dsrlv       $s2, $s2, $v0
    ctx->pc = 0x21311cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x213120: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x213120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x213124: 0x1000fdf4  b           . + 4 + (-0x20C << 2)
    ctx->pc = 0x213124u;
    {
        const bool branch_taken_0x213124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213124u;
        // 0x213128: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213124) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x21312Cu;
    // 0x21312c: 0x0  nop
    ctx->pc = 0x21312cu;
    // NOP
label_213130:
    // 0x213130: 0x128003fd  beqz        $s4, . + 4 + (0x3FD << 2)
    ctx->pc = 0x213130u;
    {
        const bool branch_taken_0x213130 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213130u;
        // 0x213134: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213130) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213138u;
    // 0x213138: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21313c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x21313cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213140: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213140u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x213144: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213148: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21314c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x21314cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_213150:
    // 0x213150: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x213150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x213154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x213154u;
    {
        const bool branch_taken_0x213154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213154u;
        // 0x213158: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213154) {
            ctx->pc = 0x213130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213130;
        }
    }
    ctx->pc = 0x21315Cu;
    // 0x21315c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x21315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213160: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x213160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x213164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213168: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x213168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x21316c: 0x12907a  dsrl        $s2, $s2, 1
    ctx->pc = 0x21316cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 1);
    // 0x213170: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x213170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213174: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x213174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x213178: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x213178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x21317c: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21317Cu;
    {
        const bool branch_taken_0x21317c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x213180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21317Cu;
        // 0x213180: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21317c) {
            ctx->pc = 0x2131B4u;
            goto label_2131b4;
        }
    }
    ctx->pc = 0x213184u;
    // 0x213184: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213184u;
    {
        const bool branch_taken_0x213184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x213188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213184u;
        // 0x213188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213184) {
            ctx->pc = 0x2131A8u;
            goto label_2131a8;
        }
    }
    ctx->pc = 0x21318Cu;
    // 0x21318c: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21318Cu;
    {
        const bool branch_taken_0x21318c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x213190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21318Cu;
        // 0x213190: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21318c) {
            ctx->pc = 0x2131E8u;
            goto label_2131e8;
        }
    }
    ctx->pc = 0x213194u;
    // 0x213194: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x213194u;
    {
        const bool branch_taken_0x213194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x213198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213194u;
        // 0x213198: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213194) {
            ctx->pc = 0x2131F4u;
            goto label_2131f4;
        }
    }
    ctx->pc = 0x21319Cu;
    // 0x21319c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x21319Cu;
    {
        const bool branch_taken_0x21319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21319Cu;
        // 0x2131a0: 0x1290ba  dsrl        $s2, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21319c) {
            ctx->pc = 0x213208u;
            goto label_213208;
        }
    }
    ctx->pc = 0x2131A4u;
    // 0x2131a4: 0x0  nop
    ctx->pc = 0x2131a4u;
    // NOP
label_2131a8:
    // 0x2131a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2131ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2131ACu;
    {
        const bool branch_taken_0x2131ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131ACu;
        // 0x2131b0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131ac) {
            ctx->pc = 0x213204u;
            goto label_213204;
        }
    }
    ctx->pc = 0x2131B4u;
label_2131b4:
    // 0x2131b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2131b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2131bc: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x2131bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x2131c0: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x2131c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x2131c4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2131c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2131c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2131c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2131cc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2131ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2131d0: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x2131d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
    // 0x2131d4: 0xae640060  sw          $a0, 0x60($s3)
    ctx->pc = 0x2131d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 4));
    // 0x2131d8: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x2131d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x2131dc: 0xae650064  sw          $a1, 0x64($s3)
    ctx->pc = 0x2131dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 5));
    // 0x2131e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2131E0u;
    {
        const bool branch_taken_0x2131e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131E0u;
        // 0x2131e4: 0xae660000  sw          $a2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131e0) {
            ctx->pc = 0x213204u;
            goto label_213204;
        }
    }
    ctx->pc = 0x2131E8u;
label_2131e8:
    // 0x2131e8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2131ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2131ECu;
    {
        const bool branch_taken_0x2131ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2131F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131ECu;
        // 0x2131f0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131ec) {
            ctx->pc = 0x213204u;
            goto label_213204;
        }
    }
    ctx->pc = 0x2131F4u;
label_2131f4:
    // 0x2131f4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2131f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2131f8: 0x24426130  addiu       $v0, $v0, 0x6130
    ctx->pc = 0x2131f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24880));
    // 0x2131fc: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x2131fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
    // 0x213200: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x213200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_213204:
    // 0x213204: 0x1290ba  dsrl        $s2, $s2, 2
    ctx->pc = 0x213204u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 2);
label_213208:
    // 0x213208: 0x1000fdbb  b           . + 4 + (-0x245 << 2)
    ctx->pc = 0x213208u;
    {
        const bool branch_taken_0x213208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213208u;
        // 0x21320c: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213208) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x213210u;
label_213210:
    // 0x213210: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x213210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x213214: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x213214u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213218: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x213218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x21321c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21321Cu;
    {
        const bool branch_taken_0x21321c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21321Cu;
        // 0x213220: 0x529016  dsrlv       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21321c) {
            ctx->pc = 0x213250u;
            goto label_213250;
        }
    }
    ctx->pc = 0x213224u;
    // 0x213224: 0x0  nop
    ctx->pc = 0x213224u;
    // NOP
label_213228:
    // 0x213228: 0x128003bf  beqz        $s4, . + 4 + (0x3BF << 2)
    ctx->pc = 0x213228u;
    {
        const bool branch_taken_0x213228 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213228u;
        // 0x21322c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213228) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213230u;
    // 0x213230: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213234: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213238: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x21323c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x21323cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213240: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213244: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x213244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x213248: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213248u;
    {
        const bool branch_taken_0x213248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213248u;
        // 0x21324c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213248) {
            ctx->pc = 0x213228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213228;
        }
    }
    ctx->pc = 0x213250u;
label_213250:
    // 0x213250: 0x12143a  dsrl        $v0, $s2, 16
    ctx->pc = 0x213250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 16);
    // 0x213254: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x213254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x213258: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x213258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x21325c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21325Cu;
    {
        const bool branch_taken_0x21325c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21325Cu;
        // 0x213260: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21325c) {
            ctx->pc = 0x213270u;
            goto label_213270;
        }
    }
    ctx->pc = 0x213264u;
    // 0x213264: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x213264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x213268: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x213268u;
    {
        const bool branch_taken_0x213268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213268u;
        // 0x21326c: 0x24426148  addiu       $v0, $v0, 0x6148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213268) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x213270u;
label_213270:
    // 0x213270: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x213270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213274: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x213274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x213278: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x213278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21327c: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x21327cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x213280: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213288: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x213288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21328c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x21328cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_213290:
    // 0x213290: 0x8e70004c  lw          $s0, 0x4C($s3)
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x213294: 0x1200021e  beqz        $s0, . + 4 + (0x21E << 2)
    ctx->pc = 0x213294u;
    {
        const bool branch_taken_0x213294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213294u;
        // 0x213298: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213294) {
            ctx->pc = 0x213B10u;
            goto label_213b10;
        }
    }
    ctx->pc = 0x21329Cu;
    // 0x21329c: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x21329cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2132a0: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x2132a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20));
    // 0x2132a4: 0xf0182b  sltu        $v1, $a3, $s0
    ctx->pc = 0x2132a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2132a8: 0xe3800b  movn        $s0, $a3, $v1
    ctx->pc = 0x2132a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7));
    // 0x2132ac: 0x1200039c  beqz        $s0, . + 4 + (0x39C << 2)
    ctx->pc = 0x2132ACu;
    {
        const bool branch_taken_0x2132ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132ACu;
        // 0x2132b0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132ac) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x2132B4u;
    // 0x2132b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2132b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2132b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132bc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2132BCu;
    SET_GPR_U32(ctx, 31, 0x2132C4u);
    ctx->pc = 0x2132C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132BCu;
    // 0x2132c0: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2132BCu, 0x2132C4u)) {
        return;
    }
    ctx->pc = 0x2132C4u;
label_2132c4:
    // 0x2132c4: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2132c8: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x2132c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2132cc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2132ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2132d0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2132d4: 0x1104023  subu        $t0, $t0, $s0
    ctx->pc = 0x2132d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2132d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2132dc: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x2132dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x2132e0: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2132e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2132e4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2132e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2132e8: 0x1000fd83  b           . + 4 + (-0x27D << 2)
    ctx->pc = 0x2132E8u;
    {
        const bool branch_taken_0x2132e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132E8u;
        // 0x2132ec: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132e8) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x2132F0u;
label_2132f0:
    // 0x2132f0: 0x1280038d  beqz        $s4, . + 4 + (0x38D << 2)
    ctx->pc = 0x2132F0u;
    {
        const bool branch_taken_0x2132f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132F0u;
        // 0x2132f4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f0) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x2132F8u;
    // 0x2132f8: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2132f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2132fc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2132fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213300: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x213304: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213308: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21330c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x21330cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_213310:
    // 0x213310: 0x2e22000e  sltiu       $v0, $s1, 0xE
    ctx->pc = 0x213310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x213314: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x213314u;
    {
        const bool branch_taken_0x213314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213314) {
            ctx->pc = 0x2132F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2132f0;
        }
    }
    ctx->pc = 0x21331Cu;
    // 0x21331c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x21331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213320: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x213320u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x213324: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x213324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x213328: 0x24420101  addiu       $v0, $v0, 0x101
    ctx->pc = 0x213328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 257));
    // 0x21332c: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x21332cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
    // 0x213330: 0x12917a  dsrl        $s2, $s2, 5
    ctx->pc = 0x213330u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 5);
    // 0x213334: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213338: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21333c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x21333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x213340: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x213344: 0xae640070  sw          $a0, 0x70($s3)
    ctx->pc = 0x213344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 4));
    // 0x213348: 0x12917a  dsrl        $s2, $s2, 5
    ctx->pc = 0x213348u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 5);
    // 0x21334c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x21334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213350: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213350u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213354: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x213354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x213358: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x213358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21335c: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x21335cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x213360: 0x12913a  dsrl        $s2, $s2, 4
    ctx->pc = 0x213360u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 4);
    // 0x213364: 0x2c42011f  sltiu       $v0, $v0, 0x11F
    ctx->pc = 0x213364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)287) ? 1 : 0);
    // 0x213368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213368u;
    {
        const bool branch_taken_0x213368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213368u;
        // 0x21336c: 0x2631fff2  addiu       $s1, $s1, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213368) {
            ctx->pc = 0x213380u;
            goto label_213380;
        }
    }
    ctx->pc = 0x213370u;
    // 0x213370: 0x2c82001f  sltiu       $v0, $a0, 0x1F
    ctx->pc = 0x213370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x213374: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x213374u;
    {
        const bool branch_taken_0x213374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213374) {
            ctx->pc = 0x213378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213374u;
            // 0x213378: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213390u;
            goto label_213390;
        }
    }
    ctx->pc = 0x21337Cu;
    // 0x21337c: 0x0  nop
    ctx->pc = 0x21337cu;
    // NOP
label_213380:
    // 0x213380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x213380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x213384: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x213388: 0x10000353  b           . + 4 + (0x353 << 2)
    ctx->pc = 0x213388u;
    {
        const bool branch_taken_0x213388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213388u;
        // 0x21338c: 0x24426168  addiu       $v0, $v0, 0x6168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213388) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x213390u;
label_213390:
    // 0x213390: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x213390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x213394: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x213394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_213398:
    // 0x213398: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x213398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x21339c: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x21339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2133a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2133a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2133a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2133A4u;
    {
        const bool branch_taken_0x2133a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133A4u;
        // 0x2133a8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133a4) {
            ctx->pc = 0x213420u;
            goto label_213420;
        }
    }
    ctx->pc = 0x2133ACu;
    // 0x2133ac: 0x2666007c  addiu       $a2, $s3, 0x7C
    ctx->pc = 0x2133acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x2133b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2133B0u;
    {
        const bool branch_taken_0x2133b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2133B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133B0u;
        // 0x2133b4: 0x24476080  addiu       $a3, $v0, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133b0) {
            ctx->pc = 0x2133D8u;
            goto label_2133d8;
        }
    }
    ctx->pc = 0x2133B8u;
label_2133b8:
    // 0x2133b8: 0x5280035b  beql        $s4, $zero, . + 4 + (0x35B << 2)
    ctx->pc = 0x2133B8u;
    {
        const bool branch_taken_0x2133b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2133b8) {
            ctx->pc = 0x2133BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2133B8u;
            // 0x2133bc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x2133C0u;
    // 0x2133c0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2133c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2133c4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2133c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2133c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2133c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2133cc: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x2133ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2133d0: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x2133d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2133d4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2133d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2133d8:
    // 0x2133d8: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2133d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2133dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2133DCu;
    {
        const bool branch_taken_0x2133dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2133E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133DCu;
        // 0x2133e0: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133dc) {
            ctx->pc = 0x2133B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2133b8;
        }
    }
    ctx->pc = 0x2133E4u;
    // 0x2133e4: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x2133e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2133e8: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x2133e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2133ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2133ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2133f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2133f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2133f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2133f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2133f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2133f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2133fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2133fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x213400: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x213400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x213404: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x213404u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x213408: 0xae640074  sw          $a0, 0x74($s3)
    ctx->pc = 0x213408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 4));
    // 0x21340c: 0x1290fa  dsrl        $s2, $s2, 3
    ctx->pc = 0x21340cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
    // 0x213410: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x213410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x213414: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x213414u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213418: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x213418u;
    {
        const bool branch_taken_0x213418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213418u;
        // 0x21341c: 0x2631fffd  addiu       $s1, $s1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213418) {
            ctx->pc = 0x2133D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2133d8;
        }
    }
    ctx->pc = 0x213420u;
label_213420:
    // 0x213420: 0x8e660074  lw          $a2, 0x74($s3)
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x213424: 0x266b007c  addiu       $t3, $s3, 0x7C
    ctx->pc = 0x213424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x213428: 0x266c053c  addiu       $t4, $s3, 0x53C
    ctx->pc = 0x213428u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 1340));
    // 0x21342c: 0x26670078  addiu       $a3, $s3, 0x78
    ctx->pc = 0x21342cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x213430: 0x2cc20013  sltiu       $v0, $a2, 0x13
    ctx->pc = 0x213430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x213434: 0x26680060  addiu       $t0, $s3, 0x60
    ctx->pc = 0x213434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x213438: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x213438u;
    {
        const bool branch_taken_0x213438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213438u;
        // 0x21343c: 0x266902fc  addiu       $t1, $s3, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213438) {
            ctx->pc = 0x21347Cu;
            goto label_21347c;
        }
    }
    ctx->pc = 0x213440u;
    // 0x213440: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x213440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x213444: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x213444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213448: 0x244d6080  addiu       $t5, $v0, 0x6080
    ctx->pc = 0x213448u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
    // 0x21344c: 0x0  nop
    ctx->pc = 0x21344cu;
    // NOP
label_213450:
    // 0x213450: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x213450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x213454: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x213454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x213458: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x213458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x21345c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21345cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213460: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x213460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213464: 0x2cc50013  sltiu       $a1, $a2, 0x13
    ctx->pc = 0x213464u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x213468: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21346c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x21346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x213470: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x213470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x213474: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x213474u;
    {
        const bool branch_taken_0x213474 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x213478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213474u;
        // 0x213478: 0xae640074  sw          $a0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213474) {
            ctx->pc = 0x213450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213450;
        }
    }
    ctx->pc = 0x21347Cu;
label_21347c:
    // 0x21347c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x21347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x213480: 0xae6c0058  sw          $t4, 0x58($s3)
    ctx->pc = 0x213480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 12));
    // 0x213484: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x213484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x213488: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x213488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21348c: 0xae6c0078  sw          $t4, 0x78($s3)
    ctx->pc = 0x21348cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 12));
    // 0x213490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213494: 0xc0850dc  jal         func_214370
    ctx->pc = 0x213494u;
    SET_GPR_U32(ctx, 31, 0x21349Cu);
    ctx->pc = 0x213498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213494u;
    // 0x213498: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214370u, 0x213494u, 0x21349Cu)) {
        return;
    }
    ctx->pc = 0x21349Cu;
label_21349c:
    // 0x21349c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21349Cu;
    {
        const bool branch_taken_0x21349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21349Cu;
        // 0x2134a0: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21349c) {
            ctx->pc = 0x2134CCu;
            goto label_2134cc;
        }
    }
    ctx->pc = 0x2134A4u;
    // 0x2134a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2134a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2134a8: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2134a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2134ac: 0x1000030a  b           . + 4 + (0x30A << 2)
    ctx->pc = 0x2134ACu;
    {
        const bool branch_taken_0x2134ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134ACu;
        // 0x2134b0: 0x24426190  addiu       $v0, $v0, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134ac) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x2134B4u;
label_2134b4:
    // 0x2134b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2134b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2134b8: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2134b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2134bc: 0x244261b0  addiu       $v0, $v0, 0x61B0
    ctx->pc = 0x2134bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
    // 0x2134c0: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x2134c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
    // 0x2134c4: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2134C4u;
    {
        const bool branch_taken_0x2134c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134C4u;
        // 0x2134c8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134c4) {
            ctx->pc = 0x21380Cu;
            goto label_21380c;
        }
    }
    ctx->pc = 0x2134CCu;
label_2134cc:
    // 0x2134cc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2134ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2134d0: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2134d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2134d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2134d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2134d8:
    // 0x2134d8: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x2134d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x2134dc: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x2134dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2134e0: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2134e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2134e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2134e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2134e8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2134e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2134ec: 0x506000c8  beql        $v1, $zero, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2134ECu;
    {
        const bool branch_taken_0x2134ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2134ec) {
            ctx->pc = 0x2134F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2134ECu;
            // 0x2134f0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213810u;
            goto label_213810;
        }
    }
    ctx->pc = 0x2134F4u;
    // 0x2134f4: 0x2667007c  addiu       $a3, $s3, 0x7C
    ctx->pc = 0x2134f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x2134f8: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x2134f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2134fc: 0x0  nop
    ctx->pc = 0x2134fcu;
    // NOP
label_213500:
    // 0x213500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213504: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213508: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213508u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21350c: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x21350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x213510: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x213510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x213514: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213518: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21351c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21351cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x213520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213524: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x213524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x213528: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x213528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x21352c: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x21352cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213530: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x213530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213534: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213538: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x213538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21353c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21353Cu;
    {
        const bool branch_taken_0x21353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21353Cu;
        // 0x213540: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21353c) {
            ctx->pc = 0x2135B0u;
            goto label_2135b0;
        }
    }
    ctx->pc = 0x213544u;
    // 0x213544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213548:
    // 0x213548: 0x128002f7  beqz        $s4, . + 4 + (0x2F7 << 2)
    ctx->pc = 0x213548u;
    {
        const bool branch_taken_0x213548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213548u;
        // 0x21354c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213548) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213550u;
    // 0x213550: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213554: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213558: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x21355c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x21355cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213560: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213564: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213568: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21356c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x21356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x213570: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x213570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x213574: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x213574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x213578: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21357c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213580: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x213584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213588: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x213588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x21358c: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x21358cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x213590: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x213590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213594: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x213594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213598: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x21359c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x21359cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2135a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2135A0u;
    {
        const bool branch_taken_0x2135a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2135A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135A0u;
        // 0x2135a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135a0) {
            ctx->pc = 0x213548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213548;
        }
    }
    ctx->pc = 0x2135A8u;
    // 0x2135a8: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2135a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2135ac: 0x0  nop
    ctx->pc = 0x2135acu;
    // NOP
label_2135b0:
    // 0x2135b0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2135b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2135b4: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x2135b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2135b8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2135B8u;
    {
        const bool branch_taken_0x2135b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135B8u;
        // 0x2135bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135b8) {
            ctx->pc = 0x213628u;
            goto label_213628;
        }
    }
    ctx->pc = 0x2135C0u;
    // 0x2135c0: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2135c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2135c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2135c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2135c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2135cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2135CCu;
    {
        const bool branch_taken_0x2135cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135CCu;
        // 0x2135d0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135cc) {
            ctx->pc = 0x213600u;
            goto label_213600;
        }
    }
    ctx->pc = 0x2135D4u;
    // 0x2135d4: 0x0  nop
    ctx->pc = 0x2135d4u;
    // NOP
label_2135d8:
    // 0x2135d8: 0x528002d3  beql        $s4, $zero, . + 4 + (0x2D3 << 2)
    ctx->pc = 0x2135D8u;
    {
        const bool branch_taken_0x2135d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2135d8) {
            ctx->pc = 0x2135DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2135D8u;
            // 0x2135dc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x2135E0u;
    // 0x2135e0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2135e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2135e4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2135e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2135e8: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x2135e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2135ec: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x2135ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2135f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2135f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2135f4: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2135f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2135f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2135F8u;
    {
        const bool branch_taken_0x2135f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2135FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135F8u;
        // 0x2135fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135f8) {
            ctx->pc = 0x2135D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2135d8;
        }
    }
    ctx->pc = 0x213600u;
label_213600:
    // 0x213600: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x213600u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x213604: 0xb29016  dsrlv       $s2, $s2, $a1
    ctx->pc = 0x213604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x213608: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x213608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x21360c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21360cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x213610: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x213610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x213614: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x213614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x213618: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x213618u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x21361c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x21361Cu;
    {
        const bool branch_taken_0x21361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21361Cu;
        // 0x213620: 0xae630074  sw          $v1, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21361c) {
            ctx->pc = 0x2137F0u;
            goto label_2137f0;
        }
    }
    ctx->pc = 0x213624u;
    // 0x213624: 0x0  nop
    ctx->pc = 0x213624u;
    // NOP
label_213628:
    // 0x213628: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x213628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21362c: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21362Cu;
    {
        const bool branch_taken_0x21362c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x213630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21362Cu;
        // 0x213630: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21362c) {
            ctx->pc = 0x2136B8u;
            goto label_2136b8;
        }
    }
    ctx->pc = 0x213634u;
    // 0x213634: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213638: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x213638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x21363c: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x21363cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x213640: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x213640u;
    {
        const bool branch_taken_0x213640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213640u;
        // 0x213644: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213640) {
            ctx->pc = 0x213678u;
            goto label_213678;
        }
    }
    ctx->pc = 0x213648u;
    // 0x213648: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x213648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21364c: 0x0  nop
    ctx->pc = 0x21364cu;
    // NOP
label_213650:
    // 0x213650: 0x128002b5  beqz        $s4, . + 4 + (0x2B5 << 2)
    ctx->pc = 0x213650u;
    {
        const bool branch_taken_0x213650 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213650u;
        // 0x213654: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213650) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213658u;
    // 0x213658: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21365c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x21365cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213660: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213664: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213668: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x21366c: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x21366cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213670: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213670u;
    {
        const bool branch_taken_0x213670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213670u;
        // 0x213674: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213670) {
            ctx->pc = 0x213650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213650;
        }
    }
    ctx->pc = 0x213678u;
label_213678:
    // 0x213678: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x213678u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x21367c: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x21367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x213680: 0x1080ff8c  beqz        $a0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x213680u;
    {
        const bool branch_taken_0x213680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x213684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213680u;
        // 0x213684: 0xb29016  dsrlv       $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213680) {
            ctx->pc = 0x2134B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2134b4;
        }
    }
    ctx->pc = 0x213688u;
    // 0x213688: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x213688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21368c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x21368cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213690: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213690u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213694: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x213694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x213698: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x213698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x21369c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2136a0: 0x24700003  addiu       $s0, $v1, 0x3
    ctx->pc = 0x2136a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2136a4: 0x94550000  lhu         $s5, 0x0($v0)
    ctx->pc = 0x2136a4u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2136a8: 0x1290ba  dsrl        $s2, $s2, 2
    ctx->pc = 0x2136a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 2);
    // 0x2136ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2136ACu;
    {
        const bool branch_taken_0x2136ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136ACu;
        // 0x2136b0: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136ac) {
            ctx->pc = 0x213798u;
            goto label_213798;
        }
    }
    ctx->pc = 0x2136B4u;
    // 0x2136b4: 0x0  nop
    ctx->pc = 0x2136b4u;
    // NOP
label_2136b8:
    // 0x2136b8: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2136B8u;
    {
        const bool branch_taken_0x2136b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2136BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136B8u;
        // 0x2136bc: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136b8) {
            ctx->pc = 0x213730u;
            goto label_213730;
        }
    }
    ctx->pc = 0x2136C0u;
    // 0x2136c0: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x2136c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2136c4: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x2136c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2136c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2136C8u;
    {
        const bool branch_taken_0x2136c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C8u;
        // 0x2136cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136c8) {
            ctx->pc = 0x213700u;
            goto label_213700;
        }
    }
    ctx->pc = 0x2136D0u;
    // 0x2136d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2136d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136d4: 0x0  nop
    ctx->pc = 0x2136d4u;
    // NOP
label_2136d8:
    // 0x2136d8: 0x12800293  beqz        $s4, . + 4 + (0x293 << 2)
    ctx->pc = 0x2136D8u;
    {
        const bool branch_taken_0x2136d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136D8u;
        // 0x2136dc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136d8) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x2136E0u;
    // 0x2136e0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2136e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2136e4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2136e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2136e8: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x2136e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2136ec: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x2136ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2136f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2136f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2136f4: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2136f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2136f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2136F8u;
    {
        const bool branch_taken_0x2136f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2136FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136F8u;
        // 0x2136fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136f8) {
            ctx->pc = 0x2136D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2136d8;
        }
    }
    ctx->pc = 0x213700u;
label_213700:
    // 0x213700: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x213700u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x213704: 0xb29016  dsrlv       $s2, $s2, $a1
    ctx->pc = 0x213704u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x213708: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x213708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21370c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x21370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213710: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x213710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x213714: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x213714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x213718: 0x24500003  addiu       $s0, $v0, 0x3
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x21371c: 0x1290fa  dsrl        $s2, $s2, 3
    ctx->pc = 0x21371cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
    // 0x213720: 0x2631fffd  addiu       $s1, $s1, -0x3
    ctx->pc = 0x213720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x213724: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x213724u;
    {
        const bool branch_taken_0x213724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213724u;
        // 0x213728: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213724) {
            ctx->pc = 0x213798u;
            goto label_213798;
        }
    }
    ctx->pc = 0x21372Cu;
    // 0x21372c: 0x0  nop
    ctx->pc = 0x21372cu;
    // NOP
label_213730:
    // 0x213730: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x213730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x213734: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x213734u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x213738: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x213738u;
    {
        const bool branch_taken_0x213738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213738u;
        // 0x21373c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213738) {
            ctx->pc = 0x213770u;
            goto label_213770;
        }
    }
    ctx->pc = 0x213740u;
    // 0x213740: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x213740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213744: 0x0  nop
    ctx->pc = 0x213744u;
    // NOP
label_213748:
    // 0x213748: 0x12800277  beqz        $s4, . + 4 + (0x277 << 2)
    ctx->pc = 0x213748u;
    {
        const bool branch_taken_0x213748 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213748u;
        // 0x21374c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213748) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213750u;
    // 0x213750: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213754: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213758: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x21375c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x21375cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213760: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213764: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x213764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213768: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213768u;
    {
        const bool branch_taken_0x213768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213768u;
        // 0x21376c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213768) {
            ctx->pc = 0x213748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213748;
        }
    }
    ctx->pc = 0x213770u;
label_213770:
    // 0x213770: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x213774: 0xb29016  dsrlv       $s2, $s2, $a1
    ctx->pc = 0x213774u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x213778: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x213778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21377c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x21377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213780: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x213780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x213784: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x213784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x213788: 0x2450000b  addiu       $s0, $v0, 0xB
    ctx->pc = 0x213788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x21378c: 0x1291fa  dsrl        $s2, $s2, 7
    ctx->pc = 0x21378cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 7);
    // 0x213790: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x213790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x213794: 0x2631fff9  addiu       $s1, $s1, -0x7
    ctx->pc = 0x213794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
label_213798:
    // 0x213798: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x213798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x21379c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2137a0: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2137a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2137a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2137a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2137a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2137a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2137ac: 0x1440ff41  bnez        $v0, . + 4 + (-0xBF << 2)
    ctx->pc = 0x2137ACu;
    {
        const bool branch_taken_0x2137ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2137B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137ACu;
        // 0x2137b0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137ac) {
            ctx->pc = 0x2134B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2134b4;
        }
    }
    ctx->pc = 0x2137B4u;
    // 0x2137b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2137b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2137b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2137b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2137bc: 0x5202000d  beql        $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2137BCu;
    {
        const bool branch_taken_0x2137bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2137bc) {
            ctx->pc = 0x2137C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2137BCu;
            // 0x2137c0: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2137F4u;
            goto label_2137f4;
        }
    }
    ctx->pc = 0x2137C4u;
    // 0x2137c4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2137c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2137c8: 0x2665007c  addiu       $a1, $s3, 0x7C
    ctx->pc = 0x2137c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x2137cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2137ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2137d0:
    // 0x2137d0: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2137d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2137d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2137d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2137d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2137d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2137dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2137dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2137e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2137e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2137e4: 0xa4550000  sh          $s5, 0x0($v0)
    ctx->pc = 0x2137e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x2137e8: 0x1604fff9  bne         $s0, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2137E8u;
    {
        const bool branch_taken_0x2137e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2137ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137E8u;
        // 0x2137ec: 0xae630074  sw          $v1, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137e8) {
            ctx->pc = 0x2137D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2137d0;
        }
    }
    ctx->pc = 0x2137F0u;
label_2137f0:
    // 0x2137f0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_2137f4:
    // 0x2137f4: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2137f8: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2137f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2137fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2137fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x213800: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x213800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213804: 0x5460ff3e  bnel        $v1, $zero, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x213804u;
    {
        const bool branch_taken_0x213804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213804) {
            ctx->pc = 0x213808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213804u;
            // 0x213808: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213500;
        }
    }
    ctx->pc = 0x21380Cu;
label_21380c:
    // 0x21380c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_213810:
    // 0x213810: 0x241e001b  addiu       $fp, $zero, 0x1B
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x213814: 0x505efc39  beql        $v0, $fp, . + 4 + (-0x3C7 << 2)
    ctx->pc = 0x213814u;
    {
        const bool branch_taken_0x213814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x213814) {
            ctx->pc = 0x213818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213814u;
            // 0x213818: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2128FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128fc;
        }
    }
    ctx->pc = 0x21381Cu;
    // 0x21381c: 0x2662053c  addiu       $v0, $s3, 0x53C
    ctx->pc = 0x21381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1340));
    // 0x213820: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x213824: 0x26700078  addiu       $s0, $s3, 0x78
    ctx->pc = 0x213824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x213828: 0x267502fc  addiu       $s5, $s3, 0x2FC
    ctx->pc = 0x213828u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 764));
    // 0x21382c: 0x8e66006c  lw          $a2, 0x6C($s3)
    ctx->pc = 0x21382cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x213830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213834: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x213834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
    // 0x213838: 0x2665007c  addiu       $a1, $s3, 0x7C
    ctx->pc = 0x213838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x21383c: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x21383cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
    // 0x213840: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213844: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x213844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x213848: 0x26680060  addiu       $t0, $s3, 0x60
    ctx->pc = 0x213848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x21384c: 0xc0850dc  jal         func_214370
    ctx->pc = 0x21384Cu;
    SET_GPR_U32(ctx, 31, 0x213854u);
    ctx->pc = 0x213850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21384Cu;
    // 0x213850: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214370u, 0x21384Cu, 0x213854u)) {
        return;
    }
    ctx->pc = 0x213854u;
label_213854:
    // 0x213854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213854u;
    {
        const bool branch_taken_0x213854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213854u;
        // 0x213858: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213854) {
            ctx->pc = 0x213868u;
            goto label_213868;
        }
    }
    ctx->pc = 0x21385Cu;
    // 0x21385c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x213860: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x213860u;
    {
        const bool branch_taken_0x213860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213860u;
        // 0x213864: 0x244261d0  addiu       $v0, $v0, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213860) {
            ctx->pc = 0x2138B0u;
            goto label_2138b0;
        }
    }
    ctx->pc = 0x213868u;
label_213868:
    // 0x213868: 0x8e65006c  lw          $a1, 0x6C($s3)
    ctx->pc = 0x213868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x21386c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x213870: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x213870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x213874: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213878: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x213878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21387c: 0x8e660070  lw          $a2, 0x70($s3)
    ctx->pc = 0x21387cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x213880: 0x24a5007c  addiu       $a1, $a1, 0x7C
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x213884: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x213884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x213888: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x213888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x21388c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x21388cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x213890: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x213890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213894: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x213894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213898: 0xc0850dc  jal         func_214370
    ctx->pc = 0x213898u;
    SET_GPR_U32(ctx, 31, 0x2138A0u);
    ctx->pc = 0x21389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213898u;
    // 0x21389c: 0x26680064  addiu       $t0, $s3, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214370u, 0x213898u, 0x2138A0u)) {
        return;
    }
    ctx->pc = 0x2138A0u;
label_2138a0:
    // 0x2138a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2138A0u;
    {
        const bool branch_taken_0x2138a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138A0u;
        // 0x2138a4: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138a0) {
            ctx->pc = 0x2138BCu;
            goto label_2138bc;
        }
    }
    ctx->pc = 0x2138A8u;
    // 0x2138a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2138a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2138ac: 0x244261f0  addiu       $v0, $v0, 0x61F0
    ctx->pc = 0x2138acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25072));
label_2138b0:
    // 0x2138b0: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x2138b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
    // 0x2138b4: 0x1000fc10  b           . + 4 + (-0x3F0 << 2)
    ctx->pc = 0x2138B4u;
    {
        const bool branch_taken_0x2138b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138B4u;
        // 0x2138b8: 0xae7e0000  sw          $fp, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138b4) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x2138BCu;
label_2138bc:
    // 0x2138bc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2138bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2138c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2138c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2138c4:
    // 0x2138c4: 0x2e820006  sltiu       $v0, $s4, 0x6
    ctx->pc = 0x2138c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2138c8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2138C8u;
    {
        const bool branch_taken_0x2138c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2138c8) {
            ctx->pc = 0x2138CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2138C8u;
            // 0x2138cc: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213930u;
            goto label_213930;
        }
    }
    ctx->pc = 0x2138D0u;
    // 0x2138d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2138d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2138d4: 0x2c620102  sltiu       $v0, $v1, 0x102
    ctx->pc = 0x2138d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
    // 0x2138d8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2138D8u;
    {
        const bool branch_taken_0x2138d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2138d8) {
            ctx->pc = 0x2138DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2138D8u;
            // 0x2138dc: 0x8e640060  lw          $a0, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213930u;
            goto label_213930;
        }
    }
    ctx->pc = 0x2138E0u;
    // 0x2138e0: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2138e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2138e4: 0xaee30014  sw          $v1, 0x14($s7)
    ctx->pc = 0x2138e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 3));
    // 0x2138e8: 0xaee40010  sw          $a0, 0x10($s7)
    ctx->pc = 0x2138e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 4));
    // 0x2138ec: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x2138ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x2138f0: 0xaef40004  sw          $s4, 0x4($s7)
    ctx->pc = 0x2138f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 20));
    // 0x2138f4: 0xfe720040  sd          $s2, 0x40($s3)
    ctx->pc = 0x2138f4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 18));
    // 0x2138f8: 0xae710048  sw          $s1, 0x48($s3)
    ctx->pc = 0x2138f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 17));
    // 0x2138fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2138fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213900: 0xc0889da  jal         func_222768
    ctx->pc = 0x213900u;
    SET_GPR_U32(ctx, 31, 0x213908u);
    ctx->pc = 0x213904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213900u;
    // 0x213904: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222768u, 0x213900u, 0x213908u)) {
        return;
    }
    ctx->pc = 0x213908u;
label_213908:
    // 0x213908: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x213908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x21390c: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x21390cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x213910: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x213910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x213914: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x213914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x213918: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x213918u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21391c: 0x8ef40004  lw          $s4, 0x4($s7)
    ctx->pc = 0x21391cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x213920: 0xde720040  ld          $s2, 0x40($s3)
    ctx->pc = 0x213920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x213924: 0x1000fbf4  b           . + 4 + (-0x40C << 2)
    ctx->pc = 0x213924u;
    {
        const bool branch_taken_0x213924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213924u;
        // 0x213928: 0x8e710048  lw          $s1, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213924) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x21392Cu;
    // 0x21392c: 0x0  nop
    ctx->pc = 0x21392cu;
    // NOP
label_213930:
    // 0x213930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213934: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213938: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213938u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21393c: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x21393cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x213940: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x213940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x213944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213948: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21394c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21394cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213950: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x213950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213954: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x213954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x213958: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x213958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x21395c: 0xaba70003  swl         $a3, 0x3($sp)
    ctx->pc = 0x21395cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213960: 0xbba70000  swr         $a3, 0x0($sp)
    ctx->pc = 0x213960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213964: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213968: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x213968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21396c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21396Cu;
    {
        const bool branch_taken_0x21396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21396Cu;
        // 0x213970: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21396c) {
            ctx->pc = 0x2139E0u;
            goto label_2139e0;
        }
    }
    ctx->pc = 0x213974u;
    // 0x213974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213978:
    // 0x213978: 0x128001eb  beqz        $s4, . + 4 + (0x1EB << 2)
    ctx->pc = 0x213978u;
    {
        const bool branch_taken_0x213978 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213978u;
        // 0x21397c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213978) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213980u;
    // 0x213980: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213984: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213988: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x21398c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x21398cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213990: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213994: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213998: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213998u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21399c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x21399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2139a0: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x2139a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2139a4: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x2139a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x2139a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2139a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2139ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2139acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2139b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2139b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2139b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2139b8: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x2139b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2139bc: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x2139bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2139c0: 0xaba60003  swl         $a2, 0x3($sp)
    ctx->pc = 0x2139c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2139c4: 0xbba60000  swr         $a2, 0x0($sp)
    ctx->pc = 0x2139c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2139c8: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2139c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2139cc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2139ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2139d0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2139D0u;
    {
        const bool branch_taken_0x2139d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2139D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139D0u;
        // 0x2139d4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139d0) {
            ctx->pc = 0x213978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213978;
        }
    }
    ctx->pc = 0x2139D8u;
    // 0x2139d8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2139d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2139dc: 0x0  nop
    ctx->pc = 0x2139dcu;
    // NOP
label_2139e0:
    // 0x2139e0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2139E0u;
    {
        const bool branch_taken_0x2139e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139E0u;
        // 0x2139e4: 0x304200f0  andi        $v0, $v0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139e0) {
            ctx->pc = 0x213AD8u;
            goto label_213ad8;
        }
    }
    ctx->pc = 0x2139E8u;
    // 0x2139e8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2139E8u;
    {
        const bool branch_taken_0x2139e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139E8u;
        // 0x2139ec: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139e8) {
            ctx->pc = 0x213AE0u;
            goto label_213ae0;
        }
    }
    ctx->pc = 0x2139F0u;
    // 0x2139f0: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x2139f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2139f4: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x2139f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2139f8: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x2139f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2139fc: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x2139fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213a00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x213a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213a04: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x213a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213a08: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x213a08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x213a0c: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x213a0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x213a10: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x213a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a14: 0x97a30012  lhu         $v1, 0x12($sp)
    ctx->pc = 0x213a14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x213a18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x213a1c: 0x8e660058  lw          $a2, 0x58($s3)
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x213a20: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x213a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x213a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213a28: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x213a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x213a2c: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x213a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x213a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x213a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213a38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x213a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x213a3c: 0x88680003  lwl         $t0, 0x3($v1)
    ctx->pc = 0x213a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x213a40: 0x98680000  lwr         $t0, 0x0($v1)
    ctx->pc = 0x213a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x213a44: 0xaba80003  swl         $t0, 0x3($sp)
    ctx->pc = 0x213a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213a48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x213A48u;
    {
        const bool branch_taken_0x213a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A48u;
        // 0x213a4c: 0xbba80000  swr         $t0, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a48) {
            ctx->pc = 0x213AB8u;
            goto label_213ab8;
        }
    }
    ctx->pc = 0x213A50u;
label_213a50:
    // 0x213a50: 0x128001b3  beqz        $s4, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x213A50u;
    {
        const bool branch_taken_0x213a50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A50u;
        // 0x213a54: 0x97a40012  lhu         $a0, 0x12($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a50) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x213A58u;
    // 0x213a58: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213a5c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213a5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213a60: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213a60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x213a64: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213a68: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213a6c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213a70: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x213a70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x213a74: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213a78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213a78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213a7c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x213a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a80: 0x8e660058  lw          $a2, 0x58($s3)
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x213a84: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x213a88: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x213a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x213a8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213a90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213a94: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x213a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x213a98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x213a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x213a9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x213a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213aa0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x213aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x213aa4: 0x88860003  lwl         $a2, 0x3($a0)
    ctx->pc = 0x213aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x213aa8: 0x98860000  lwr         $a2, 0x0($a0)
    ctx->pc = 0x213aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x213aac: 0xaba60003  swl         $a2, 0x3($sp)
    ctx->pc = 0x213aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213ab0: 0xbba60000  swr         $a2, 0x0($sp)
    ctx->pc = 0x213ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213ab4: 0x0  nop
    ctx->pc = 0x213ab4u;
    // NOP
label_213ab8:
    // 0x213ab8: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x213ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x213abc: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x213abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x213ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213ac4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x213ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213ac8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x213AC8u;
    {
        const bool branch_taken_0x213ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AC8u;
        // 0x213acc: 0x93a20011  lbu         $v0, 0x11($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ac8) {
            ctx->pc = 0x213A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213a50;
        }
    }
    ctx->pc = 0x213AD0u;
    // 0x213ad0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x213ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213ad4: 0x529016  dsrlv       $s2, $s2, $v0
    ctx->pc = 0x213ad4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
label_213ad8:
    // 0x213ad8: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213adc: 0x0  nop
    ctx->pc = 0x213adcu;
    // NOP
label_213ae0:
    // 0x213ae0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x213ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213ae4: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x213ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x213ae8: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x213ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x213aec: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x213aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213af0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x213AF0u;
    {
        const bool branch_taken_0x213af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AF0u;
        // 0x213af4: 0x529016  dsrlv       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213af0) {
            ctx->pc = 0x213B04u;
            goto label_213b04;
        }
    }
    ctx->pc = 0x213AF8u;
    // 0x213af8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x213af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x213afc: 0x1000fb7e  b           . + 4 + (-0x482 << 2)
    ctx->pc = 0x213AFCu;
    {
        const bool branch_taken_0x213afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AFCu;
        // 0x213b00: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213afc) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x213B04u;
label_213b04:
    // 0x213b04: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x213b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x213b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213B08u;
    {
        const bool branch_taken_0x213b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B08u;
        // 0x213b0c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b08) {
            ctx->pc = 0x213B1Cu;
            goto label_213b1c;
        }
    }
    ctx->pc = 0x213B10u;
label_213b10:
    // 0x213b10: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x213b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x213b14: 0x1000fb78  b           . + 4 + (-0x488 << 2)
    ctx->pc = 0x213B14u;
    {
        const bool branch_taken_0x213b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B14u;
        // 0x213b18: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b14) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x213B1Cu;
label_213b1c:
    // 0x213b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213B1Cu;
    {
        const bool branch_taken_0x213b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B1Cu;
        // 0x213b20: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b1c) {
            ctx->pc = 0x213B30u;
            goto label_213b30;
        }
    }
    ctx->pc = 0x213B24u;
    // 0x213b24: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x213b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x213b28: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x213B28u;
    {
        const bool branch_taken_0x213b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B28u;
        // 0x213b2c: 0x24426208  addiu       $v0, $v0, 0x6208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b28) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x213B30u;
label_213b30:
    // 0x213b30: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x213b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x213b34: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x213b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x213b38: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x213b38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x213b3c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x213b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_213b40:
    // 0x213b40: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x213b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x213b44: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x213B44u;
    {
        const bool branch_taken_0x213b44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B44u;
        // 0x213b48: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b44) {
            ctx->pc = 0x213BB0u;
            goto label_213bb0;
        }
    }
    ctx->pc = 0x213B4Cu;
    // 0x213b4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x213B4Cu;
    {
        const bool branch_taken_0x213b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B4Cu;
        // 0x213b50: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b4c) {
            ctx->pc = 0x213B80u;
            goto label_213b80;
        }
    }
    ctx->pc = 0x213B54u;
    // 0x213b54: 0x0  nop
    ctx->pc = 0x213b54u;
    // NOP
label_213b58:
    // 0x213b58: 0x12800173  beqz        $s4, . + 4 + (0x173 << 2)
    ctx->pc = 0x213B58u;
    {
        const bool branch_taken_0x213b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B58u;
        // 0x213b5c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b58) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213B60u;
    // 0x213b60: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213b64: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213b64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213b68: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213b6c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213b70: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213b74: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x213b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213b78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213B78u;
    {
        const bool branch_taken_0x213b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B78u;
        // 0x213b7c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b78) {
            ctx->pc = 0x213B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213b58;
        }
    }
    ctx->pc = 0x213B80u;
label_213b80:
    // 0x213b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213b84: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x213b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x213b88: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x213b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x213b8c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213b90: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213b90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213b94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213b98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213b9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x213b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x213ba0: 0xae64004c  sw          $a0, 0x4C($s3)
    ctx->pc = 0x213ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 4));
    // 0x213ba4: 0xb29016  dsrlv       $s2, $s2, $a1
    ctx->pc = 0x213ba4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x213ba8: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x213ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x213bac: 0x0  nop
    ctx->pc = 0x213bacu;
    // NOP
label_213bb0:
    // 0x213bb0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x213bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x213bb4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x213bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_213bb8:
    // 0x213bb8: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x213bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x213bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213bc0: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213bc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213bc8: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x213bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x213bcc: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x213bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x213bd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213bd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213bd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213bdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x213bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213be0: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x213be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x213be4: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x213be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x213be8: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x213be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213bec: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x213becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213bf0: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213bf4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x213bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213bf8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x213BF8u;
    {
        const bool branch_taken_0x213bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BF8u;
        // 0x213bfc: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bf8) {
            ctx->pc = 0x213C70u;
            goto label_213c70;
        }
    }
    ctx->pc = 0x213C00u;
    // 0x213c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213c04: 0x0  nop
    ctx->pc = 0x213c04u;
    // NOP
label_213c08:
    // 0x213c08: 0x12800147  beqz        $s4, . + 4 + (0x147 << 2)
    ctx->pc = 0x213C08u;
    {
        const bool branch_taken_0x213c08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C08u;
        // 0x213c0c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c08) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213C10u;
    // 0x213c10: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213c14: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213c18: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213c1c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213c20: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213c24: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213c28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213c28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213c2c: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x213c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x213c30: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x213c34: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x213c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x213c38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213c3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213c44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x213c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213c48: 0x88680003  lwl         $t0, 0x3($v1)
    ctx->pc = 0x213c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x213c4c: 0x98680000  lwr         $t0, 0x0($v1)
    ctx->pc = 0x213c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x213c50: 0xaba80003  swl         $t0, 0x3($sp)
    ctx->pc = 0x213c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213c54: 0xbba80000  swr         $t0, 0x0($sp)
    ctx->pc = 0x213c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213c58: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213c5c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x213c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213c60: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x213C60u;
    {
        const bool branch_taken_0x213c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C60u;
        // 0x213c64: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c60) {
            ctx->pc = 0x213C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213c08;
        }
    }
    ctx->pc = 0x213C68u;
    // 0x213c68: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x213c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c6c: 0x0  nop
    ctx->pc = 0x213c6cu;
    // NOP
label_213c70:
    // 0x213c70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x213c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c74: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x213c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x213c78: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x213C78u;
    {
        const bool branch_taken_0x213c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213c78) {
            ctx->pc = 0x213C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213C78u;
            // 0x213c7c: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213D78u;
            goto label_213d78;
        }
    }
    ctx->pc = 0x213C80u;
    // 0x213c80: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x213c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x213c84: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x213c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x213c88: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x213c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213c8c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x213c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213c90: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x213c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213c94: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x213c94u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x213c98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x213c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213c9c: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x213c9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x213ca0: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x213ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ca4: 0x97a30012  lhu         $v1, 0x12($sp)
    ctx->pc = 0x213ca4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x213ca8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x213cac: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x213cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x213cb0: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x213cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x213cb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213cb8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x213cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x213cbc: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x213cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x213cc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x213cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213cc8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x213cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x213ccc: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x213cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x213cd0: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x213cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x213cd4: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x213cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213cd8: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x213cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213cdc: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x213cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213ce0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x213CE0u;
    {
        const bool branch_taken_0x213ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CE0u;
        // 0x213ce4: 0x93a20011  lbu         $v0, 0x11($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ce0) {
            ctx->pc = 0x213D58u;
            goto label_213d58;
        }
    }
    ctx->pc = 0x213CE8u;
label_213ce8:
    // 0x213ce8: 0x1280010d  beqz        $s4, . + 4 + (0x10D << 2)
    ctx->pc = 0x213CE8u;
    {
        const bool branch_taken_0x213ce8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CE8u;
        // 0x213cec: 0x97a40012  lhu         $a0, 0x12($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ce8) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x213CF0u;
    // 0x213cf0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213cf4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213cf8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x213cfc: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213d00: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213d04: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213d08: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x213d08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x213d0c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213d10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213d10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213d14: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x213d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d18: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x213d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x213d1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x213d20: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x213d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x213d24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213d28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213d2c: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x213d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x213d30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x213d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x213d34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x213d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213d38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x213d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x213d3c: 0x88820003  lwl         $v0, 0x3($a0)
    ctx->pc = 0x213d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x213d40: 0x98820000  lwr         $v0, 0x0($a0)
    ctx->pc = 0x213d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x213d44: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x213d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213d48: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x213d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x213d4c: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x213d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x213d50: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x213d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x213d54: 0x0  nop
    ctx->pc = 0x213d54u;
    // NOP
label_213d58:
    // 0x213d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x213d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213d5c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x213d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213d60: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x213D60u;
    {
        const bool branch_taken_0x213d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D60u;
        // 0x213d64: 0x93a20011  lbu         $v0, 0x11($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d60) {
            ctx->pc = 0x213CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213ce8;
        }
    }
    ctx->pc = 0x213D68u;
    // 0x213d68: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x213d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213d6c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x213d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213d70: 0x529016  dsrlv       $s2, $s2, $v0
    ctx->pc = 0x213d70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x213d74: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x213d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_213d78:
    // 0x213d78: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x213d78u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x213d7c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x213d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x213d80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213D80u;
    {
        const bool branch_taken_0x213d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D80u;
        // 0x213d84: 0x529016  dsrlv       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d80) {
            ctx->pc = 0x213D98u;
            goto label_213d98;
        }
    }
    ctx->pc = 0x213D88u;
    // 0x213d88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x213d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x213d8c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x213d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x213d90: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x213D90u;
    {
        const bool branch_taken_0x213d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D90u;
        // 0x213d94: 0x24426228  addiu       $v0, $v0, 0x6228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d90) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x213D98u;
label_213d98:
    // 0x213d98: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x213d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x213d9c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x213d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x213da0: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x213da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x213da4: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x213da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213da8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x213da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x213dac: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x213dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x213db0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x213db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_213db4:
    // 0x213db4: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x213db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x213db8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x213DB8u;
    {
        const bool branch_taken_0x213db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DB8u;
        // 0x213dbc: 0x225102b  sltu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213db8) {
            ctx->pc = 0x213E20u;
            goto label_213e20;
        }
    }
    ctx->pc = 0x213DC0u;
    // 0x213dc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x213DC0u;
    {
        const bool branch_taken_0x213dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DC0u;
        // 0x213dc4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dc0) {
            ctx->pc = 0x213DF0u;
            goto label_213df0;
        }
    }
    ctx->pc = 0x213DC8u;
label_213dc8:
    // 0x213dc8: 0x128000d7  beqz        $s4, . + 4 + (0xD7 << 2)
    ctx->pc = 0x213DC8u;
    {
        const bool branch_taken_0x213dc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DC8u;
        // 0x213dcc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dc8) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213DD0u;
    // 0x213dd0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213dd4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213dd8: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213ddc: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213de0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213de4: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x213de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213de8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213DE8u;
    {
        const bool branch_taken_0x213de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DE8u;
        // 0x213dec: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213de8) {
            ctx->pc = 0x213DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213dc8;
        }
    }
    ctx->pc = 0x213DF0u;
label_213df0:
    // 0x213df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213df4: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x213df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x213df8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x213df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x213dfc: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x213dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x213e00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x213e00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x213e04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x213e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213e08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213e0c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x213e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x213e10: 0xae640050  sw          $a0, 0x50($s3)
    ctx->pc = 0x213e10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 4));
    // 0x213e14: 0xb29016  dsrlv       $s2, $s2, $a1
    ctx->pc = 0x213e14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x213e18: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x213e18u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x213e1c: 0x0  nop
    ctx->pc = 0x213e1cu;
    // NOP
label_213e20:
    // 0x213e20: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x213e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x213e24: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x213e24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213e28: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x213e28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213e2c: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x213e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x213e30: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x213e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213e34: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x213e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x213e38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x213e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213E3Cu;
    {
        const bool branch_taken_0x213e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E3Cu;
        // 0x213e40: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e3c) {
            ctx->pc = 0x213E50u;
            goto label_213e50;
        }
    }
    ctx->pc = 0x213E44u;
    // 0x213e44: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x213e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x213e48: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x213E48u;
    {
        const bool branch_taken_0x213e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E48u;
        // 0x213e4c: 0x24426240  addiu       $v0, $v0, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e48) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x213E50u;
label_213e50:
    // 0x213e50: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x213e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x213e54: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x213e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_213e58:
    // 0x213e58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x213e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213e5c: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x213E5Cu;
    {
        const bool branch_taken_0x213e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E5Cu;
        // 0x213e60: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e5c) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x213E64u;
    // 0x213e64: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x213e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x213e68: 0x828023  subu        $s0, $a0, $v0
    ctx->pc = 0x213e68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x213e6c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x213e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x213e70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x213E70u;
    {
        const bool branch_taken_0x213e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E70u;
        // 0x213e74: 0x708023  subu        $s0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e70) {
            ctx->pc = 0x213EB4u;
            goto label_213eb4;
        }
    }
    ctx->pc = 0x213E78u;
    // 0x213e78: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x213e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x213e7c: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x213e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x213e80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E80u;
    {
        const bool branch_taken_0x213e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E80u;
        // 0x213e84: 0x8e63003c  lw          $v1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e80) {
            ctx->pc = 0x213E98u;
            goto label_213e98;
        }
    }
    ctx->pc = 0x213E88u;
    // 0x213e88: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x213e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x213e8c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x213e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x213e90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x213E90u;
    {
        const bool branch_taken_0x213e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E90u;
        // 0x213e94: 0x501023  subu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e90) {
            ctx->pc = 0x213E9Cu;
            goto label_213e9c;
        }
    }
    ctx->pc = 0x213E98u;
label_213e98:
    // 0x213e98: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x213e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_213e9c:
    // 0x213e9c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x213e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213ea0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x213ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x213ea4: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x213ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x213ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x213ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213eac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x213EACu;
    {
        const bool branch_taken_0x213eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EACu;
        // 0x213eb0: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213eac) {
            ctx->pc = 0x213EC4u;
            goto label_213ec4;
        }
    }
    ctx->pc = 0x213EB4u;
label_213eb4:
    // 0x213eb4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x213eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x213eb8: 0x8e70004c  lw          $s0, 0x4C($s3)
    ctx->pc = 0x213eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x213ebc: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x213ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x213ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213ec4:
    // 0x213ec4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x213ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213ec8: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x213ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x213ecc: 0xc2800b  movn        $s0, $a2, $v0
    ctx->pc = 0x213eccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6));
    // 0x213ed0: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x213ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x213ed4: 0xb01823  subu        $v1, $a1, $s0
    ctx->pc = 0x213ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x213ed8: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x213ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x213edc: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x213edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
label_213ee0:
    // 0x213ee0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x213ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213ee4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x213ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x213ee8: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x213ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x213eec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x213ef0: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x213ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x213ef4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x213ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x213ef8: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x213EF8u;
    {
        const bool branch_taken_0x213ef8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x213EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF8u;
        // 0x213efc: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ef8) {
            ctx->pc = 0x213EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213ee0;
        }
    }
    ctx->pc = 0x213F00u;
    // 0x213f00: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x213f04: 0x5440fa7d  bnel        $v0, $zero, . + 4 + (-0x583 << 2)
    ctx->pc = 0x213F04u;
    {
        const bool branch_taken_0x213f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213f04) {
            ctx->pc = 0x213F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F04u;
            // 0x213f08: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2128FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128fc;
        }
    }
    ctx->pc = 0x213F0Cu;
    // 0x213f0c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x213f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x213f10: 0x1000fa79  b           . + 4 + (-0x587 << 2)
    ctx->pc = 0x213F10u;
    {
        const bool branch_taken_0x213f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F10u;
        // 0x213f14: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f10) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x213F18u;
label_213f18:
    // 0x213f18: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x213f18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213f1c: 0x11000080  beqz        $t0, . + 4 + (0x80 << 2)
    ctx->pc = 0x213F1Cu;
    {
        const bool branch_taken_0x213f1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F1Cu;
        // 0x213f20: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f1c) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x213F24u;
    // 0x213f24: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x213f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x213f28: 0x9262004c  lbu         $v0, 0x4C($s3)
    ctx->pc = 0x213f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x213f2c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x213f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x213f30: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x213f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x213f34: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x213f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x213f38: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x213f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x213f3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x213f40: 0x1000fa6d  b           . + 4 + (-0x593 << 2)
    ctx->pc = 0x213F40u;
    {
        const bool branch_taken_0x213f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F40u;
        // 0x213f44: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f40) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x213F48u;
label_213f48:
    // 0x213f48: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x213f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x213f4c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x213F4Cu;
    {
        const bool branch_taken_0x213f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F4Cu;
        // 0x213f50: 0x2e220020  sltiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f4c) {
            ctx->pc = 0x21406Cu;
            goto label_21406c;
        }
    }
    ctx->pc = 0x213F54u;
    // 0x213f54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x213F54u;
    {
        const bool branch_taken_0x213f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F54u;
        // 0x213f58: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f54) {
            ctx->pc = 0x213F90u;
            goto label_213f90;
        }
    }
    ctx->pc = 0x213F5Cu;
    // 0x213f5c: 0x0  nop
    ctx->pc = 0x213f5cu;
    // NOP
label_213f60:
    // 0x213f60: 0x12800071  beqz        $s4, . + 4 + (0x71 << 2)
    ctx->pc = 0x213F60u;
    {
        const bool branch_taken_0x213f60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F60u;
        // 0x213f64: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f60) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x213F68u;
    // 0x213f68: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x213f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x213f6c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x213f70: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x213f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x213f74: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x213f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x213f78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x213f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x213f7c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x213f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x213f80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213F80u;
    {
        const bool branch_taken_0x213f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F80u;
        // 0x213f84: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f80) {
            ctx->pc = 0x213F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213f60;
        }
    }
    ctx->pc = 0x213F88u;
    // 0x213f88: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x213f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213f8c: 0x0  nop
    ctx->pc = 0x213f8cu;
    // NOP
label_213f90:
    // 0x213f90: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x213f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213f94: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x213f98: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x213f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x213f9c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x213f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x213fa0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x213fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x213fa4: 0xdee20018  ld          $v0, 0x18($s7)
    ctx->pc = 0x213fa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x213fa8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x213fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x213fac: 0xfee20018  sd          $v0, 0x18($s7)
    ctx->pc = 0x213facu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 2));
    // 0x213fb0: 0xde630020  ld          $v1, 0x20($s3)
    ctx->pc = 0x213fb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x213fb4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x213fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x213fb8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x213FB8u;
    {
        const bool branch_taken_0x213fb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FB8u;
        // 0x213fbc: 0xfe630020  sd          $v1, 0x20($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fb8) {
            ctx->pc = 0x213FFCu;
            goto label_213ffc;
        }
    }
    ctx->pc = 0x213FC0u;
    // 0x213fc0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x213fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x213fc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213FC4u;
    {
        const bool branch_taken_0x213fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FC4u;
        // 0x213fc8: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fc4) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x213FCCu;
    // 0x213fcc: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x213fd0: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x213fd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x213fd4: 0xc0889ce  jal         func_222738
    ctx->pc = 0x213FD4u;
    SET_GPR_U32(ctx, 31, 0x213FDCu);
    ctx->pc = 0x213FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FD4u;
    // 0x213fd8: 0xe62823  subu        $a1, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x213FD4u, 0x213FDCu)) {
        return;
    }
    ctx->pc = 0x213FDCu;
label_213fdc:
    // 0x213fdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x213FDCu;
    {
        const bool branch_taken_0x213fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FDCu;
        // 0x213fe0: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fdc) {
            ctx->pc = 0x213FF8u;
            goto label_213ff8;
        }
    }
    ctx->pc = 0x213FE4u;
label_213fe4:
    // 0x213fe4: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x213fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x213fe8: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x213fe8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x213fec: 0xc0887d4  jal         func_221F50
    ctx->pc = 0x213FECu;
    SET_GPR_U32(ctx, 31, 0x213FF4u);
    ctx->pc = 0x213FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FECu;
    // 0x213ff0: 0x1062823  subu        $a1, $t0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x221F50u, 0x213FECu, 0x213FF4u)) {
        return;
    }
    ctx->pc = 0x213FF4u;
label_213ff4:
    // 0x213ff4: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x213ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_213ff8:
    // 0x213ff8: 0xfee20038  sd          $v0, 0x38($s7)
    ctx->pc = 0x213ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 56), GPR_U64(ctx, 2));
label_213ffc:
    // 0x213ffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x213ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x214000: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x214004: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x214004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x214008: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x214008u;
    {
        const bool branch_taken_0x214008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214008u;
        // 0x21400c: 0xde650018  ld          $a1, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214008) {
            ctx->pc = 0x21404Cu;
            goto label_21404c;
        }
    }
    ctx->pc = 0x214010u;
    // 0x214010: 0x121e3a  dsrl        $v1, $s2, 24
    ctx->pc = 0x214010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 24);
    // 0x214014: 0x12123a  dsrl        $v0, $s2, 8
    ctx->pc = 0x214014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 8);
    // 0x214018: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x214018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21401c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x214020: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x214020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x214024: 0x3244ff00  andi        $a0, $s2, 0xFF00
    ctx->pc = 0x214024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
    // 0x214028: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x214028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x21402c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x21402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x214030: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x214030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x214034: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x214034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x214038: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x214038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21403c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21403Cu;
    {
        const bool branch_taken_0x21403c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x214040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21403Cu;
        // 0x214040: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21403c) {
            ctx->pc = 0x214054u;
            goto label_214054;
        }
    }
    ctx->pc = 0x214044u;
    // 0x214044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x214044u;
    {
        const bool branch_taken_0x214044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214044u;
        // 0x214048: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214044) {
            ctx->pc = 0x214068u;
            goto label_214068;
        }
    }
    ctx->pc = 0x21404Cu;
label_21404c:
    // 0x21404c: 0x12450004  beq         $s2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21404Cu;
    {
        const bool branch_taken_0x21404c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x214050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21404Cu;
        // 0x214050: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21404c) {
            ctx->pc = 0x214060u;
            goto label_214060;
        }
    }
    ctx->pc = 0x214054u;
label_214054:
    // 0x214054: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x214058: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x214058u;
    {
        const bool branch_taken_0x214058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214058u;
        // 0x21405c: 0x24426260  addiu       $v0, $v0, 0x6260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214058) {
            ctx->pc = 0x2140D8u;
            goto label_2140d8;
        }
    }
    ctx->pc = 0x214060u;
label_214060:
    // 0x214060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214064: 0x0  nop
    ctx->pc = 0x214064u;
    // NOP
label_214068:
    // 0x214068: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21406c:
    // 0x21406c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x21406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x214070: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x214070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_214074:
    // 0x214074: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x214074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x214078: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x214078u;
    {
        const bool branch_taken_0x214078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214078u;
        // 0x21407c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214078) {
            ctx->pc = 0x2140F4u;
            goto label_2140f4;
        }
    }
    ctx->pc = 0x214080u;
    // 0x214080: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x214084: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x214084u;
    {
        const bool branch_taken_0x214084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214084u;
        // 0x214088: 0x2e220020  sltiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214084) {
            ctx->pc = 0x2140F0u;
            goto label_2140f0;
        }
    }
    ctx->pc = 0x21408Cu;
    // 0x21408c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21408Cu;
    {
        const bool branch_taken_0x21408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21408c) {
            ctx->pc = 0x214090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21408Cu;
            // 0x214090: 0x9e620020  lwu         $v0, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2140C8u;
            goto label_2140c8;
        }
    }
    ctx->pc = 0x214094u;
    // 0x214094: 0x0  nop
    ctx->pc = 0x214094u;
    // NOP
label_214098:
    // 0x214098: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x214098u;
    {
        const bool branch_taken_0x214098 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214098u;
        // 0x21409c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214098) {
            ctx->pc = 0x214128u;
            goto label_214128;
        }
    }
    ctx->pc = 0x2140A0u;
    // 0x2140a0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2140a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2140a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2140a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2140a8: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x2140a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2140ac: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x2140acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2140b0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2140b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2140b4: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2140b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2140b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2140B8u;
    {
        const bool branch_taken_0x2140b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2140BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140B8u;
        // 0x2140bc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140b8) {
            ctx->pc = 0x214098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214098;
        }
    }
    ctx->pc = 0x2140C0u;
    // 0x2140c0: 0x9e620020  lwu         $v0, 0x20($s3)
    ctx->pc = 0x2140c0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2140c4: 0x0  nop
    ctx->pc = 0x2140c4u;
    // NOP
label_2140c8:
    // 0x2140c8: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2140C8u;
    {
        const bool branch_taken_0x2140c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2140CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140C8u;
        // 0x2140cc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140c8) {
            ctx->pc = 0x2140E4u;
            goto label_2140e4;
        }
    }
    ctx->pc = 0x2140D0u;
    // 0x2140d0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2140d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2140d4: 0x24426278  addiu       $v0, $v0, 0x6278
    ctx->pc = 0x2140d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25208));
label_2140d8:
    // 0x2140d8: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x2140d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
    // 0x2140dc: 0x1000fa06  b           . + 4 + (-0x5FA << 2)
    ctx->pc = 0x2140DCu;
    {
        const bool branch_taken_0x2140dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140DCu;
        // 0x2140e0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140dc) {
            ctx->pc = 0x2128F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128f8;
        }
    }
    ctx->pc = 0x2140E4u;
label_2140e4:
    // 0x2140e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2140e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2140e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140ec: 0x0  nop
    ctx->pc = 0x2140ecu;
    // NOP
label_2140f0:
    // 0x2140f0: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2140f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2140f4:
    // 0x2140f4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2140f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2140f8:
    // 0x2140f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2140f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2140fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2140FCu;
    {
        const bool branch_taken_0x2140fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140FCu;
        // 0x214100: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140fc) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x214104u;
label_214104:
    // 0x214104: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x214104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x214108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x214108u;
    {
        const bool branch_taken_0x214108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214108u;
        // 0x21410c: 0xafa50060  sw          $a1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214108) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x214110u;
label_214110:
    // 0x214110: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x214110u;
    {
        const bool branch_taken_0x214110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214110u;
        // 0x214114: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214110) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x214118u;
label_214118:
    // 0x214118: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x214118u;
    {
        const bool branch_taken_0x214118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214118u;
        // 0x21411c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214118) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x214120u;
label_214120:
    // 0x214120: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x214120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x214124: 0x0  nop
    ctx->pc = 0x214124u;
    // NOP
label_214128:
    // 0x214128: 0xaee60010  sw          $a2, 0x10($s7)
    ctx->pc = 0x214128u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 6));
    // 0x21412c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x21412cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x214130: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x214130u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x214134: 0xaee70014  sw          $a3, 0x14($s7)
    ctx->pc = 0x214134u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 7));
    // 0x214138: 0xaef40004  sw          $s4, 0x4($s7)
    ctx->pc = 0x214138u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 20));
    // 0x21413c: 0xfe720040  sd          $s2, 0x40($s3)
    ctx->pc = 0x21413cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 18));
    // 0x214140: 0xae710048  sw          $s1, 0x48($s3)
    ctx->pc = 0x214140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 17));
    // 0x214144: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x214144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x214148: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214148u;
    {
        const bool branch_taken_0x214148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214148u;
        // 0x21414c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214148) {
            ctx->pc = 0x21416Cu;
            goto label_21416c;
        }
    }
    ctx->pc = 0x214150u;
    // 0x214150: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x214150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214154: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x214154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x214158: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x214158u;
    {
        const bool branch_taken_0x214158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214158u;
        // 0x21415c: 0x8fa80050  lw          $t0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214158) {
            ctx->pc = 0x214188u;
            goto label_214188;
        }
    }
    ctx->pc = 0x214160u;
    // 0x214160: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x214160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x214164: 0x51020009  beql        $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214164u;
    {
        const bool branch_taken_0x214164 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x214164) {
            ctx->pc = 0x214168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214164u;
            // 0x214168: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21418Cu;
            goto label_21418c;
        }
    }
    ctx->pc = 0x21416Cu;
label_21416c:
    // 0x21416c: 0xc0849bc  jal         func_2126F0
    ctx->pc = 0x21416Cu;
    SET_GPR_U32(ctx, 31, 0x214174u);
    ctx->pc = 0x214170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21416Cu;
    // 0x214170: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2126F0u, 0x21416Cu, 0x214174u)) {
        return;
    }
    ctx->pc = 0x214174u;
label_214174:
    // 0x214174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214174u;
    {
        const bool branch_taken_0x214174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214174u;
        // 0x214178: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214174) {
            ctx->pc = 0x214188u;
            goto label_214188;
        }
    }
    ctx->pc = 0x21417Cu;
    // 0x21417c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x21417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x214180: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x214180u;
    {
        const bool branch_taken_0x214180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214180u;
        // 0x214184: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214180) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x214188u;
label_214188:
    // 0x214188: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_21418c:
    // 0x21418c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214190: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x214190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x214194: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x214194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214198: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x214198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21419c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x21419cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2141a0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2141a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2141a4: 0xdee50008  ld          $a1, 0x8($s7)
    ctx->pc = 0x2141a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2141a8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2141a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2141ac: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2141acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2141b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2141b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2141b4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2141b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2141b8: 0xdee40018  ld          $a0, 0x18($s7)
    ctx->pc = 0x2141b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x2141bc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2141bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2141c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2141c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2141c4: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x2141c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2141c8: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x2141c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2141cc: 0xfee40018  sd          $a0, 0x18($s7)
    ctx->pc = 0x2141ccu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 24), GPR_U64(ctx, 4));
    // 0x2141d0: 0xfee50008  sd          $a1, 0x8($s7)
    ctx->pc = 0x2141d0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 5));
    // 0x2141d4: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x2141d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2141d8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2141d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2141dc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2141dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2141e0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2141E0u;
    {
        const bool branch_taken_0x2141e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2141E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141E0u;
        // 0x2141e4: 0xfe620020  sd          $v0, 0x20($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141e0) {
            ctx->pc = 0x21422Cu;
            goto label_21422c;
        }
    }
    ctx->pc = 0x2141E8u;
    // 0x2141e8: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2141E8u;
    {
        const bool branch_taken_0x2141e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141e8) {
            ctx->pc = 0x2141ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2141E8u;
            // 0x2141ec: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214230u;
            goto label_214230;
        }
    }
    ctx->pc = 0x2141F0u;
    // 0x2141f0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2141f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2141F4u;
    {
        const bool branch_taken_0x2141f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2141F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141F4u;
        // 0x2141f8: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141f4) {
            ctx->pc = 0x214214u;
            goto label_214214;
        }
    }
    ctx->pc = 0x2141FCu;
    // 0x2141fc: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x2141fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x214200: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x214200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x214204: 0xc0889ce  jal         func_222738
    ctx->pc = 0x214204u;
    SET_GPR_U32(ctx, 31, 0x21420Cu);
    ctx->pc = 0x214208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214204u;
    // 0x214208: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222738u, 0x214204u, 0x21420Cu)) {
        return;
    }
    ctx->pc = 0x21420Cu;
label_21420c:
    // 0x21420c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21420Cu;
    {
        const bool branch_taken_0x21420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21420Cu;
        // 0x214210: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21420c) {
            ctx->pc = 0x214228u;
            goto label_214228;
        }
    }
    ctx->pc = 0x214214u;
label_214214:
    // 0x214214: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x214214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x214218: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x214218u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x21421c: 0xc0887d4  jal         func_221F50
    ctx->pc = 0x21421Cu;
    SET_GPR_U32(ctx, 31, 0x214224u);
    ctx->pc = 0x214220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21421Cu;
    // 0x214220: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x221F50u, 0x21421Cu, 0x214224u)) {
        return;
    }
    ctx->pc = 0x214224u;
label_214224:
    // 0x214224: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x214224u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_214228:
    // 0x214228: 0xfee20038  sd          $v0, 0x38($s7)
    ctx->pc = 0x214228u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 56), GPR_U64(ctx, 2));
label_21422c:
    // 0x21422c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_214230:
    // 0x214230: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x214234: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x214234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214238: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x21423c: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x21423cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x214240: 0x3884000b  xori        $a0, $a0, 0xB
    ctx->pc = 0x214240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)11);
    // 0x214244: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x214244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x214248: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x214248u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x21424c: 0xaee20034  sw          $v0, 0x34($s7)
    ctx->pc = 0x21424cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 2));
    // 0x214250: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x214250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214254: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214254u;
    {
        const bool branch_taken_0x214254 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x214258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214254u;
        // 0x214258: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214254) {
            ctx->pc = 0x214268u;
            goto label_214268;
        }
    }
    ctx->pc = 0x21425Cu;
    // 0x21425c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x21425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214260u;
    {
        const bool branch_taken_0x214260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214260u;
        // 0x214264: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214260) {
            ctx->pc = 0x214278u;
            goto label_214278;
        }
    }
    ctx->pc = 0x214268u;
label_214268:
    // 0x214268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21426c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21426Cu;
    {
        const bool branch_taken_0x21426c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21426Cu;
        // 0x214270: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21426c) {
            ctx->pc = 0x21428Cu;
            goto label_21428c;
        }
    }
    ctx->pc = 0x214274u;
    // 0x214274: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x214274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_214278:
    // 0x214278: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x214278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x21427c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21427cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214280: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x214280u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
    // 0x214284: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x214284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x214288: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x214288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21428c:
    // 0x21428c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x21428cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x214290: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x214290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x214294: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x214294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x214298: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x214298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21429c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x21429cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2142a0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2142a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2142a4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2142a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2142a8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2142a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2142ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2142acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2142b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2142b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2142b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2142B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2142B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142B4u;
        // 0x2142b8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2142B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2142BCu;
    // 0x2142bc: 0x0  nop
    ctx->pc = 0x2142bcu;
    // NOP
    // 0x2142c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2142c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2142c4: 0x0  nop
    ctx->pc = 0x2142c4u;
    // NOP
    ctx->pc = 0x2142c8u;
}
