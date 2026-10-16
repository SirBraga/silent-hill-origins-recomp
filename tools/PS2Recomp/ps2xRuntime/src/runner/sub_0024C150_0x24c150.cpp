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

// Function: sub_0024C150
// Address: 0x24c150 - 0x24c310
void sub_0024C150_0x24c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C150_0x24c150");
#endif

    switch (ctx->pc) {
        case 0x24c150u: goto label_24c150;
        case 0x24c154u: goto label_24c154;
        case 0x24c158u: goto label_24c158;
        case 0x24c15cu: goto label_24c15c;
        case 0x24c160u: goto label_24c160;
        case 0x24c164u: goto label_24c164;
        case 0x24c168u: goto label_24c168;
        case 0x24c16cu: goto label_24c16c;
        case 0x24c170u: goto label_24c170;
        case 0x24c174u: goto label_24c174;
        case 0x24c178u: goto label_24c178;
        case 0x24c17cu: goto label_24c17c;
        case 0x24c180u: goto label_24c180;
        case 0x24c184u: goto label_24c184;
        case 0x24c188u: goto label_24c188;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c190u: goto label_24c190;
        case 0x24c194u: goto label_24c194;
        case 0x24c198u: goto label_24c198;
        case 0x24c19cu: goto label_24c19c;
        case 0x24c1a0u: goto label_24c1a0;
        case 0x24c1a4u: goto label_24c1a4;
        case 0x24c1a8u: goto label_24c1a8;
        case 0x24c1acu: goto label_24c1ac;
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1b4u: goto label_24c1b4;
        case 0x24c1b8u: goto label_24c1b8;
        case 0x24c1bcu: goto label_24c1bc;
        case 0x24c1c0u: goto label_24c1c0;
        case 0x24c1c4u: goto label_24c1c4;
        case 0x24c1c8u: goto label_24c1c8;
        case 0x24c1ccu: goto label_24c1cc;
        case 0x24c1d0u: goto label_24c1d0;
        case 0x24c1d4u: goto label_24c1d4;
        case 0x24c1d8u: goto label_24c1d8;
        case 0x24c1dcu: goto label_24c1dc;
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1e4u: goto label_24c1e4;
        case 0x24c1e8u: goto label_24c1e8;
        case 0x24c1ecu: goto label_24c1ec;
        case 0x24c1f0u: goto label_24c1f0;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c1f8u: goto label_24c1f8;
        case 0x24c1fcu: goto label_24c1fc;
        case 0x24c200u: goto label_24c200;
        case 0x24c204u: goto label_24c204;
        case 0x24c208u: goto label_24c208;
        case 0x24c20cu: goto label_24c20c;
        case 0x24c210u: goto label_24c210;
        case 0x24c214u: goto label_24c214;
        case 0x24c218u: goto label_24c218;
        case 0x24c21cu: goto label_24c21c;
        case 0x24c220u: goto label_24c220;
        case 0x24c224u: goto label_24c224;
        case 0x24c228u: goto label_24c228;
        case 0x24c22cu: goto label_24c22c;
        case 0x24c230u: goto label_24c230;
        case 0x24c234u: goto label_24c234;
        case 0x24c238u: goto label_24c238;
        case 0x24c23cu: goto label_24c23c;
        case 0x24c240u: goto label_24c240;
        case 0x24c244u: goto label_24c244;
        case 0x24c248u: goto label_24c248;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c250u: goto label_24c250;
        case 0x24c254u: goto label_24c254;
        case 0x24c258u: goto label_24c258;
        case 0x24c25cu: goto label_24c25c;
        case 0x24c260u: goto label_24c260;
        case 0x24c264u: goto label_24c264;
        case 0x24c268u: goto label_24c268;
        case 0x24c26cu: goto label_24c26c;
        case 0x24c270u: goto label_24c270;
        case 0x24c274u: goto label_24c274;
        case 0x24c278u: goto label_24c278;
        case 0x24c27cu: goto label_24c27c;
        case 0x24c280u: goto label_24c280;
        case 0x24c284u: goto label_24c284;
        case 0x24c288u: goto label_24c288;
        case 0x24c28cu: goto label_24c28c;
        case 0x24c290u: goto label_24c290;
        case 0x24c294u: goto label_24c294;
        case 0x24c298u: goto label_24c298;
        case 0x24c29cu: goto label_24c29c;
        case 0x24c2a0u: goto label_24c2a0;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2a8u: goto label_24c2a8;
        case 0x24c2acu: goto label_24c2ac;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2b4u: goto label_24c2b4;
        case 0x24c2b8u: goto label_24c2b8;
        case 0x24c2bcu: goto label_24c2bc;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2c4u: goto label_24c2c4;
        case 0x24c2c8u: goto label_24c2c8;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2d4u: goto label_24c2d4;
        case 0x24c2d8u: goto label_24c2d8;
        case 0x24c2dcu: goto label_24c2dc;
        case 0x24c2e0u: goto label_24c2e0;
        case 0x24c2e4u: goto label_24c2e4;
        case 0x24c2e8u: goto label_24c2e8;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f0u: goto label_24c2f0;
        case 0x24c2f4u: goto label_24c2f4;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c2fcu: goto label_24c2fc;
        case 0x24c300u: goto label_24c300;
        case 0x24c304u: goto label_24c304;
        case 0x24c308u: goto label_24c308;
        case 0x24c30cu: goto label_24c30c;
        default: break;
    }

    ctx->pc = 0x24c150u;

