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

// Function: sub_0028E858
// Address: 0x28e858 - 0x28e9a8
void sub_0028E858_0x28e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E858_0x28e858");
#endif

    switch (ctx->pc) {
        case 0x28e858u: goto label_28e858;
        case 0x28e85cu: goto label_28e85c;
        case 0x28e860u: goto label_28e860;
        case 0x28e864u: goto label_28e864;
        case 0x28e868u: goto label_28e868;
        case 0x28e86cu: goto label_28e86c;
        case 0x28e870u: goto label_28e870;
        case 0x28e874u: goto label_28e874;
        case 0x28e878u: goto label_28e878;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e880u: goto label_28e880;
        case 0x28e884u: goto label_28e884;
        case 0x28e888u: goto label_28e888;
        case 0x28e88cu: goto label_28e88c;
        case 0x28e890u: goto label_28e890;
        case 0x28e894u: goto label_28e894;
        case 0x28e898u: goto label_28e898;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8a0u: goto label_28e8a0;
        case 0x28e8a4u: goto label_28e8a4;
        case 0x28e8a8u: goto label_28e8a8;
        case 0x28e8acu: goto label_28e8ac;
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8b4u: goto label_28e8b4;
        case 0x28e8b8u: goto label_28e8b8;
        case 0x28e8bcu: goto label_28e8bc;
        case 0x28e8c0u: goto label_28e8c0;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        default: break;
    }

    ctx->pc = 0x28e858u;

label_28e858:
    // 0x28e858: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28e85c:
    // 0x28e85c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x28e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_28e860:
    // 0x28e860: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_28e864:
    // 0x28e864: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28e864u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e868:
    // 0x28e868: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28e86c:
    // 0x28e86c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28e86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28e870:
    // 0x28e870: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28e870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28e874:
    // 0x28e874: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28e874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28e878:
    // 0x28e878: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_28e87c:
    // 0x28e87c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x28e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_28e880:
    // 0x28e880: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x28e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_28e884:
    // 0x28e884: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x28e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_28e888:
    // 0x28e888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28e88c:
    // 0x28e88c: 0xc0a396c  jal         func_28E5B0
label_28e890:
    if (ctx->pc == 0x28E890u) {
        ctx->pc = 0x28E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E88Cu;
        // 0x28e890: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E894u;
        goto label_28e894;
    }
    ctx->pc = 0x28E88Cu;
    SET_GPR_U32(ctx, 31, 0x28E894u);
    ctx->pc = 0x28E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E88Cu;
    // 0x28e890: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E5B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28E5B0u, 0x28E88Cu, 0x28E894u)) {
        return;
    }
    ctx->pc = 0x28E894u;
label_28e894:
    // 0x28e894: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e898:
    // 0x28e898: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_28e89c:
    if (ctx->pc == 0x28E89Cu) {
        ctx->pc = 0x28E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E898u;
        // 0x28e89c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8A0u;
        goto label_28e8a0;
    }
    ctx->pc = 0x28E898u;
    {
        const bool branch_taken_0x28e898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E898u;
        // 0x28e89c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e898) {
            ctx->pc = 0x28E960u;
            goto label_28e960;
        }
    }
    ctx->pc = 0x28E8A0u;
label_28e8a0:
    // 0x28e8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e8a4:
    // 0x28e8a4: 0x261368ec  addiu       $s3, $s0, 0x68EC
    ctx->pc = 0x28e8a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 26860));
label_28e8a8:
    // 0x28e8a8: 0xae0068ec  sw          $zero, 0x68EC($s0)
    ctx->pc = 0x28e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26860), GPR_U32(ctx, 0));
label_28e8ac:
    // 0x28e8ac: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x28e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_28e8b0:
    // 0x28e8b0: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x28e8b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
label_28e8b4:
    // 0x28e8b4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x28e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_28e8b8:
    // 0x28e8b8: 0xc0a38f6  jal         func_28E3D8
