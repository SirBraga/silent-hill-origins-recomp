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

// Function: sub_002805C0
// Address: 0x2805c0 - 0x2806f0
void sub_002805C0_0x2805c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002805C0_0x2805c0");
#endif

    switch (ctx->pc) {
        case 0x2805e4u: goto label_2805e4;
        case 0x28060cu: goto label_28060c;
        case 0x280634u: goto label_280634;
        case 0x28065cu: goto label_28065c;
        case 0x280684u: goto label_280684;
        case 0x2806acu: goto label_2806ac;
        case 0x2806d4u: goto label_2806d4;
        default: break;
    }

    ctx->pc = 0x2805c0u;

    // 0x2805c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2805c4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x2805c8: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x2805c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x2805cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2805ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2805d0: 0x24c612f8  addiu       $a2, $a2, 0x12F8
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4856));
    // 0x2805d4: 0x24e71290  addiu       $a3, $a3, 0x1290
    ctx->pc = 0x2805d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4752));
    // 0x2805d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2805d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805dc: 0xc0895e6  jal         func_225798
    ctx->pc = 0x2805DCu;
    SET_GPR_U32(ctx, 31, 0x2805E4u);
    ctx->pc = 0x2805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805DCu;
    // 0x2805e0: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x2805DCu, 0x2805E4u)) {
        return;
    }
    ctx->pc = 0x2805E4u;
label_2805e4:
    // 0x2805e4: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2805E4u;
    {
        const bool branch_taken_0x2805e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2805E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805E4u;
        // 0x2805e8: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805e4) {
            ctx->pc = 0x2806E0u;
            goto label_2806e0;
        }
    }
    ctx->pc = 0x2805ECu;
    // 0x2805ec: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x2805ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x2805f0: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x2805f4: 0x24c61398  addiu       $a2, $a2, 0x1398
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5016));
    // 0x2805f8: 0x24e713b0  addiu       $a3, $a3, 0x13B0
    ctx->pc = 0x2805f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5040));
    // 0x2805fc: 0x2508f640  addiu       $t0, $t0, -0x9C0
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964800));
    // 0x280600: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x280604: 0xc095f80  jal         func_257E00
    ctx->pc = 0x280604u;
    SET_GPR_U32(ctx, 31, 0x28060Cu);
    ctx->pc = 0x280608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280604u;
    // 0x280608: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E00u, 0x280604u, 0x28060Cu)) {
        return;
    }
    ctx->pc = 0x28060Cu;
label_28060c:
    // 0x28060c: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x28060Cu;
    {
        const bool branch_taken_0x28060c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x280610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28060Cu;
        // 0x280610: 0xaf828818  sw          $v0, -0x77E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28060c) {
            ctx->pc = 0x2806E0u;
            goto label_2806e0;
        }
    }
    ctx->pc = 0x280614u;
    // 0x280614: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x280614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x280618: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x28061c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x280620: 0x24a5fb70  addiu       $a1, $a1, -0x490
    ctx->pc = 0x280620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966128));
    // 0x280624: 0x24c6f8d8  addiu       $a2, $a2, -0x728
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965464));
    // 0x280628: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x280628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x28062c: 0xc095f92  jal         func_257E48
    ctx->pc = 0x28062Cu;
    SET_GPR_U32(ctx, 31, 0x280634u);
    ctx->pc = 0x280630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28062Cu;
    // 0x280630: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E48u, 0x28062Cu, 0x280634u)) {
        return;
    }
    ctx->pc = 0x280634u;
label_280634:
    // 0x280634: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x280634u;
    {
        const bool branch_taken_0x280634 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x280638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280634u;
        // 0x280638: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280634) {
            ctx->pc = 0x2806E0u;
            goto label_2806e0;
        }
    }
    ctx->pc = 0x28063Cu;
    // 0x28063c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x280640: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x280640u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x280644: 0x24c61420  addiu       $a2, $a2, 0x1420
    ctx->pc = 0x280644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5152));
    // 0x280648: 0x24e71438  addiu       $a3, $a3, 0x1438
    ctx->pc = 0x280648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5176));
    // 0x28064c: 0x25081450  addiu       $t0, $t0, 0x1450
    ctx->pc = 0x28064cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5200));
    // 0x280650: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x280654: 0xc09579e  jal         func_255E78
    ctx->pc = 0x280654u;
    SET_GPR_U32(ctx, 31, 0x28065Cu);
    ctx->pc = 0x280658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280654u;
    // 0x280658: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x280654u, 0x28065Cu)) {
        return;
    }
    ctx->pc = 0x28065Cu;