label_24c150:
    // 0x24c150: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_24c154:
    // 0x24c154: 0x8f828538  lw          $v0, -0x7AC8($gp)
    ctx->pc = 0x24c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935864)));
label_24c158:
    // 0x24c158: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x24c158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_24c15c:
    // 0x24c15c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x24c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_24c160:
    // 0x24c160: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c164:
    // 0x24c164: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24c164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_24c168:
    // 0x24c168: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x24c168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24c16c:
    // 0x24c16c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x24c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_24c170:
    // 0x24c170: 0xe2880b  movn        $s1, $a3, $v0
    ctx->pc = 0x24c170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7));
label_24c174:
    // 0x24c174: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x24c174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_24c178:
    // 0x24c178: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c17c:
    // 0x24c17c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24c17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24c180:
    // 0x24c180: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24c180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c184:
    // 0x24c184: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x24c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_24c188:
    // 0x24c188: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x24c188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_24c18c:
    // 0x24c18c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x24c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_24c190:
    // 0x24c190: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x24c190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_24c194:
    // 0x24c194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24c198:
    // 0x24c198: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_24c19c:
    if (ctx->pc == 0x24C19Cu) {
        ctx->pc = 0x24C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C198u;
        // 0x24c19c: 0xc6a80b  movn        $s5, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1A0u;
        goto label_24c1a0;
    }
    ctx->pc = 0x24C198u;
    {
        const bool branch_taken_0x24c198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C198u;
        // 0x24c19c: 0xc6a80b  movn        $s5, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c198) {
            ctx->pc = 0x24C1FCu;
            goto label_24c1fc;
        }
    }
    ctx->pc = 0x24C1A0u;
label_24c1a0:
    // 0x24c1a0: 0x8f848540  lw          $a0, -0x7AC0($gp)
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935872)));
label_24c1a4:
    // 0x24c1a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_24c1a8:
    if (ctx->pc == 0x24C1A8u) {
        ctx->pc = 0x24C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1A4u;
        // 0x24c1a8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1ACu;
        goto label_24c1ac;
    }
    ctx->pc = 0x24C1A4u;
    {
        const bool branch_taken_0x24c1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1A4u;
        // 0x24c1a8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1a4) {
            ctx->pc = 0x24C1BCu;
            goto label_24c1bc;
        }
    }
    ctx->pc = 0x24C1ACu;
label_24c1ac:
    // 0x24c1ac: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x24c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_24c1b0:
    // 0x24c1b0: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x24c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_24c1b4:
    // 0x24c1b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_24c1b8:
    if (ctx->pc == 0x24C1B8u) {
        ctx->pc = 0x24C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1B4u;
        // 0x24c1b8: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1BCu;
        goto label_24c1bc;
    }
    ctx->pc = 0x24C1B4u;
    {
        const bool branch_taken_0x24c1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1B4u;
        // 0x24c1b8: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1b4) {
            ctx->pc = 0x24C1D0u;
            goto label_24c1d0;
        }
    }
    ctx->pc = 0x24C1BCu;
label_24c1bc:
    // 0x24c1bc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24c1c0:
    // 0x24c1c0: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x24c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_24c1c4:
    // 0x24c1c4: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x24c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_24c1c8:
    // 0x24c1c8: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x24c1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
label_24c1cc:
    // 0x24c1cc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x24c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_24c1d0:
    // 0x24c1d0: 0x40f809  jalr        $v0
label_24c1d4:
    if (ctx->pc == 0x24C1D4u) {
        ctx->pc = 0x24C1D8u;
        goto label_24c1d8;
    }
    ctx->pc = 0x24C1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C1D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C1D0u, 0x24C1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C1D8u;
