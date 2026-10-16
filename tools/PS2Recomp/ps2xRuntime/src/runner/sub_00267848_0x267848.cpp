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

// Function: sub_00267848
// Address: 0x267848 - 0x267990
void sub_00267848_0x267848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267848_0x267848");
#endif

    switch (ctx->pc) {
        case 0x267848u: goto label_267848;
        case 0x26784cu: goto label_26784c;
        case 0x267850u: goto label_267850;
        case 0x267854u: goto label_267854;
        case 0x267858u: goto label_267858;
        case 0x26785cu: goto label_26785c;
        case 0x267860u: goto label_267860;
        case 0x267864u: goto label_267864;
        case 0x267868u: goto label_267868;
        case 0x26786cu: goto label_26786c;
        case 0x267870u: goto label_267870;
        case 0x267874u: goto label_267874;
        case 0x267878u: goto label_267878;
        case 0x26787cu: goto label_26787c;
        case 0x267880u: goto label_267880;
        case 0x267884u: goto label_267884;
        case 0x267888u: goto label_267888;
        case 0x26788cu: goto label_26788c;
        case 0x267890u: goto label_267890;
        case 0x267894u: goto label_267894;
        case 0x267898u: goto label_267898;
        case 0x26789cu: goto label_26789c;
        case 0x2678a0u: goto label_2678a0;
        case 0x2678a4u: goto label_2678a4;
        case 0x2678a8u: goto label_2678a8;
        case 0x2678acu: goto label_2678ac;
        case 0x2678b0u: goto label_2678b0;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678b8u: goto label_2678b8;
        case 0x2678bcu: goto label_2678bc;
        case 0x2678c0u: goto label_2678c0;
        case 0x2678c4u: goto label_2678c4;
        case 0x2678c8u: goto label_2678c8;
        case 0x2678ccu: goto label_2678cc;
        case 0x2678d0u: goto label_2678d0;
        case 0x2678d4u: goto label_2678d4;
        case 0x2678d8u: goto label_2678d8;
        case 0x2678dcu: goto label_2678dc;
        case 0x2678e0u: goto label_2678e0;
        case 0x2678e4u: goto label_2678e4;
        case 0x2678e8u: goto label_2678e8;
        case 0x2678ecu: goto label_2678ec;
        case 0x2678f0u: goto label_2678f0;
        case 0x2678f4u: goto label_2678f4;
        case 0x2678f8u: goto label_2678f8;
        case 0x2678fcu: goto label_2678fc;
        case 0x267900u: goto label_267900;
        case 0x267904u: goto label_267904;
        case 0x267908u: goto label_267908;
        case 0x26790cu: goto label_26790c;
        case 0x267910u: goto label_267910;
        case 0x267914u: goto label_267914;
        case 0x267918u: goto label_267918;
        case 0x26791cu: goto label_26791c;
        case 0x267920u: goto label_267920;
        case 0x267924u: goto label_267924;
        case 0x267928u: goto label_267928;
        case 0x26792cu: goto label_26792c;
        case 0x267930u: goto label_267930;
        case 0x267934u: goto label_267934;
        case 0x267938u: goto label_267938;
        case 0x26793cu: goto label_26793c;
        case 0x267940u: goto label_267940;
        case 0x267944u: goto label_267944;
        case 0x267948u: goto label_267948;
        case 0x26794cu: goto label_26794c;
        case 0x267950u: goto label_267950;
        case 0x267954u: goto label_267954;
        case 0x267958u: goto label_267958;
        case 0x26795cu: goto label_26795c;
        case 0x267960u: goto label_267960;
        case 0x267964u: goto label_267964;
        case 0x267968u: goto label_267968;
        case 0x26796cu: goto label_26796c;
        case 0x267970u: goto label_267970;
        case 0x267974u: goto label_267974;
        case 0x267978u: goto label_267978;
        case 0x26797cu: goto label_26797c;
        case 0x267980u: goto label_267980;
        case 0x267984u: goto label_267984;
        case 0x267988u: goto label_267988;
        case 0x26798cu: goto label_26798c;
        default: break;
    }

    ctx->pc = 0x267848u;

label_267848:
    // 0x267848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26784c:
    // 0x26784c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_267850:
    // 0x267850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x267850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_267854:
    // 0x267854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_267858:
    // 0x267858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26785c:
    // 0x26785c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26785cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_267860:
    // 0x267860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x267860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_267864:
    // 0x267864: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_267868:
    if (ctx->pc == 0x267868u) {
        ctx->pc = 0x267868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267864u;
        // 0x267868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26786Cu;
        goto label_26786c;
    }
    ctx->pc = 0x267864u;
    {
        const bool branch_taken_0x267864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267864u;
        // 0x267868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267864) {
            ctx->pc = 0x2678E0u;
            goto label_2678e0;
        }
    }
    ctx->pc = 0x26786Cu;
