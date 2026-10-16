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

// Function: sub_00127190
// Address: 0x127190 - 0x1272e0
void sub_00127190_0x127190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127190_0x127190");
#endif

    switch (ctx->pc) {
        case 0x127190u: goto label_127190;
        case 0x127194u: goto label_127194;
        case 0x127198u: goto label_127198;
        case 0x12719cu: goto label_12719c;
        case 0x1271a0u: goto label_1271a0;
        case 0x1271a4u: goto label_1271a4;
        case 0x1271a8u: goto label_1271a8;
        case 0x1271acu: goto label_1271ac;
        case 0x1271b0u: goto label_1271b0;
        case 0x1271b4u: goto label_1271b4;
        case 0x1271b8u: goto label_1271b8;
        case 0x1271bcu: goto label_1271bc;
        case 0x1271c0u: goto label_1271c0;
        case 0x1271c4u: goto label_1271c4;
        case 0x1271c8u: goto label_1271c8;
        case 0x1271ccu: goto label_1271cc;
        case 0x1271d0u: goto label_1271d0;
        case 0x1271d4u: goto label_1271d4;
        case 0x1271d8u: goto label_1271d8;
        case 0x1271dcu: goto label_1271dc;
        case 0x1271e0u: goto label_1271e0;
        case 0x1271e4u: goto label_1271e4;
        case 0x1271e8u: goto label_1271e8;
        case 0x1271ecu: goto label_1271ec;
        case 0x1271f0u: goto label_1271f0;
        case 0x1271f4u: goto label_1271f4;
        case 0x1271f8u: goto label_1271f8;
        case 0x1271fcu: goto label_1271fc;
        case 0x127200u: goto label_127200;
        case 0x127204u: goto label_127204;
        case 0x127208u: goto label_127208;
        case 0x12720cu: goto label_12720c;
        case 0x127210u: goto label_127210;
        case 0x127214u: goto label_127214;
        case 0x127218u: goto label_127218;
        case 0x12721cu: goto label_12721c;
        case 0x127220u: goto label_127220;
        case 0x127224u: goto label_127224;
        case 0x127228u: goto label_127228;
        case 0x12722cu: goto label_12722c;
        case 0x127230u: goto label_127230;
        case 0x127234u: goto label_127234;
        case 0x127238u: goto label_127238;
        case 0x12723cu: goto label_12723c;
        case 0x127240u: goto label_127240;
        case 0x127244u: goto label_127244;
        case 0x127248u: goto label_127248;
        case 0x12724cu: goto label_12724c;
        case 0x127250u: goto label_127250;
        case 0x127254u: goto label_127254;
        case 0x127258u: goto label_127258;
        case 0x12725cu: goto label_12725c;
        case 0x127260u: goto label_127260;
        case 0x127264u: goto label_127264;
        case 0x127268u: goto label_127268;
        case 0x12726cu: goto label_12726c;
        case 0x127270u: goto label_127270;
        case 0x127274u: goto label_127274;
        case 0x127278u: goto label_127278;
        case 0x12727cu: goto label_12727c;
        case 0x127280u: goto label_127280;
        case 0x127284u: goto label_127284;
        case 0x127288u: goto label_127288;
        case 0x12728cu: goto label_12728c;
        case 0x127290u: goto label_127290;
        case 0x127294u: goto label_127294;
        case 0x127298u: goto label_127298;
        case 0x12729cu: goto label_12729c;
        case 0x1272a0u: goto label_1272a0;
        case 0x1272a4u: goto label_1272a4;
        case 0x1272a8u: goto label_1272a8;
        case 0x1272acu: goto label_1272ac;
        case 0x1272b0u: goto label_1272b0;
        case 0x1272b4u: goto label_1272b4;
        case 0x1272b8u: goto label_1272b8;
        case 0x1272bcu: goto label_1272bc;
        case 0x1272c0u: goto label_1272c0;
        case 0x1272c4u: goto label_1272c4;
        case 0x1272c8u: goto label_1272c8;
        case 0x1272ccu: goto label_1272cc;
        case 0x1272d0u: goto label_1272d0;
        case 0x1272d4u: goto label_1272d4;
        case 0x1272d8u: goto label_1272d8;
        case 0x1272dcu: goto label_1272dc;
        default: break;
    }

    ctx->pc = 0x127190u;

label_127190:
    // 0x127190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_127194:
    // 0x127194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_127198:
    // 0x127198: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x127198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_12719c:
    // 0x12719c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12719cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1271a0:
    // 0x1271a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1271a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1271a4:
    // 0x1271a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1271a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1271a8:
    // 0x1271a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1271a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1271ac:
    // 0x1271ac: 0xc07600c  jal         func_1D8030