label_24c1d8:
    // 0x24c1d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c1dc:
    // 0x24c1dc: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
label_24c1e0:
    if (ctx->pc == 0x24C1E0u) {
        ctx->pc = 0x24C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1DCu;
        // 0x24c1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1E4u;
        goto label_24c1e4;
    }
    ctx->pc = 0x24C1DCu;
    {
        const bool branch_taken_0x24c1dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1DCu;
        // 0x24c1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1dc) {
            ctx->pc = 0x24C2E4u;
            goto label_24c2e4;
        }
    }
    ctx->pc = 0x24C1E4u;
label_24c1e4:
    // 0x24c1e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_24c1e8:
    if (ctx->pc == 0x24C1E8u) {
        ctx->pc = 0x24C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1E4u;
        // 0x24c1e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1ECu;
        goto label_24c1ec;
    }
    ctx->pc = 0x24C1E4u;
    {
        const bool branch_taken_0x24c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1E4u;
        // 0x24c1e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1e4) {
            ctx->pc = 0x24C200u;
            goto label_24c200;
        }
    }
    ctx->pc = 0x24C1ECu;
label_24c1ec:
    // 0x24c1ec: 0xc0930d6  jal         func_24C358
label_24c1f0:
    if (ctx->pc == 0x24C1F0u) {
        ctx->pc = 0x24C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1ECu;
        // 0x24c1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1F4u;
        goto label_24c1f4;
    }
    ctx->pc = 0x24C1ECu;
    SET_GPR_U32(ctx, 31, 0x24C1F4u);
    ctx->pc = 0x24C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1ECu;
    // 0x24c1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C358u, 0x24C1ECu, 0x24C1F4u)) {
        return;
    }
    ctx->pc = 0x24C1F4u;
label_24c1f4:
    // 0x24c1f4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_24c1f8:
    if (ctx->pc == 0x24C1F8u) {
        ctx->pc = 0x24C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1F4u;
        // 0x24c1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C1FCu;
        goto label_24c1fc;
    }
    ctx->pc = 0x24C1F4u;
    {
        const bool branch_taken_0x24c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1F4u;
        // 0x24c1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1f4) {
            ctx->pc = 0x24C2E4u;
            goto label_24c2e4;
        }
    }
    ctx->pc = 0x24C1FCu;
label_24c1fc:
    // 0x24c1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24c200:
    // 0x24c200: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x24c200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_24c204:
    // 0x24c204: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x24c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_24c208:
    // 0x24c208: 0x152023  negu        $a0, $s5
    ctx->pc = 0x24c208u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_24c20c:
    // 0x24c20c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x24c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_24c210:
    // 0x24c210: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x24c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_24c214:
    // 0x24c214: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x24c214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_24c218:
    // 0x24c218: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x24c218u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_24c21c:
    // 0x24c21c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x24c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_24c220:
    // 0x24c220: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x24c220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_24c224:
    // 0x24c224: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x24c224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c228:
    // 0x24c228: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x24c228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_24c22c:
    // 0x24c22c: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x24c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
label_24c230:
    // 0x24c230: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x24c230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_24c234:
    // 0x24c234: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x24c234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_24c238:
    // 0x24c238: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_24c23c:
    if (ctx->pc == 0x24C23Cu) {
        ctx->pc = 0x24C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C238u;
        // 0x24c23c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C240u;
        goto label_24c240;
    }
    ctx->pc = 0x24C238u;
    {
        const bool branch_taken_0x24c238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C238u;
        // 0x24c23c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c238) {
            ctx->pc = 0x24C2B0u;
            goto label_24c2b0;
        }
    }
    ctx->pc = 0x24C240u;
label_24c240:
    // 0x24c240: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x24c240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24c244:
    // 0x24c244: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24c244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24c248:
    // 0x24c248: 0x24770fc8  addiu       $s7, $v1, 0xFC8
    ctx->pc = 0x24c248u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_24c24c:
    // 0x24c24c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x24c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_24c250:
    // 0x24c250: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x24c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_24c254:
    // 0x24c254: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x24c254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_24c258:
    // 0x24c258: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x24c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_24c25c:
    // 0x24c25c: 0x0  nop
    ctx->pc = 0x24c25cu;
    // NOP
label_24c260:
    // 0x24c260: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x24c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_24c264:
    // 0x24c264: 0x40f809  jalr        $v0