label_28e8bc:
    if (ctx->pc == 0x28E8BCu) {
        ctx->pc = 0x28E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8B8u;
        // 0x28e8bc: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8C0u;
        goto label_28e8c0;
    }
    ctx->pc = 0x28E8B8u;
    SET_GPR_U32(ctx, 31, 0x28E8C0u);
    ctx->pc = 0x28E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8B8u;
    // 0x28e8bc: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E3D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28E3D8u, 0x28E8B8u, 0x28E8C0u)) {
        return;
    }
    ctx->pc = 0x28E8C0u;
label_28e8c0:
    // 0x28e8c0: 0x8e0368ec  lw          $v1, 0x68EC($s0)
    ctx->pc = 0x28e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26860)));
label_28e8c4:
    // 0x28e8c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28e8c8:
    // 0x28e8c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_28e8cc:
    if (ctx->pc == 0x28E8CCu) {
        ctx->pc = 0x28E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8C8u;
        // 0x28e8cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8D0u;
        goto label_28e8d0;
    }
    ctx->pc = 0x28E8C8u;
    {
        const bool branch_taken_0x28e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e8c8) {
            ctx->pc = 0x28E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E8C8u;
            // 0x28e8cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E8D0u;
            goto label_28e8d0;
        }
    }
    ctx->pc = 0x28E8D0u;
label_28e8d0:
    // 0x28e8d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x28e8d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28e8d4:
    // 0x28e8d4: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x28e8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28e8d8:
    // 0x28e8d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_28e8dc:
    // 0x28e8dc: 0x1812  mflo        $v1
    ctx->pc = 0x28e8dcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_28e8e0:
    // 0x28e8e0: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_28e8e4:
    if (ctx->pc == 0x28E8E4u) {
        ctx->pc = 0x28E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E0u;
        // 0x28e8e4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8E8u;
        goto label_28e8e8;
    }
    ctx->pc = 0x28E8E0u;
    {
        const bool branch_taken_0x28e8e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E0u;
        // 0x28e8e4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8e0) {
            ctx->pc = 0x28E924u;
            goto label_28e924;
        }
    }
    ctx->pc = 0x28E8E8u;
label_28e8e8:
    // 0x28e8e8: 0x2675fac4  addiu       $s5, $s3, -0x53C
    ctx->pc = 0x28e8e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965956));
label_28e8ec:
    // 0x28e8ec: 0x26d40fc8  addiu       $s4, $s6, 0xFC8
    ctx->pc = 0x28e8ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_28e8f0:
    // 0x28e8f0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x28e8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e8f4:
    // 0x28e8f4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x28e8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e8f8:
    // 0x28e8f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_28e8fc:
    if (ctx->pc == 0x28E8FCu) {
        ctx->pc = 0x28E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8F8u;
        // 0x28e8fc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E900u;
        goto label_28e900;
    }
    ctx->pc = 0x28E8F8u;
    {
        const bool branch_taken_0x28e8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8F8u;
        // 0x28e8fc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8f8) {
            ctx->pc = 0x28E918u;
            goto label_28e918;
        }
    }
    ctx->pc = 0x28E900u;
label_28e900:
    // 0x28e900: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x28e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_28e904:
    // 0x28e904: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28e904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e908:
    // 0x28e908: 0x8ea40534  lw          $a0, 0x534($s5)
    ctx->pc = 0x28e908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1332)));
label_28e90c:
    // 0x28e90c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28e910:
    // 0x28e910: 0x40f809  jalr        $v0
label_28e914:
    if (ctx->pc == 0x28E914u) {
        ctx->pc = 0x28E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E910u;
        // 0x28e914: 0xac730004  sw          $s3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E918u;
        goto label_28e918;
    }
    ctx->pc = 0x28E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E918u);
        ctx->pc = 0x28E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E910u;
        // 0x28e914: 0xac730004  sw          $s3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E910u, 0x28E918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E918u;
label_28e918:
    // 0x28e918: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x28e918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e91c:
    // 0x28e91c: 0x1472fff6  bne         $v1, $s2, . + 4 + (-0xA << 2)