label_1271b0:
    if (ctx->pc == 0x1271B0u) {
        ctx->pc = 0x1271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ACu;
        // 0x1271b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271B4u;
        goto label_1271b4;
    }
    ctx->pc = 0x1271ACu;
    SET_GPR_U32(ctx, 31, 0x1271B4u);
    ctx->pc = 0x1271B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271ACu;
    // 0x1271b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1271ACu, 0x1271B4u)) {
        return;
    }
    ctx->pc = 0x1271B4u;
label_1271b4:
    // 0x1271b4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1271b8:
    // 0x1271b8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1271bc:
    // 0x1271bc: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x1271bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_1271c0:
    // 0x1271c0: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1271c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_1271c4:
    // 0x1271c4: 0x40f809  jalr        $v0
label_1271c8:
    if (ctx->pc == 0x1271C8u) {
        ctx->pc = 0x1271C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C4u;
        // 0x1271c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271CCu;
        goto label_1271cc;
    }
    ctx->pc = 0x1271C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1271CCu);
        ctx->pc = 0x1271C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C4u;
        // 0x1271c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1271C4u, 0x1271CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1271CCu;
label_1271cc:
    // 0x1271cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1271d0:
    if (ctx->pc == 0x1271D0u) {
        ctx->pc = 0x1271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271CCu;
        // 0x1271d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271D4u;
        goto label_1271d4;
    }
    ctx->pc = 0x1271CCu;
    {
        const bool branch_taken_0x1271cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271CCu;
        // 0x1271d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271cc) {
            ctx->pc = 0x127238u;
            goto label_127238;
        }
    }
    ctx->pc = 0x1271D4u;
label_1271d4:
    // 0x1271d4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1271d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1271d8:
    // 0x1271d8: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x1271d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1271dc:
    // 0x1271dc: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1271dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1271e0:
    // 0x1271e0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1271e4:
    // 0x1271e4: 0x40f809  jalr        $v0
label_1271e8:
    if (ctx->pc == 0x1271E8u) {
        ctx->pc = 0x1271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271E4u;
        // 0x1271e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271ECu;
        goto label_1271ec;
    }
    ctx->pc = 0x1271E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1271ECu);
        ctx->pc = 0x1271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271E4u;
        // 0x1271e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1271E4u, 0x1271ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1271ECu;
label_1271ec:
    // 0x1271ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1271f0:
    if (ctx->pc == 0x1271F0u) {
        ctx->pc = 0x1271F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ECu;
        // 0x1271f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271F4u;
        goto label_1271f4;
    }
    ctx->pc = 0x1271ECu;
    {
        const bool branch_taken_0x1271ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ECu;
        // 0x1271f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271ec) {
            ctx->pc = 0x127238u;
            goto label_127238;
        }
    }
    ctx->pc = 0x1271F4u;
label_1271f4:
    // 0x1271f4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1271f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1271f8:
    // 0x1271f8: 0x84640160  lh          $a0, 0x160($v1)
    ctx->pc = 0x1271f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_1271fc:
    // 0x1271fc: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x1271fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_127200:
    // 0x127200: 0x40f809  jalr        $v0
label_127204:
    if (ctx->pc == 0x127204u) {
        ctx->pc = 0x127204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127200u;
        // 0x127204: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127208u;
        goto label_127208;
    }
    ctx->pc = 0x127200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127208u);
        ctx->pc = 0x127204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127200u;
        // 0x127204: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127200u, 0x127208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127208u;
label_127208:
    // 0x127208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12720c:
    if (ctx->pc == 0x12720Cu) {
        ctx->pc = 0x12720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127208u;
        // 0x12720c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127210u;
        goto label_127210;
    }
    ctx->pc = 0x127208u;
    {
        const bool branch_taken_0x127208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127208u;
        // 0x12720c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127208) {
            ctx->pc = 0x12721Cu;
            goto label_12721c;
        }
    }
    ctx->pc = 0x127210u;
label_127210:
    // 0x127210: 0x8e030f68  lw          $v1, 0xF68($s0)
    ctx->pc = 0x127210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3944)));
label_127214:
    // 0x127214: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_127218:
    if (ctx->pc == 0x127218u) {
        ctx->pc = 0x127218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127214u;
        // 0x127218: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12721Cu;
        goto label_12721c;
    }
    ctx->pc = 0x127214u;
    {
        const bool branch_taken_0x127214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127214) {
            ctx->pc = 0x127218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127214u;
            // 0x127218: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127224u;
            goto label_127224;
        }
    }
    ctx->pc = 0x12721Cu;
label_12721c:
    // 0x12721c: 0x10000006  b           . + 4 + (0x6 << 2)
label_127220:
    if (ctx->pc == 0x127220u) {
        ctx->pc = 0x127220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12721Cu;
        // 0x127220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127224u;
        goto label_127224;
    }
    ctx->pc = 0x12721Cu;
    {
        const bool branch_taken_0x12721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12721Cu;
        // 0x127220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12721c) {
            ctx->pc = 0x127238u;
            goto label_127238;
        }
    }
    ctx->pc = 0x127224u;
