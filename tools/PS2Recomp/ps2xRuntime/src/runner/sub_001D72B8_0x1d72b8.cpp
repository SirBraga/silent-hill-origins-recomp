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

// Function: sub_001D72B8
// Address: 0x1d72b8 - 0x1d73e8
void sub_001D72B8_0x1d72b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D72B8_0x1d72b8");
#endif

    switch (ctx->pc) {
        case 0x1d72dcu: goto label_1d72dc;
        case 0x1d72f4u: goto label_1d72f4;
        case 0x1d730cu: goto label_1d730c;
        case 0x1d7324u: goto label_1d7324;
        case 0x1d7344u: goto label_1d7344;
        case 0x1d735cu: goto label_1d735c;
        case 0x1d7374u: goto label_1d7374;
        case 0x1d738cu: goto label_1d738c;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73d4u: goto label_1d73d4;
        default: break;
    }

    ctx->pc = 0x1d72b8u;

    // 0x1d72b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d72b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d72bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d72bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d72c0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d72c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d72c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d72c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d72c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d72cc: 0x24848860  addiu       $a0, $a0, -0x77A0
    ctx->pc = 0x1d72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
    // 0x1d72d0: 0x24a514e8  addiu       $a1, $a1, 0x14E8
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5352));
    // 0x1d72d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D72D4u;
    SET_GPR_U32(ctx, 31, 0x1D72DCu);
    ctx->pc = 0x1D72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72D4u;
    // 0x1d72d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D72D4u, 0x1D72DCu)) {
        return;
    }
    ctx->pc = 0x1D72DCu;
label_1d72dc:
    // 0x1d72dc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d72e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d72e4: 0x24848868  addiu       $a0, $a0, -0x7798
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936680));
    // 0x1d72e8: 0x24a51500  addiu       $a1, $a1, 0x1500
    ctx->pc = 0x1d72e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
    // 0x1d72ec: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D72ECu;
    SET_GPR_U32(ctx, 31, 0x1D72F4u);
    ctx->pc = 0x1D72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72ECu;
    // 0x1d72f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D72ECu, 0x1D72F4u)) {
        return;
    }
    ctx->pc = 0x1D72F4u;
label_1d72f4:
    // 0x1d72f4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d72f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d72fc: 0x24848870  addiu       $a0, $a0, -0x7790
    ctx->pc = 0x1d72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
    // 0x1d7300: 0x24a51518  addiu       $a1, $a1, 0x1518
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5400));
    // 0x1d7304: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7304u;
    SET_GPR_U32(ctx, 31, 0x1D730Cu);
    ctx->pc = 0x1D7308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7304u;
    // 0x1d7308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7304u, 0x1D730Cu)) {
        return;
    }
    ctx->pc = 0x1D730Cu;
label_1d730c:
    // 0x1d730c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d730cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7310: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7314: 0x24848878  addiu       $a0, $a0, -0x7788
    ctx->pc = 0x1d7314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936696));
    // 0x1d7318: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x1d7318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
    // 0x1d731c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D731Cu;
    SET_GPR_U32(ctx, 31, 0x1D7324u);
    ctx->pc = 0x1D7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D731Cu;
    // 0x1d7320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D731Cu, 0x1D7324u)) {
        return;
    }
    ctx->pc = 0x1D7324u;
label_1d7324:
    // 0x1d7324: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1d7328: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d732c: 0x26101558  addiu       $s0, $s0, 0x1558
    ctx->pc = 0x1d732cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5464));
    // 0x1d7330: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7334: 0x24848880  addiu       $a0, $a0, -0x7780
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    // 0x1d7338: 0x24a51548  addiu       $a1, $a1, 0x1548
    ctx->pc = 0x1d7338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5448));
    // 0x1d733c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D733Cu;
    SET_GPR_U32(ctx, 31, 0x1D7344u);
    ctx->pc = 0x1D7340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D733Cu;
    // 0x1d7340: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D733Cu, 0x1D7344u)) {
        return;
    }
    ctx->pc = 0x1D7344u;
