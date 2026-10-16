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

// Function: sub_001796A8
// Address: 0x1796a8 - 0x1798a8
void sub_001796A8_0x1796a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001796A8_0x1796a8");
#endif

    switch (ctx->pc) {
        case 0x179704u: goto label_179704;
        case 0x17971cu: goto label_17971c;
        case 0x179734u: goto label_179734;
        case 0x17974cu: goto label_17974c;
        case 0x179764u: goto label_179764;
        case 0x17977cu: goto label_17977c;
        case 0x179794u: goto label_179794;
        case 0x1797acu: goto label_1797ac;
        case 0x1797c4u: goto label_1797c4;
        case 0x1797dcu: goto label_1797dc;
        case 0x1797f4u: goto label_1797f4;
        case 0x17980cu: goto label_17980c;
        case 0x179824u: goto label_179824;
        case 0x17983cu: goto label_17983c;
        case 0x179854u: goto label_179854;
        default: break;
    }

    ctx->pc = 0x1796a8u;

    // 0x1796a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1796a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1796ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1796acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1796b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1796b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1796b4: 0x24426f10  addiu       $v0, $v0, 0x6F10
    ctx->pc = 0x1796b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
    // 0x1796b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1796b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1796bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1796c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1796c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1796c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1796c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1796cc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1796ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1796d0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1796d4: 0x24636f30  addiu       $v1, $v1, 0x6F30
    ctx->pc = 0x1796d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28464));
    // 0x1796d8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1796d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1796dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1796dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1796e0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1796e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1796e4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1796e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1796e8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1796e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1796ec: 0x2484f880  addiu       $a0, $a0, -0x780
    ctx->pc = 0x1796ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965376));
    // 0x1796f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1796f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1796f4: 0x24a56d48  addiu       $a1, $a1, 0x6D48
    ctx->pc = 0x1796f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27976));
    // 0x1796f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1796f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1796fc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1796FCu;
    SET_GPR_U32(ctx, 31, 0x179704u);
    ctx->pc = 0x179700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796FCu;
    // 0x179700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1796FCu, 0x179704u)) {
        return;
    }
    ctx->pc = 0x179704u;
label_179704:
    // 0x179704: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179708: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17970c: 0x2484f888  addiu       $a0, $a0, -0x778
    ctx->pc = 0x17970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965384));
    // 0x179710: 0x24a56d58  addiu       $a1, $a1, 0x6D58
    ctx->pc = 0x179710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27992));
    // 0x179714: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x179714u;
    SET_GPR_U32(ctx, 31, 0x17971Cu);
    ctx->pc = 0x179718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179714u;
    // 0x179718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x179714u, 0x17971Cu)) {
        return;
    }
    ctx->pc = 0x17971Cu;
label_17971c:
    // 0x17971c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179720: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x179724: 0x2484f890  addiu       $a0, $a0, -0x770
    ctx->pc = 0x179724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965392));
    // 0x179728: 0x24a56d68  addiu       $a1, $a1, 0x6D68
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28008));
    // 0x17972c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17972Cu;
    SET_GPR_U32(ctx, 31, 0x179734u);
    ctx->pc = 0x179730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17972Cu;
    // 0x179730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17972Cu, 0x179734u)) {
        return;
    }
    ctx->pc = 0x179734u;
label_179734:
    // 0x179734: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179738: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17973c: 0x2484f898  addiu       $a0, $a0, -0x768
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965400));
    // 0x179740: 0x24a56d78  addiu       $a1, $a1, 0x6D78
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28024));
    // 0x179744: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x179744u;
    SET_GPR_U32(ctx, 31, 0x17974Cu);
    ctx->pc = 0x179748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179744u;
    // 0x179748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x179744u, 0x17974Cu)) {
        return;
    }
    ctx->pc = 0x17974Cu;
label_17974c:
    // 0x17974c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17974cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179750: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x179754: 0x2484f8a0  addiu       $a0, $a0, -0x760
    ctx->pc = 0x179754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
    // 0x179758: 0x24a56d88  addiu       $a1, $a1, 0x6D88
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28040));
    // 0x17975c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17975Cu;
    SET_GPR_U32(ctx, 31, 0x179764u);
    ctx->pc = 0x179760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17975Cu;
    // 0x179760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17975Cu, 0x179764u)) {
        return;
    }
    ctx->pc = 0x179764u;
label_179764:
    // 0x179764: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179768: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17976c: 0x2484f8a8  addiu       $a0, $a0, -0x758
    ctx->pc = 0x17976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965416));
    // 0x179770: 0x24a56d98  addiu       $a1, $a1, 0x6D98
    ctx->pc = 0x179770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28056));
    // 0x179774: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x179774u;
    SET_GPR_U32(ctx, 31, 0x17977Cu);
    ctx->pc = 0x179778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179774u;
    // 0x179778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x179774u, 0x17977Cu)) {
        return;
    }
    ctx->pc = 0x17977Cu;