label_26786c:
    // 0x26786c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26786cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267870:
    // 0x267870: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x267870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267874:
    // 0x267874: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x267874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_267878:
    // 0x267878: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x267878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_26787c:
    // 0x26787c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_267880:
    if (ctx->pc == 0x267880u) {
        ctx->pc = 0x267880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26787Cu;
        // 0x267880: 0x87102b  sltu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267884u;
        goto label_267884;
    }
    ctx->pc = 0x26787Cu;
    {
        const bool branch_taken_0x26787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x267880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26787Cu;
        // 0x267880: 0x87102b  sltu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26787c) {
            ctx->pc = 0x2678B4u;
            goto label_2678b4;
        }
    }
    ctx->pc = 0x267884u;
label_267884:
    // 0x267884: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x267884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_267888:
    // 0x267888: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x267888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_26788c:
    // 0x26788c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x26788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_267890:
    // 0x267890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x267890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_267894:
    // 0x267894: 0x0  nop
    ctx->pc = 0x267894u;
    // NOP
label_267898:
    // 0x267898: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x267898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_26789c:
    // 0x26789c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2678a0:
    if (ctx->pc == 0x2678A0u) {
        ctx->pc = 0x2678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26789Cu;
        // 0x2678a0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678A4u;
        goto label_2678a4;
    }
    ctx->pc = 0x26789Cu;
    {
        const bool branch_taken_0x26789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26789Cu;
        // 0x2678a0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26789c) {
            ctx->pc = 0x2678E0u;
            goto label_2678e0;
        }
    }
    ctx->pc = 0x2678A4u;
label_2678a4:
    // 0x2678a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2678a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2678a8:
    // 0x2678a8: 0x5446fffb  bnel        $v0, $a2, . + 4 + (-0x5 << 2)
label_2678ac:
    if (ctx->pc == 0x2678ACu) {
        ctx->pc = 0x2678ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678A8u;
        // 0x2678ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678B0u;
        goto label_2678b0;
    }
    ctx->pc = 0x2678A8u;
    {
        const bool branch_taken_0x2678a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2678a8) {
            ctx->pc = 0x2678ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2678A8u;
            // 0x2678ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267898;
        }
    }
    ctx->pc = 0x2678B0u;
label_2678b0:
    // 0x2678b0: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2678b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2678b4:
    // 0x2678b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2678b8:
    if (ctx->pc == 0x2678B8u) {
        ctx->pc = 0x2678B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678B4u;
        // 0x2678b8: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678BCu;
        goto label_2678bc;
    }
    ctx->pc = 0x2678B4u;
    {
        const bool branch_taken_0x2678b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678B4u;
        // 0x2678b8: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678b4) {
            ctx->pc = 0x2678E0u;
            goto label_2678e0;
        }
    }
    ctx->pc = 0x2678BCu;
label_2678bc:
    // 0x2678bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2678bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2678c0:
    // 0x2678c0: 0xc092848  jal         func_24A120
label_2678c4:
    if (ctx->pc == 0x2678C4u) {
        ctx->pc = 0x2678C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678C0u;
        // 0x2678c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678C8u;
        goto label_2678c8;
    }
    ctx->pc = 0x2678C0u;
    SET_GPR_U32(ctx, 31, 0x2678C8u);
    ctx->pc = 0x2678C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2678C0u;
    // 0x2678c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2678C0u, 0x2678C8u)) {
        return;
    }
    ctx->pc = 0x2678C8u;
label_2678c8:
    // 0x2678c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2678c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2678cc:
    // 0x2678cc: 0xc09281a  jal         func_24A068
label_2678d0:
    if (ctx->pc == 0x2678D0u) {
        ctx->pc = 0x2678D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678CCu;
        // 0x2678d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678D4u;
        goto label_2678d4;
    }
    ctx->pc = 0x2678CCu;
    SET_GPR_U32(ctx, 31, 0x2678D4u);
    ctx->pc = 0x2678D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2678CCu;
    // 0x2678d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2678CCu, 0x2678D4u)) {
        return;
    }
    ctx->pc = 0x2678D4u;
label_2678d4:
    // 0x2678d4: 0x10000027  b           . + 4 + (0x27 << 2)
