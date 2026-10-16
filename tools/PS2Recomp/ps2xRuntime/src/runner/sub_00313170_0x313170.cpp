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

// Function: sub_00313170
// Address: 0x313170 - 0x313228
void sub_00313170_0x313170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313170_0x313170");
#endif

    switch (ctx->pc) {
        case 0x313170u: goto label_313170;
        case 0x313174u: goto label_313174;
        case 0x313178u: goto label_313178;
        case 0x31317cu: goto label_31317c;
        case 0x313180u: goto label_313180;
        case 0x313184u: goto label_313184;
        case 0x313188u: goto label_313188;
        case 0x31318cu: goto label_31318c;
        case 0x313190u: goto label_313190;
        case 0x313194u: goto label_313194;
        case 0x313198u: goto label_313198;
        case 0x31319cu: goto label_31319c;
        case 0x3131a0u: goto label_3131a0;
        case 0x3131a4u: goto label_3131a4;
        case 0x3131a8u: goto label_3131a8;
        case 0x3131acu: goto label_3131ac;
        case 0x3131b0u: goto label_3131b0;
        case 0x3131b4u: goto label_3131b4;
        case 0x3131b8u: goto label_3131b8;
        case 0x3131bcu: goto label_3131bc;
        case 0x3131c0u: goto label_3131c0;
        case 0x3131c4u: goto label_3131c4;
        case 0x3131c8u: goto label_3131c8;
        case 0x3131ccu: goto label_3131cc;
        case 0x3131d0u: goto label_3131d0;
        case 0x3131d4u: goto label_3131d4;
        case 0x3131d8u: goto label_3131d8;
        case 0x3131dcu: goto label_3131dc;
        case 0x3131e0u: goto label_3131e0;
        case 0x3131e4u: goto label_3131e4;
        case 0x3131e8u: goto label_3131e8;
        case 0x3131ecu: goto label_3131ec;
        case 0x3131f0u: goto label_3131f0;
        case 0x3131f4u: goto label_3131f4;
        case 0x3131f8u: goto label_3131f8;
        case 0x3131fcu: goto label_3131fc;
        case 0x313200u: goto label_313200;
        case 0x313204u: goto label_313204;
        case 0x313208u: goto label_313208;
        case 0x31320cu: goto label_31320c;
        case 0x313210u: goto label_313210;
        case 0x313214u: goto label_313214;
        case 0x313218u: goto label_313218;
        case 0x31321cu: goto label_31321c;
        case 0x313220u: goto label_313220;
        case 0x313224u: goto label_313224;
        default: break;
    }

    ctx->pc = 0x313170u;

label_313170:
    // 0x313170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_313174:
    // 0x313174: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x313174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_313178:
    // 0x313178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31317c:
    // 0x31317c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31317cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313180:
    // 0x313180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_313184:
    // 0x313184: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_313188:
    if (ctx->pc == 0x313188u) {
        ctx->pc = 0x313188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313184u;
        // 0x313188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31318Cu;
        goto label_31318c;
    }
    ctx->pc = 0x313184u;
    {
        const bool branch_taken_0x313184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313184u;
        // 0x313188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313184) {
            ctx->pc = 0x313210u;
            goto label_313210;
        }
    }
    ctx->pc = 0x31318Cu;
label_31318c:
    // 0x31318c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x31318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_313190:
    // 0x313190: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_313194:
    if (ctx->pc == 0x313194u) {
        ctx->pc = 0x313194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313190u;
        // 0x313194: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313198u;
        goto label_313198;
    }
    ctx->pc = 0x313190u;
    {
        const bool branch_taken_0x313190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313190) {
            ctx->pc = 0x313194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313190u;
            // 0x313194: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3131A8u;
            goto label_3131a8;
        }
    }
    ctx->pc = 0x313198u;
label_313198:
    // 0x313198: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_31319c:
    // 0x31319c: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x31319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27852)));
label_3131a0:
    // 0x3131a0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3131a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3131a4:
    // 0x3131a4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3131a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3131a8:
    // 0x3131a8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3131ac:
    // 0x3131ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3131b0:
    if (ctx->pc == 0x3131B0u) {
        ctx->pc = 0x3131B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131ACu;
        // 0x3131b0: 0x8602000c  lh          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131B4u;
        goto label_3131b4;
    }
    ctx->pc = 0x3131ACu;
    {
        const bool branch_taken_0x3131ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3131ac) {
            ctx->pc = 0x3131B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3131ACu;
            // 0x3131b0: 0x8602000c  lh          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3131C0u;
            goto label_3131c0;
        }
    }
    ctx->pc = 0x3131B4u;