label_28065c:
    // 0x28065c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28065Cu;
    {
        const bool branch_taken_0x28065c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x280660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28065Cu;
        // 0x280660: 0xaf82881c  sw          $v0, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28065c) {
            ctx->pc = 0x2806E0u;
            goto label_2806e0;
        }
    }
    ctx->pc = 0x280664u;
    // 0x280664: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x280664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x280668: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x280668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x28066c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x28066cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x280670: 0x24a514a8  addiu       $a1, $a1, 0x14A8
    ctx->pc = 0x280670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5288));
    // 0x280674: 0x24c61478  addiu       $a2, $a2, 0x1478
    ctx->pc = 0x280674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5240));
    // 0x280678: 0x24e71508  addiu       $a3, $a3, 0x1508
    ctx->pc = 0x280678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5384));
    // 0x28067c: 0xc0957c2  jal         func_255F08
    ctx->pc = 0x28067Cu;
    SET_GPR_U32(ctx, 31, 0x280684u);
    ctx->pc = 0x280680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28067Cu;
    // 0x280680: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F08u, 0x28067Cu, 0x280684u)) {
        return;
    }
    ctx->pc = 0x280684u;
label_280684:
    // 0x280684: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x280684u;
    {
        const bool branch_taken_0x280684 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x280688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280684u;
        // 0x280688: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280684) {
            ctx->pc = 0x2806E0u;
            goto label_2806e0;
        }
    }
    ctx->pc = 0x28068Cu;
    // 0x28068c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x28068cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x280690: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x280690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x280694: 0x24c61520  addiu       $a2, $a2, 0x1520
    ctx->pc = 0x280694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5408));
    // 0x280698: 0x24e71538  addiu       $a3, $a3, 0x1538
    ctx->pc = 0x280698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5432));
    // 0x28069c: 0x25081550  addiu       $t0, $t0, 0x1550
    ctx->pc = 0x28069cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5456));
    // 0x2806a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2806a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2806a4: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x2806A4u;
    SET_GPR_U32(ctx, 31, 0x2806ACu);
    ctx->pc = 0x2806A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806A4u;
    // 0x2806a8: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x2806A4u, 0x2806ACu)) {
        return;
    }
    ctx->pc = 0x2806ACu;
label_2806ac:
    // 0x2806ac: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2806ACu;
    {
        const bool branch_taken_0x2806ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2806B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806ACu;
        // 0x2806b0: 0xaf828820  sw          $v0, -0x77E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806ac) {
            ctx->pc = 0x2806E0u;
            goto label_2806e0;
        }
    }
    ctx->pc = 0x2806B4u;
    // 0x2806b4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2806b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2806b8: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x2806b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x2806bc: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x2806bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x2806c0: 0x24a515a8  addiu       $a1, $a1, 0x15A8
    ctx->pc = 0x2806c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5544));
    // 0x2806c4: 0x24c61578  addiu       $a2, $a2, 0x1578
    ctx->pc = 0x2806c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5496));
    // 0x2806c8: 0x24e71608  addiu       $a3, $a3, 0x1608
    ctx->pc = 0x2806c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5640));
    // 0x2806cc: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x2806CCu;
    SET_GPR_U32(ctx, 31, 0x2806D4u);
    ctx->pc = 0x2806D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806CCu;
    // 0x2806d0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x2806CCu, 0x2806D4u)) {
        return;
    }
    ctx->pc = 0x2806D4u;
label_2806d4:
    // 0x2806d4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2806d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2806d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2806D8u;
    {
        const bool branch_taken_0x2806d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806D8u;
        // 0x2806dc: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806d8) {
            ctx->pc = 0x2806E4u;
            goto label_2806e4;
        }
    }
    ctx->pc = 0x2806E0u;
label_2806e0:
    // 0x2806e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2806e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2806e4:
    // 0x2806e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2806e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2806e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2806E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2806ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806E8u;
        // 0x2806ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2806E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2806F0u;
}