label_2678d8:
    if (ctx->pc == 0x2678D8u) {
        ctx->pc = 0x2678D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678D4u;
        // 0x2678d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678DCu;
        goto label_2678dc;
    }
    ctx->pc = 0x2678D4u;
    {
        const bool branch_taken_0x2678d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678D4u;
        // 0x2678d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678d4) {
            ctx->pc = 0x267974u;
            goto label_267974;
        }
    }
    ctx->pc = 0x2678DCu;
label_2678dc:
    // 0x2678dc: 0x0  nop
    ctx->pc = 0x2678dcu;
    // NOP
label_2678e0:
    // 0x2678e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2678e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2678e4:
    // 0x2678e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2678e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2678e8:
    // 0x2678e8: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
label_2678ec:
    if (ctx->pc == 0x2678ECu) {
        ctx->pc = 0x2678ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678E8u;
        // 0x2678ec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2678F0u;
        goto label_2678f0;
    }
    ctx->pc = 0x2678E8u;
    {
        const bool branch_taken_0x2678e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2678e8) {
            ctx->pc = 0x2678ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2678E8u;
            // 0x2678ec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267924u;
            goto label_267924;
        }
    }
    ctx->pc = 0x2678F0u;
label_2678f0:
    // 0x2678f0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2678f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2678f4:
    // 0x2678f4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2678f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2678f8:
    // 0x2678f8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2678f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2678fc:
    // 0x2678fc: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2678fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_267900:
    // 0x267900: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x267900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_267904:
    // 0x267904: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x267904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267908:
    // 0x267908: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x267908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_26790c:
    // 0x26790c: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x26790cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_267910:
    // 0x267910: 0x2812  mflo        $a1
    ctx->pc = 0x267910u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_267914:
    // 0x267914: 0x40f809  jalr        $v0
label_267918:
    if (ctx->pc == 0x267918u) {
        ctx->pc = 0x267918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267914u;
        // 0x267918: 0x34c60131  ori         $a2, $a2, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26791Cu;
        goto label_26791c;
    }
    ctx->pc = 0x267914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26791Cu);
        ctx->pc = 0x267918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267914u;
        // 0x267918: 0x34c60131  ori         $a2, $a2, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267914u, 0x26791Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26791Cu;
label_26791c:
    // 0x26791c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26791cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_267920:
    // 0x267920: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x267920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_267924:
    // 0x267924: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x267924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_267928:
    // 0x267928: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x267928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26792c:
    // 0x26792c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x26792cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_267930:
    // 0x267930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_267934:
    // 0x267934: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x267934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_267938:
    // 0x267938: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_26793c:
    // 0x26793c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_267940:
    // 0x267940: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x267940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_267944:
    // 0x267944: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_267948:
    // 0x267948: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x267948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_26794c:
    // 0x26794c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_267950:
    // 0x267950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x267950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_267954:
    // 0x267954: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x267954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_267958:
    // 0x267958: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x267958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_26795c:
    // 0x26795c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x26795cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_267960:
    // 0x267960: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x267960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_267964:
    // 0x267964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_267968:
    if (ctx->pc == 0x267968u) {
        ctx->pc = 0x267968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267964u;
        // 0x267968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26796Cu;
        goto label_26796c;
    }
    ctx->pc = 0x267964u;
    {
        const bool branch_taken_0x267964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267964u;
        // 0x267968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267964) {
            ctx->pc = 0x267978u;
            goto label_267978;
        }
    }
    ctx->pc = 0x26796Cu;
label_26796c:
    // 0x26796c: 0xc099db8  jal         func_2676E0
label_267970:
    if (ctx->pc == 0x267970u) {
        ctx->pc = 0x267970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26796Cu;
        // 0x267970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267974u;
        goto label_267974;
    }
    ctx->pc = 0x26796Cu;
    SET_GPR_U32(ctx, 31, 0x267974u);
    ctx->pc = 0x267970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26796Cu;
    // 0x267970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2676E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2676E0u, 0x26796Cu, 0x267974u)) {
        return;
    }
    ctx->pc = 0x267974u;
label_267974:
    // 0x267974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x267974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267978:
    // 0x267978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x267978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26797c:
    // 0x26797c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26797cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_267980:
    // 0x267980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_267984:
    // 0x267984: 0x3e00008  jr          $ra
label_267988:
    if (ctx->pc == 0x267988u) {
        ctx->pc = 0x267988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267984u;
        // 0x267988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26798Cu;
        goto label_26798c;
    }
    ctx->pc = 0x267984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267984u;
        // 0x267988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26798Cu;
label_26798c:
    // 0x26798c: 0x0  nop
    ctx->pc = 0x26798cu;
    // NOP
    ctx->pc = 0x267990u;
}