label_17977c:
    // 0x17977c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179780: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x179784: 0x2484f8b0  addiu       $a0, $a0, -0x750
    ctx->pc = 0x179784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    // 0x179788: 0x24a56db0  addiu       $a1, $a1, 0x6DB0
    ctx->pc = 0x179788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28080));
    // 0x17978c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17978Cu;
    SET_GPR_U32(ctx, 31, 0x179794u);
    ctx->pc = 0x179790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17978Cu;
    // 0x179790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17978Cu, 0x179794u)) {
        return;
    }
    ctx->pc = 0x179794u;
label_179794:
    // 0x179794: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x179794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x179798: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x179798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17979c: 0x2484f8b8  addiu       $a0, $a0, -0x748
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    // 0x1797a0: 0x24a56dc8  addiu       $a1, $a1, 0x6DC8
    ctx->pc = 0x1797a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28104));
    // 0x1797a4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1797A4u;
    SET_GPR_U32(ctx, 31, 0x1797ACu);
    ctx->pc = 0x1797A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797A4u;
    // 0x1797a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1797A4u, 0x1797ACu)) {
        return;
    }
    ctx->pc = 0x1797ACu;
label_1797ac:
    // 0x1797ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1797b0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1797b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1797b4: 0x2484f8c0  addiu       $a0, $a0, -0x740
    ctx->pc = 0x1797b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    // 0x1797b8: 0x24a56de0  addiu       $a1, $a1, 0x6DE0
    ctx->pc = 0x1797b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28128));
    // 0x1797bc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1797BCu;
    SET_GPR_U32(ctx, 31, 0x1797C4u);
    ctx->pc = 0x1797C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797BCu;
    // 0x1797c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1797BCu, 0x1797C4u)) {
        return;
    }
    ctx->pc = 0x1797C4u;
label_1797c4:
    // 0x1797c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1797c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1797c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1797c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1797cc: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x1797ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x1797d0: 0x24a56df8  addiu       $a1, $a1, 0x6DF8
    ctx->pc = 0x1797d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28152));
    // 0x1797d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1797D4u;
    SET_GPR_U32(ctx, 31, 0x1797DCu);
    ctx->pc = 0x1797D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797D4u;
    // 0x1797d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1797D4u, 0x1797DCu)) {
        return;
    }
    ctx->pc = 0x1797DCu;
label_1797dc:
    // 0x1797dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1797dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1797e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1797e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1797e4: 0x24a56e08  addiu       $a1, $a1, 0x6E08
    ctx->pc = 0x1797e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28168));
    // 0x1797e8: 0x2484f8d0  addiu       $a0, $a0, -0x730
    ctx->pc = 0x1797e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965456));
    // 0x1797ec: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1797ECu;
    SET_GPR_U32(ctx, 31, 0x1797F4u);
    ctx->pc = 0x1797F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797ECu;
    // 0x1797f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1797ECu, 0x1797F4u)) {
        return;
    }
    ctx->pc = 0x1797F4u;
label_1797f4:
    // 0x1797f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1797f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1797f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1797f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797fc: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1797fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x179800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179804: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x179804u;
    SET_GPR_U32(ctx, 31, 0x17980Cu);
    ctx->pc = 0x179808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179804u;
    // 0x179808: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x179804u, 0x17980Cu)) {
        return;
    }
    ctx->pc = 0x17980Cu;
label_17980c:
    // 0x17980c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x17980cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x179810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179814: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x179814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x179818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17981c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17981Cu;
    SET_GPR_U32(ctx, 31, 0x179824u);
    ctx->pc = 0x179820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17981Cu;
    // 0x179820: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17981Cu, 0x179824u)) {
        return;
    }
    ctx->pc = 0x179824u;
label_179824:
    // 0x179824: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x179828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17982c: 0x24a58908  addiu       $a1, $a1, -0x76F8
    ctx->pc = 0x17982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    // 0x179830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179834: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x179834u;
    SET_GPR_U32(ctx, 31, 0x17983Cu);
    ctx->pc = 0x179838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179834u;
    // 0x179838: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x179834u, 0x17983Cu)) {
        return;
    }
    ctx->pc = 0x17983Cu;
label_17983c:
    // 0x17983c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x17983cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x179840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179844: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x179844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    // 0x179848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17984c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17984Cu;
    SET_GPR_U32(ctx, 31, 0x179854u);
    ctx->pc = 0x179850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17984Cu;
    // 0x179850: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17984Cu, 0x179854u)) {
        return;
    }
    ctx->pc = 0x179854u;
label_179854:
    // 0x179854: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x179854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179858: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x179858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x17985c: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x17985cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x179860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179864: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x179864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x179868: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x179868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17986c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17986cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x179870: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x179870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x179874: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x179874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x179878: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x179878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x17987c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x17987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x179880: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x179880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x179884: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x179884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x179888: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x179888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17988c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x179890: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x179890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x179894: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x179894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17989c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17989cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1798a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1798A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1798A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798A0u;
        // 0x1798a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1798A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1798A8u;
}