label_127224:
    // 0x127224: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x127224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_127228:
    // 0x127228: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x127228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_12722c:
    // 0x12722c: 0x40f809  jalr        $v0
label_127230:
    if (ctx->pc == 0x127230u) {
        ctx->pc = 0x127230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12722Cu;
        // 0x127230: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127234u;
        goto label_127234;
    }
    ctx->pc = 0x12722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127234u);
        ctx->pc = 0x127230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12722Cu;
        // 0x127230: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12722Cu, 0x127234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127234u;
label_127234:
    // 0x127234: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_127238:
    // 0x127238: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x127238u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_12723c:
    // 0x12723c: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_127240:
    if (ctx->pc == 0x127240u) {
        ctx->pc = 0x127240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12723Cu;
        // 0x127240: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127244u;
        goto label_127244;
    }
    ctx->pc = 0x12723Cu;
    {
        const bool branch_taken_0x12723c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12723Cu;
        // 0x127240: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12723c) {
            ctx->pc = 0x1272BCu;
            goto label_1272bc;
        }
    }
    ctx->pc = 0x127244u;
label_127244:
    // 0x127244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127248:
    // 0x127248: 0xc04f0c2  jal         func_13C308
label_12724c:
    if (ctx->pc == 0x12724Cu) {
        ctx->pc = 0x12724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127248u;
        // 0x12724c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127250u;
        goto label_127250;
    }
    ctx->pc = 0x127248u;
    SET_GPR_U32(ctx, 31, 0x127250u);
    ctx->pc = 0x12724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127248u;
    // 0x12724c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x127248u, 0x127250u)) {
        return;
    }
    ctx->pc = 0x127250u;
label_127250:
    // 0x127250: 0xc04f0cc  jal         func_13C330
label_127254:
    if (ctx->pc == 0x127254u) {
        ctx->pc = 0x127254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127250u;
        // 0x127254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127258u;
        goto label_127258;
    }
    ctx->pc = 0x127250u;
    SET_GPR_U32(ctx, 31, 0x127258u);
    ctx->pc = 0x127254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127250u;
    // 0x127254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x127250u, 0x127258u)) {
        return;
    }
    ctx->pc = 0x127258u;
label_127258:
    // 0x127258: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x127258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12725c:
    // 0x12725c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127260:
    // 0x127260: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x127260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127264:
    // 0x127264: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x127264u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_127268:
    // 0x127268: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x127268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12726c:
    // 0x12726c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x12726cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_127270:
    // 0x127270: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x127270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127274:
    // 0x127274: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x127274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_127278:
    // 0x127278: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x127278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12727c:
    // 0x12727c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127280:
    // 0x127280: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x127280u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_127284:
    // 0x127284: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x127284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_127288:
    // 0x127288: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x127288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_12728c:
    // 0x12728c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12728cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_127290:
    // 0x127290: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x127290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127294:
    // 0x127294: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x127294u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_127298:
    // 0x127298: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x127298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_12729c:
    // 0x12729c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12729cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1272a0:
    // 0x1272a0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1272a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1272a4:
    // 0x1272a4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1272a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1272a8:
    // 0x1272a8: 0x0  nop
    ctx->pc = 0x1272a8u;
    // NOP
label_1272ac:
    // 0x1272ac: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_1272b0:
    if (ctx->pc == 0x1272B0u) {
        ctx->pc = 0x1272B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272ACu;
        // 0x1272b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272B4u;
        goto label_1272b4;
    }
    ctx->pc = 0x1272ACu;
    {
        const bool branch_taken_0x1272ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1272ac) {
            ctx->pc = 0x1272B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1272ACu;
            // 0x1272b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1272B8u;
            goto label_1272b8;
        }
    }
    ctx->pc = 0x1272B4u;
label_1272b4:
    // 0x1272b4: 0x0  nop
    ctx->pc = 0x1272b4u;
    // NOP
label_1272b8:
    // 0x1272b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1272b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1272bc:
    // 0x1272bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1272bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1272c0:
    // 0x1272c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1272c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1272c4:
    // 0x1272c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1272c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1272c8:
    // 0x1272c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1272c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1272cc:
    // 0x1272cc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1272ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1272d0:
    // 0x1272d0: 0x3e00008  jr          $ra
label_1272d4:
    if (ctx->pc == 0x1272D4u) {
        ctx->pc = 0x1272D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272D0u;
        // 0x1272d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1272D8u;
        goto label_1272d8;
    }
    ctx->pc = 0x1272D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272D0u;
        // 0x1272d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272D8u;
label_1272d8:
    // 0x1272d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1272d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1272dc:
    // 0x1272dc: 0x0  nop
    ctx->pc = 0x1272dcu;
    // NOP
    ctx->pc = 0x1272e0u;
}