label_28e920:
    if (ctx->pc == 0x28E920u) {
        ctx->pc = 0x28E924u;
        goto label_28e924;
    }
    ctx->pc = 0x28E91Cu;
    {
        const bool branch_taken_0x28e91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x28e91c) {
            ctx->pc = 0x28E8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e8f8;
        }
    }
    ctx->pc = 0x28E924u;
label_28e924:
    // 0x28e924: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x28e924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_28e928:
    // 0x28e928: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28e92c:
    if (ctx->pc == 0x28E92Cu) {
        ctx->pc = 0x28E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E928u;
        // 0x28e92c: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E930u;
        goto label_28e930;
    }
    ctx->pc = 0x28E928u;
    {
        const bool branch_taken_0x28e928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E928u;
        // 0x28e92c: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e928) {
            ctx->pc = 0x28E93Cu;
            goto label_28e93c;
        }
    }
    ctx->pc = 0x28E930u;
label_28e930:
    // 0x28e930: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_28e934:
    // 0x28e934: 0x40f809  jalr        $v0
label_28e938:
    if (ctx->pc == 0x28E938u) {
        ctx->pc = 0x28E93Cu;
        goto label_28e93c;
    }
    ctx->pc = 0x28E934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E93Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E934u, 0x28E93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E93Cu;
label_28e93c:
    // 0x28e93c: 0x26c30fc8  addiu       $v1, $s6, 0xFC8
    ctx->pc = 0x28e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_28e940:
    // 0x28e940: 0x26e663b0  addiu       $a2, $s7, 0x63B0
    ctx->pc = 0x28e940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 25520));
label_28e944:
    // 0x28e944: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x28e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_28e948:
    // 0x28e948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e94c:
    // 0x28e94c: 0x8cc40538  lw          $a0, 0x538($a2)
    ctx->pc = 0x28e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1336)));
label_28e950:
    // 0x28e950: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x28e950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_28e954:
    // 0x28e954: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x28e954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_28e958:
    // 0x28e958: 0x40f809  jalr        $v0
label_28e95c:
    if (ctx->pc == 0x28E95Cu) {
        ctx->pc = 0x28E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E958u;
        // 0x28e95c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E960u;
        goto label_28e960;
    }
    ctx->pc = 0x28E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E960u);
        ctx->pc = 0x28E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E958u;
        // 0x28e95c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E958u, 0x28E960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E960u;
label_28e960:
    // 0x28e960: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x28e960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28e964:
    // 0x28e964: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28e964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28e968:
    // 0x28e968: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28e968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28e96c:
    // 0x28e96c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28e96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28e970:
    // 0x28e970: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28e970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e974:
    // 0x28e974: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28e974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28e978:
    // 0x28e978: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x28e978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e97c:
    // 0x28e97c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x28e97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e980:
    // 0x28e980: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x28e980u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e984:
    // 0x28e984: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x28e984u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28e988:
    // 0x28e988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e98c:
    // 0x28e98c: 0x3e00008  jr          $ra
label_28e990:
    if (ctx->pc == 0x28E990u) {
        ctx->pc = 0x28E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E98Cu;
        // 0x28e990: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E994u;
        goto label_28e994;
    }
    ctx->pc = 0x28E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E98Cu;
        // 0x28e990: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E994u;
label_28e994:
    // 0x28e994: 0x0  nop
    ctx->pc = 0x28e994u;
    // NOP
label_28e998:
    // 0x28e998: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28e99c:
    // 0x28e99c: 0x0  nop
    ctx->pc = 0x28e99cu;
    // NOP
label_28e9a0:
    // 0x28e9a0: 0xac4007e4  sw          $zero, 0x7E4($v0)
    ctx->pc = 0x28e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2020), GPR_U32(ctx, 0));
label_28e9a4:
    // 0x28e9a4: 0x0  nop
    ctx->pc = 0x28e9a4u;
    // NOP
    ctx->pc = 0x28e9a8u;
}