label_3131b4:
    // 0x3131b4: 0xc0c4cfe  jal         func_3133F8
label_3131b8:
    if (ctx->pc == 0x3131B8u) {
        ctx->pc = 0x3131BCu;
        goto label_3131bc;
    }
    ctx->pc = 0x3131B4u;
    SET_GPR_U32(ctx, 31, 0x3131BCu);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x3131B4u, 0x3131BCu)) {
        return;
    }
    ctx->pc = 0x3131BCu;
label_3131bc:
    // 0x3131bc: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x3131bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3131c0:
    // 0x3131c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3131c4:
    if (ctx->pc == 0x3131C4u) {
        ctx->pc = 0x3131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131C0u;
        // 0x3131c4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131C8u;
        goto label_3131c8;
    }
    ctx->pc = 0x3131C0u;
    {
        const bool branch_taken_0x3131c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131C0u;
        // 0x3131c4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131c0) {
            ctx->pc = 0x3131D0u;
            goto label_3131d0;
        }
    }
    ctx->pc = 0x3131C8u;
label_3131c8:
    // 0x3131c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3131cc:
    if (ctx->pc == 0x3131CCu) {
        ctx->pc = 0x3131CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131C8u;
        // 0x3131cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131D0u;
        goto label_3131d0;
    }
    ctx->pc = 0x3131C8u;
    {
        const bool branch_taken_0x3131c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131C8u;
        // 0x3131cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131c8) {
            ctx->pc = 0x313210u;
            goto label_313210;
        }
    }
    ctx->pc = 0x3131D0u;
label_3131d0:
    // 0x3131d0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3131d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3131d4:
    // 0x3131d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3131d8:
    if (ctx->pc == 0x3131D8u) {
        ctx->pc = 0x3131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131D4u;
        // 0x3131d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131DCu;
        goto label_3131dc;
    }
    ctx->pc = 0x3131D4u;
    {
        const bool branch_taken_0x3131d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131D4u;
        // 0x3131d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131d4) {
            ctx->pc = 0x3131E8u;
            goto label_3131e8;
        }
    }
    ctx->pc = 0x3131DCu;
label_3131dc:
    // 0x3131dc: 0xc0c4c8a  jal         func_313228
label_3131e0:
    if (ctx->pc == 0x3131E0u) {
        ctx->pc = 0x3131E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131DCu;
        // 0x3131e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131E4u;
        goto label_3131e4;
    }
    ctx->pc = 0x3131DCu;
    SET_GPR_U32(ctx, 31, 0x3131E4u);
    ctx->pc = 0x3131E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3131DCu;
    // 0x3131e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x3131DCu, 0x3131E4u)) {
        return;
    }
    ctx->pc = 0x3131E4u;
label_3131e4:
    // 0x3131e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3131e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3131e8:
    // 0x3131e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3131ec:
    // 0x3131ec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3131f0:
    if (ctx->pc == 0x3131F0u) {
        ctx->pc = 0x3131F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131ECu;
        // 0x3131f0: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131F4u;
        goto label_3131f4;
    }
    ctx->pc = 0x3131ECu;
    {
        const bool branch_taken_0x3131ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3131ec) {
            ctx->pc = 0x3131F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3131ECu;
            // 0x3131f0: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31320Cu;
            goto label_31320c;
        }
    }
    ctx->pc = 0x3131F4u;
label_3131f4:
    // 0x3131f4: 0x40f809  jalr        $v0
label_3131f8:
    if (ctx->pc == 0x3131F8u) {
        ctx->pc = 0x3131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131F4u;
        // 0x3131f8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131FCu;
        goto label_3131fc;
    }
    ctx->pc = 0x3131F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3131FCu);
        ctx->pc = 0x3131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131F4u;
        // 0x3131f8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3131F4u, 0x3131FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3131FCu;
label_3131fc:
    // 0x3131fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3131fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313200:
    // 0x313200: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x313200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_313204:
    // 0x313204: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x313204u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
label_313208:
    // 0x313208: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x313208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_31320c:
    // 0x31320c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31320cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313210:
    // 0x313210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x313210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313214:
    // 0x313214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313218:
    // 0x313218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31321c:
    // 0x31321c: 0x3e00008  jr          $ra
label_313220:
    if (ctx->pc == 0x313220u) {
        ctx->pc = 0x313220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31321Cu;
        // 0x313220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313224u;
        goto label_313224;
    }
    ctx->pc = 0x31321Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31321Cu;
        // 0x313220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31321Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313224u;
label_313224:
    // 0x313224: 0x0  nop
    ctx->pc = 0x313224u;
    // NOP
    ctx->pc = 0x313228u;
}