label_24c268:
    if (ctx->pc == 0x24C268u) {
        ctx->pc = 0x24C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C264u;
        // 0x24c268: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C26Cu;
        goto label_24c26c;
    }
    ctx->pc = 0x24C264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C26Cu);
        ctx->pc = 0x24C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C264u;
        // 0x24c268: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C264u, 0x24C26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C26Cu;
label_24c26c:
    // 0x24c26c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24c26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c270:
    // 0x24c270: 0x10e0ffde  beqz        $a3, . + 4 + (-0x22 << 2)
label_24c274:
    if (ctx->pc == 0x24C274u) {
        ctx->pc = 0x24C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C270u;
        // 0x24c274: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C278u;
        goto label_24c278;
    }
    ctx->pc = 0x24C270u;
    {
        const bool branch_taken_0x24c270 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C270u;
        // 0x24c274: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c270) {
            ctx->pc = 0x24C1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c1ec;
        }
    }
    ctx->pc = 0x24C278u;
label_24c278:
    // 0x24c278: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x24c278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_24c27c:
    // 0x24c27c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x24c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_24c280:
    // 0x24c280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c284:
    // 0x24c284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c288:
    // 0x24c288: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24c288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24c28c:
    // 0x24c28c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24c290:
    // 0x24c290: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x24c290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
label_24c294:
    // 0x24c294: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x24c294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_24c298:
    // 0x24c298: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24c29c:
    // 0x24c29c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x24c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_24c2a0:
    // 0x24c2a0: 0xc0c493d  jal         func_3124F4
label_24c2a4:
    if (ctx->pc == 0x24C2A4u) {
        ctx->pc = 0x24C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A0u;
        // 0x24c2a4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2A8u;
        goto label_24c2a8;
    }
    ctx->pc = 0x24C2A0u;
    SET_GPR_U32(ctx, 31, 0x24C2A8u);
    ctx->pc = 0x24C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2A0u;
    // 0x24c2a4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x24C2A0u, 0x24C2A8u)) {
        return;
    }
    ctx->pc = 0x24C2A8u;
label_24c2a8:
    // 0x24c2a8: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_24c2ac:
    if (ctx->pc == 0x24C2ACu) {
        ctx->pc = 0x24C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A8u;
        // 0x24c2ac: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2B0u;
        goto label_24c2b0;
    }
    ctx->pc = 0x24C2A8u;
    {
        const bool branch_taken_0x24c2a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c2a8) {
            ctx->pc = 0x24C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C2A8u;
            // 0x24c2ac: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C2B0u;
label_24c2b0:
    // 0x24c2b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24c2b4:
    // 0x24c2b4: 0x8c633f68  lw          $v1, 0x3F68($v1)
    ctx->pc = 0x24c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16232)));
label_24c2b8:
    // 0x24c2b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_24c2bc:
    // 0x24c2bc: 0x24423f68  addiu       $v0, $v0, 0x3F68
    ctx->pc = 0x24c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16232));
label_24c2c0:
    // 0x24c2c0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x24c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_24c2c4:
    // 0x24c2c4: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x24c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_24c2c8:
    // 0x24c2c8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x24c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_24c2cc:
    // 0x24c2cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c2d0:
    // 0x24c2d0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24c2d4:
    // 0x24c2d4: 0x8c633f68  lw          $v1, 0x3F68($v1)
    ctx->pc = 0x24c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16232)));
label_24c2d8:
    // 0x24c2d8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_24c2dc:
    // 0x24c2dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_24c2e0:
    // 0x24c2e0: 0xac243f68  sw          $a0, 0x3F68($at)
    ctx->pc = 0x24c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16232), GPR_U32(ctx, 4));
label_24c2e4:
    // 0x24c2e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x24c2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24c2e8:
    // 0x24c2e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x24c2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24c2ec:
    // 0x24c2ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x24c2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24c2f0:
    // 0x24c2f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x24c2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24c2f4:
    // 0x24c2f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24c2f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24c2f8:
    // 0x24c2f8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x24c2f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24c2fc:
    // 0x24c2fc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x24c2fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c300:
    // 0x24c300: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x24c300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c304:
    // 0x24c304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c308:
    // 0x24c308: 0x3e00008  jr          $ra
label_24c30c:
    if (ctx->pc == 0x24C30Cu) {
        ctx->pc = 0x24C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C308u;
        // 0x24c30c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C310u;
        goto label_fallthrough_0x24c308;
    }
    ctx->pc = 0x24C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C308u;
        // 0x24c30c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c308:
    ctx->pc = 0x24C310u;
}
