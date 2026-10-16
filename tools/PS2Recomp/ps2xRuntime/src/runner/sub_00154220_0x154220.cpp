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

// Function: sub_00154220
// Address: 0x154220 - 0x154340
void sub_00154220_0x154220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154220_0x154220");
#endif

    switch (ctx->pc) {
        case 0x154240u: goto label_154240;
        case 0x154280u: goto label_154280;
        case 0x154294u: goto label_154294;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542f4u: goto label_1542f4;
        case 0x15430cu: goto label_15430c;
        case 0x154324u: goto label_154324;
        default: break;
    }

    ctx->pc = 0x154220u;

    // 0x154220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x154224: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x154224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x154228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15422c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x154230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x154230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x154234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154238: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x154238u;
    SET_GPR_U32(ctx, 31, 0x154240u);
    ctx->pc = 0x15423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154238u;
    // 0x15423c: 0x26320038  addiu       $s2, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x154238u, 0x154240u)) {
        return;
    }
    ctx->pc = 0x154240u;
label_154240:
    // 0x154240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154244: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x154248: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x154248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15424c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x154250: 0x246327d0  addiu       $v1, $v1, 0x27D0
    ctx->pc = 0x154250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10192));
    // 0x154254: 0x244227f0  addiu       $v0, $v0, 0x27F0
    ctx->pc = 0x154254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10224));
    // 0x154258: 0x2610f050  addiu       $s0, $s0, -0xFB0
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963280));
    // 0x15425c: 0xae240048  sw          $a0, 0x48($s1)
    ctx->pc = 0x15425cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
    // 0x154260: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x154260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x154264: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x154264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x154268: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x154268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x15426c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154270: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x154270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x154274: 0x24a52790  addiu       $a1, $a1, 0x2790
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10128));
    // 0x154278: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x154278u;
    SET_GPR_U32(ctx, 31, 0x154280u);
    ctx->pc = 0x15427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154278u;
    // 0x15427c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x154278u, 0x154280u)) {
        return;
    }
    ctx->pc = 0x154280u;
label_154280:
    // 0x154280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154284: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x154284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15428c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15428Cu;
    SET_GPR_U32(ctx, 31, 0x154294u);
    ctx->pc = 0x154290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15428Cu;
    // 0x154290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15428Cu, 0x154294u)) {
        return;
    }
    ctx->pc = 0x154294u;
label_154294:
    // 0x154294: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x154298: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x154298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x15429c: 0x2610f020  addiu       $s0, $s0, -0xFE0
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963232));
    // 0x1542a0: 0x24a527a0  addiu       $a1, $a1, 0x27A0
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10144));
    // 0x1542a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1542a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542a8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1542A8u;
    SET_GPR_U32(ctx, 31, 0x1542B0u);
    ctx->pc = 0x1542ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542A8u;
    // 0x1542ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1542A8u, 0x1542B0u)) {
        return;
    }
    ctx->pc = 0x1542B0u;
label_1542b0:
    // 0x1542b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1542b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1542b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1542b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542bc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1542BCu;
    SET_GPR_U32(ctx, 31, 0x1542C4u);
    ctx->pc = 0x1542C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542BCu;
    // 0x1542c0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1542BCu, 0x1542C4u)) {
        return;
    }
    ctx->pc = 0x1542C4u;
label_1542c4:
    // 0x1542c4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1542c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1542c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542cc: 0x24a5fa18  addiu       $a1, $a1, -0x5E8
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965784));
    // 0x1542d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1542d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542d4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1542D4u;
    SET_GPR_U32(ctx, 31, 0x1542DCu);
    ctx->pc = 0x1542D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542D4u;
    // 0x1542d8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1542D4u, 0x1542DCu)) {
        return;
    }
    ctx->pc = 0x1542DCu;
label_1542dc:
    // 0x1542dc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1542dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1542e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1542e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542e4: 0x24a5fa20  addiu       $a1, $a1, -0x5E0
    ctx->pc = 0x1542e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965792));
    // 0x1542e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1542e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542ec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1542ECu;
    SET_GPR_U32(ctx, 31, 0x1542F4u);
    ctx->pc = 0x1542F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542ECu;
    // 0x1542f0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1542ECu, 0x1542F4u)) {
        return;
    }
    ctx->pc = 0x1542F4u;
label_1542f4:
    // 0x1542f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1542f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1542f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542fc: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1542fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x154300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154304: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x154304u;
    SET_GPR_U32(ctx, 31, 0x15430Cu);
    ctx->pc = 0x154308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154304u;
    // 0x154308: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x154304u, 0x15430Cu)) {
        return;
    }
    ctx->pc = 0x15430Cu;
label_15430c:
    // 0x15430c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15430cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x154310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154314: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x154314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x154318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15431c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15431Cu;
    SET_GPR_U32(ctx, 31, 0x154324u);
    ctx->pc = 0x154320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15431Cu;
    // 0x154320: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15431Cu, 0x154324u)) {
        return;
    }
    ctx->pc = 0x154324u;
label_154324:
    // 0x154324: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x154324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154328: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x154328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15432c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15432cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154330: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x154330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154338: 0x3e00008  jr          $ra
    ctx->pc = 0x154338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154338u;
        // 0x15433c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154340u;
}