label_1d7344:
    // 0x1d7344: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7348: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d734c: 0x24848888  addiu       $a0, $a0, -0x7778
    ctx->pc = 0x1d734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936712));
    // 0x1d7350: 0x24a51568  addiu       $a1, $a1, 0x1568
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5480));
    // 0x1d7354: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7354u;
    SET_GPR_U32(ctx, 31, 0x1D735Cu);
    ctx->pc = 0x1D7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7354u;
    // 0x1d7358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7354u, 0x1D735Cu)) {
        return;
    }
    ctx->pc = 0x1D735Cu;
label_1d735c:
    // 0x1d735c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7360: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7364: 0x24848890  addiu       $a0, $a0, -0x7770
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936720));
    // 0x1d7368: 0x24a51580  addiu       $a1, $a1, 0x1580
    ctx->pc = 0x1d7368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    // 0x1d736c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D736Cu;
    SET_GPR_U32(ctx, 31, 0x1D7374u);
    ctx->pc = 0x1D7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D736Cu;
    // 0x1d7370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D736Cu, 0x1D7374u)) {
        return;
    }
    ctx->pc = 0x1D7374u;
label_1d7374:
    // 0x1d7374: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7378: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d737c: 0x24848898  addiu       $a0, $a0, -0x7768
    ctx->pc = 0x1d737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936728));
    // 0x1d7380: 0x24a51598  addiu       $a1, $a1, 0x1598
    ctx->pc = 0x1d7380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5528));
    // 0x1d7384: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7384u;
    SET_GPR_U32(ctx, 31, 0x1D738Cu);
    ctx->pc = 0x1D7388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7384u;
    // 0x1d7388: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7384u, 0x1D738Cu)) {
        return;
    }
    ctx->pc = 0x1D738Cu;
label_1d738c:
    // 0x1d738c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7390: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7394: 0x248488a0  addiu       $a0, $a0, -0x7760
    ctx->pc = 0x1d7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936736));
    // 0x1d7398: 0x24a515a8  addiu       $a1, $a1, 0x15A8
    ctx->pc = 0x1d7398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5544));
    // 0x1d739c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D739Cu;
    SET_GPR_U32(ctx, 31, 0x1D73A4u);
    ctx->pc = 0x1D73A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D739Cu;
    // 0x1d73a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D739Cu, 0x1D73A4u)) {
        return;
    }
    ctx->pc = 0x1D73A4u;
label_1d73a4:
    // 0x1d73a4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d73a8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d73ac: 0x248488a8  addiu       $a0, $a0, -0x7758
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    // 0x1d73b0: 0x24a515c0  addiu       $a1, $a1, 0x15C0
    ctx->pc = 0x1d73b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5568));
    // 0x1d73b4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D73B4u;
    SET_GPR_U32(ctx, 31, 0x1D73BCu);
    ctx->pc = 0x1D73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73B4u;
    // 0x1d73b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D73B4u, 0x1D73BCu)) {
        return;
    }
    ctx->pc = 0x1D73BCu;
label_1d73bc:
    // 0x1d73bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d73c0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d73c4: 0x248488b0  addiu       $a0, $a0, -0x7750
    ctx->pc = 0x1d73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
    // 0x1d73c8: 0x24a515d8  addiu       $a1, $a1, 0x15D8
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5592));
    // 0x1d73cc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D73CCu;
    SET_GPR_U32(ctx, 31, 0x1D73D4u);
    ctx->pc = 0x1D73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73CCu;
    // 0x1d73d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D73CCu, 0x1D73D4u)) {
        return;
    }
    ctx->pc = 0x1D73D4u;
label_1d73d4:
    // 0x1d73d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d73d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d73d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d73d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d73dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D73DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73DCu;
        // 0x1d73e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D73E4u;
    // 0x1d73e4: 0x0  nop
    ctx->pc = 0x1d73e4u;
    // NOP
    ctx->pc = 0x1d73e8u;
}
