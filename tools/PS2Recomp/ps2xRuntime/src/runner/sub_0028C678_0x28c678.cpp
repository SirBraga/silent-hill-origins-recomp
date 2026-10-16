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

// Function: sub_0028C678
// Address: 0x28c678 - 0x28cb50
void sub_0028C678_0x28c678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C678_0x28c678");
#endif

    switch (ctx->pc) {
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6a4u: goto label_28c6a4;
        case 0x28c6a8u: goto label_28c6a8;
        case 0x28c6acu: goto label_28c6ac;
        case 0x28c6b0u: goto label_28c6b0;
        case 0x28c6b4u: goto label_28c6b4;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6bcu: goto label_28c6bc;
        case 0x28c6c0u: goto label_28c6c0;
        case 0x28c6c4u: goto label_28c6c4;
        case 0x28c6c8u: goto label_28c6c8;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6d0u: goto label_28c6d0;
        case 0x28c6d4u: goto label_28c6d4;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c6e0u: goto label_28c6e0;
        case 0x28c6e4u: goto label_28c6e4;
        case 0x28c6e8u: goto label_28c6e8;
        case 0x28c6ecu: goto label_28c6ec;
        case 0x28c6f0u: goto label_28c6f0;
        case 0x28c6f4u: goto label_28c6f4;
        case 0x28c6f8u: goto label_28c6f8;
        case 0x28c6fcu: goto label_28c6fc;
        case 0x28c700u: goto label_28c700;
        case 0x28c704u: goto label_28c704;
        case 0x28c708u: goto label_28c708;
        case 0x28c70cu: goto label_28c70c;
        case 0x28c710u: goto label_28c710;
        case 0x28c714u: goto label_28c714;
        case 0x28c718u: goto label_28c718;
        case 0x28c71cu: goto label_28c71c;
        case 0x28c720u: goto label_28c720;
        case 0x28c724u: goto label_28c724;
        case 0x28c728u: goto label_28c728;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c730u: goto label_28c730;
        case 0x28c734u: goto label_28c734;
        case 0x28c738u: goto label_28c738;
        case 0x28c73cu: goto label_28c73c;
        case 0x28c740u: goto label_28c740;
        case 0x28c744u: goto label_28c744;
        case 0x28c748u: goto label_28c748;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c750u: goto label_28c750;
        case 0x28c754u: goto label_28c754;
        case 0x28c758u: goto label_28c758;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c760u: goto label_28c760;
        case 0x28c764u: goto label_28c764;
        case 0x28c768u: goto label_28c768;
        case 0x28c76cu: goto label_28c76c;
        case 0x28c770u: goto label_28c770;
        case 0x28c774u: goto label_28c774;
        case 0x28c778u: goto label_28c778;
        case 0x28c77cu: goto label_28c77c;
        case 0x28c780u: goto label_28c780;
        case 0x28c784u: goto label_28c784;
        case 0x28c788u: goto label_28c788;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c790u: goto label_28c790;
        case 0x28c794u: goto label_28c794;
        case 0x28c798u: goto label_28c798;
        case 0x28c79cu: goto label_28c79c;
        case 0x28c7a0u: goto label_28c7a0;
        case 0x28c7a4u: goto label_28c7a4;
        case 0x28c7a8u: goto label_28c7a8;
        case 0x28c7acu: goto label_28c7ac;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7b4u: goto label_28c7b4;
        case 0x28c7b8u: goto label_28c7b8;
        case 0x28c7bcu: goto label_28c7bc;
        case 0x28c7c0u: goto label_28c7c0;
        case 0x28c7c4u: goto label_28c7c4;
        case 0x28c7c8u: goto label_28c7c8;
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c7d0u: goto label_28c7d0;
        case 0x28c7d4u: goto label_28c7d4;
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7dcu: goto label_28c7dc;
        case 0x28c7e0u: goto label_28c7e0;
        case 0x28c7e4u: goto label_28c7e4;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c7ecu: goto label_28c7ec;
        case 0x28c7f0u: goto label_28c7f0;
        case 0x28c7f4u: goto label_28c7f4;
        case 0x28c7f8u: goto label_28c7f8;
        case 0x28c7fcu: goto label_28c7fc;
        case 0x28c800u: goto label_28c800;
        case 0x28c804u: goto label_28c804;
        case 0x28c808u: goto label_28c808;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c810u: goto label_28c810;
        case 0x28c814u: goto label_28c814;
        case 0x28c818u: goto label_28c818;
        case 0x28c81cu: goto label_28c81c;
        case 0x28c820u: goto label_28c820;
        case 0x28c824u: goto label_28c824;
        case 0x28c828u: goto label_28c828;
        case 0x28c82cu: goto label_28c82c;
        case 0x28c830u: goto label_28c830;
        case 0x28c834u: goto label_28c834;
        case 0x28c838u: goto label_28c838;
        case 0x28c83cu: goto label_28c83c;
        case 0x28c840u: goto label_28c840;
        case 0x28c844u: goto label_28c844;
        case 0x28c848u: goto label_28c848;
        case 0x28c84cu: goto label_28c84c;
        case 0x28c850u: goto label_28c850;
        case 0x28c854u: goto label_28c854;
        case 0x28c858u: goto label_28c858;
        case 0x28c85cu: goto label_28c85c;
        case 0x28c860u: goto label_28c860;
        case 0x28c864u: goto label_28c864;
        case 0x28c868u: goto label_28c868;
        case 0x28c86cu: goto label_28c86c;
        case 0x28c870u: goto label_28c870;
        case 0x28c874u: goto label_28c874;
        case 0x28c878u: goto label_28c878;
        case 0x28c87cu: goto label_28c87c;
        case 0x28c880u: goto label_28c880;
        case 0x28c884u: goto label_28c884;
        case 0x28c888u: goto label_28c888;
        case 0x28c88cu: goto label_28c88c;
        case 0x28c890u: goto label_28c890;
        case 0x28c894u: goto label_28c894;
        case 0x28c898u: goto label_28c898;
        case 0x28c89cu: goto label_28c89c;
        case 0x28c8a0u: goto label_28c8a0;
        case 0x28c8a4u: goto label_28c8a4;
        case 0x28c8a8u: goto label_28c8a8;
        case 0x28c8acu: goto label_28c8ac;
        case 0x28c8b0u: goto label_28c8b0;
        case 0x28c8b4u: goto label_28c8b4;
        case 0x28c8b8u: goto label_28c8b8;
        case 0x28c8bcu: goto label_28c8bc;
        case 0x28c8c0u: goto label_28c8c0;
        case 0x28c8c4u: goto label_28c8c4;
        case 0x28c8c8u: goto label_28c8c8;
        case 0x28c8ccu: goto label_28c8cc;
        case 0x28c8d0u: goto label_28c8d0;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8d8u: goto label_28c8d8;
        case 0x28c8dcu: goto label_28c8dc;
        case 0x28c8e0u: goto label_28c8e0;
        case 0x28c8e4u: goto label_28c8e4;
        case 0x28c8e8u: goto label_28c8e8;
        case 0x28c8ecu: goto label_28c8ec;
        case 0x28c8f0u: goto label_28c8f0;
        case 0x28c8f4u: goto label_28c8f4;
        case 0x28c8f8u: goto label_28c8f8;
        case 0x28c8fcu: goto label_28c8fc;
        case 0x28c900u: goto label_28c900;
        case 0x28c904u: goto label_28c904;
        case 0x28c908u: goto label_28c908;
        case 0x28c90cu: goto label_28c90c;
        case 0x28c910u: goto label_28c910;
        case 0x28c914u: goto label_28c914;
        case 0x28c918u: goto label_28c918;
        case 0x28c91cu: goto label_28c91c;
        case 0x28c920u: goto label_28c920;
        case 0x28c924u: goto label_28c924;
        case 0x28c928u: goto label_28c928;
        case 0x28c92cu: goto label_28c92c;
        case 0x28c930u: goto label_28c930;
        case 0x28c934u: goto label_28c934;
        case 0x28c938u: goto label_28c938;
        case 0x28c93cu: goto label_28c93c;
        case 0x28c940u: goto label_28c940;
        case 0x28c944u: goto label_28c944;
        case 0x28c948u: goto label_28c948;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c950u: goto label_28c950;
        case 0x28c954u: goto label_28c954;
        case 0x28c958u: goto label_28c958;
        case 0x28c95cu: goto label_28c95c;
        case 0x28c960u: goto label_28c960;
        case 0x28c964u: goto label_28c964;
        case 0x28c968u: goto label_28c968;
        case 0x28c96cu: goto label_28c96c;
        case 0x28c970u: goto label_28c970;
        case 0x28c974u: goto label_28c974;
        case 0x28c978u: goto label_28c978;
        case 0x28c97cu: goto label_28c97c;
        case 0x28c980u: goto label_28c980;
        case 0x28c984u: goto label_28c984;
        case 0x28c988u: goto label_28c988;
        case 0x28c98cu: goto label_28c98c;
        case 0x28c990u: goto label_28c990;
        case 0x28c994u: goto label_28c994;
        case 0x28c998u: goto label_28c998;
        case 0x28c99cu: goto label_28c99c;
        case 0x28c9a0u: goto label_28c9a0;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28c9a8u: goto label_28c9a8;
        case 0x28c9acu: goto label_28c9ac;
        case 0x28c9b0u: goto label_28c9b0;
        case 0x28c9b4u: goto label_28c9b4;
        case 0x28c9b8u: goto label_28c9b8;
        case 0x28c9bcu: goto label_28c9bc;
        case 0x28c9c0u: goto label_28c9c0;
        case 0x28c9c4u: goto label_28c9c4;
        case 0x28c9c8u: goto label_28c9c8;
        case 0x28c9ccu: goto label_28c9cc;
        case 0x28c9d0u: goto label_28c9d0;
        case 0x28c9d4u: goto label_28c9d4;
        case 0x28c9d8u: goto label_28c9d8;
        case 0x28c9dcu: goto label_28c9dc;
        case 0x28c9e0u: goto label_28c9e0;
        case 0x28c9e4u: goto label_28c9e4;
        case 0x28c9e8u: goto label_28c9e8;
        case 0x28c9ecu: goto label_28c9ec;
        case 0x28c9f0u: goto label_28c9f0;
        case 0x28c9f4u: goto label_28c9f4;
        case 0x28c9f8u: goto label_28c9f8;
        case 0x28c9fcu: goto label_28c9fc;
        case 0x28ca00u: goto label_28ca00;
        case 0x28ca04u: goto label_28ca04;
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca0cu: goto label_28ca0c;
        case 0x28ca10u: goto label_28ca10;
        case 0x28ca14u: goto label_28ca14;
        case 0x28ca18u: goto label_28ca18;
        case 0x28ca1cu: goto label_28ca1c;
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca24u: goto label_28ca24;
        case 0x28ca28u: goto label_28ca28;
        case 0x28ca2cu: goto label_28ca2c;
        case 0x28ca30u: goto label_28ca30;
        case 0x28ca34u: goto label_28ca34;
        case 0x28ca38u: goto label_28ca38;
        case 0x28ca3cu: goto label_28ca3c;
        case 0x28ca40u: goto label_28ca40;
        case 0x28ca44u: goto label_28ca44;
        case 0x28ca48u: goto label_28ca48;
        case 0x28ca4cu: goto label_28ca4c;
        case 0x28ca50u: goto label_28ca50;
        case 0x28ca54u: goto label_28ca54;
        case 0x28ca58u: goto label_28ca58;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca60u: goto label_28ca60;
        case 0x28ca64u: goto label_28ca64;
        case 0x28ca68u: goto label_28ca68;
        case 0x28ca6cu: goto label_28ca6c;
        case 0x28ca70u: goto label_28ca70;
        case 0x28ca74u: goto label_28ca74;
        case 0x28ca78u: goto label_28ca78;
        case 0x28ca7cu: goto label_28ca7c;
        case 0x28ca80u: goto label_28ca80;
        case 0x28ca84u: goto label_28ca84;
        case 0x28ca88u: goto label_28ca88;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28ca90u: goto label_28ca90;
        case 0x28ca94u: goto label_28ca94;
        case 0x28ca98u: goto label_28ca98;
        case 0x28ca9cu: goto label_28ca9c;
        case 0x28caa0u: goto label_28caa0;
        case 0x28caa4u: goto label_28caa4;
        case 0x28caa8u: goto label_28caa8;
        case 0x28caacu: goto label_28caac;
        case 0x28cab0u: goto label_28cab0;
        case 0x28cab4u: goto label_28cab4;
        case 0x28cab8u: goto label_28cab8;
        case 0x28cabcu: goto label_28cabc;
        case 0x28cac0u: goto label_28cac0;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cac8u: goto label_28cac8;
        case 0x28caccu: goto label_28cacc;
        case 0x28cad0u: goto label_28cad0;
        case 0x28cad4u: goto label_28cad4;
        case 0x28cad8u: goto label_28cad8;
        case 0x28cadcu: goto label_28cadc;
        case 0x28cae0u: goto label_28cae0;
        case 0x28cae4u: goto label_28cae4;
        case 0x28cae8u: goto label_28cae8;
        case 0x28caecu: goto label_28caec;
        case 0x28caf0u: goto label_28caf0;
        case 0x28caf4u: goto label_28caf4;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cafcu: goto label_28cafc;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb04u: goto label_28cb04;
        case 0x28cb08u: goto label_28cb08;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb10u: goto label_28cb10;
        case 0x28cb14u: goto label_28cb14;
        case 0x28cb18u: goto label_28cb18;
        case 0x28cb1cu: goto label_28cb1c;
        case 0x28cb20u: goto label_28cb20;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb2cu: goto label_28cb2c;
        case 0x28cb30u: goto label_28cb30;
        case 0x28cb34u: goto label_28cb34;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cb40u: goto label_28cb40;
        case 0x28cb44u: goto label_28cb44;
        case 0x28cb48u: goto label_28cb48;
        case 0x28cb4cu: goto label_28cb4c;
        default: break;
    }

    ctx->pc = 0x28c678u;

label_28c678:
    // 0x28c678: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_28c67c:
    // 0x28c67c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x28c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_28c680:
    // 0x28c680: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x28c680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_28c684:
    // 0x28c684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c688:
    // 0x28c688: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x28c688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_28c68c:
    // 0x28c68c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x28c68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_28c690:
    // 0x28c690: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x28c690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_28c694:
    // 0x28c694: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_28c698:
    // 0x28c698: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x28c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28c69c:
    // 0x28c69c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x28c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_28c6a0:
    // 0x28c6a0: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
label_28c6a4:
    if (ctx->pc == 0x28C6A4u) {
        ctx->pc = 0x28C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6A0u;
        // 0x28c6a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6A8u;
        goto label_28c6a8;
    }
    ctx->pc = 0x28C6A0u;
    {
        const bool branch_taken_0x28c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6A0u;
        // 0x28c6a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6a0) {
            ctx->pc = 0x28CB30u;
            goto label_28cb30;
        }
    }
    ctx->pc = 0x28C6A8u;
label_28c6a8:
    // 0x28c6a8: 0xc4ab000c  lwc1        $f11, 0xC($a1)
    ctx->pc = 0x28c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_28c6ac:
    // 0x28c6ac: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x28c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c6b0:
    // 0x28c6b0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x28c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c6b4:
    // 0x28c6b4: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x28c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c6b8:
    // 0x28c6b8: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x28c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_28c6bc:
    // 0x28c6bc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28c6bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_28c6c0:
    // 0x28c6c0: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x28c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c6c4:
    // 0x28c6c4: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x28c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28c6c8:
    // 0x28c6c8: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x28c6c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
label_28c6cc:
    // 0x28c6cc: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x28c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c6d0:
    // 0x28c6d0: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x28c6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_28c6d4:
    // 0x28c6d4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28c6d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28c6d8:
    // 0x28c6d8: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x28c6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_28c6dc:
    // 0x28c6dc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x28c6dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28c6e0:
    // 0x28c6e0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28c6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28c6e4:
    // 0x28c6e4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x28c6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_28c6e8:
    // 0x28c6e8: 0xc64700a0  lwc1        $f7, 0xA0($s2)
    ctx->pc = 0x28c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28c6ec:
    // 0x28c6ec: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x28c6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_28c6f0:
    // 0x28c6f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28c6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_28c6f4:
    // 0x28c6f4: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x28c6f4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_28c6f8:
    // 0x28c6f8: 0xc4c8000c  lwc1        $f8, 0xC($a2)
    ctx->pc = 0x28c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_28c6fc:
    // 0x28c6fc: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x28c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c700:
    // 0x28c700: 0xc64500a4  lwc1        $f5, 0xA4($s2)
    ctx->pc = 0x28c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c704:
    // 0x28c704: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x28c704u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_28c708:
    // 0x28c708: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x28c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28c70c:
    // 0x28c70c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x28c70cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_28c710:
    // 0x28c710: 0xc64200a8  lwc1        $f2, 0xA8($s2)
    ctx->pc = 0x28c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28c714:
    // 0x28c714: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x28c714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_28c718:
    // 0x28c718: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x28c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c71c:
    // 0x28c71c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x28c71cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_28c720:
    // 0x28c720: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x28c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c724:
    // 0x28c724: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x28c724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_28c728:
    // 0x28c728: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28c728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_28c72c:
    // 0x28c72c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x28c72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_28c730:
    // 0x28c730: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x28c730u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_28c734:
    // 0x28c734: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x28c734u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_28c738:
    // 0x28c738: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x28c738u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28c73c:
    // 0x28c73c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x28c73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_28c740:
    // 0x28c740: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x28c740u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_28c744:
    // 0x28c744: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x28c744u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_28c748:
    // 0x28c748: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x28c748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_28c74c:
    // 0x28c74c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x28c74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_28c750:
    // 0x28c750: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x28c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_28c754:
    // 0x28c754: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
label_28c758:
    if (ctx->pc == 0x28C758u) {
        ctx->pc = 0x28C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C754u;
        // 0x28c758: 0x8e4200b0  lw          $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C75Cu;
        goto label_28c75c;
    }
    ctx->pc = 0x28C754u;
    {
        const bool branch_taken_0x28c754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c754) {
            ctx->pc = 0x28C758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C754u;
            // 0x28c758: 0x8e4200b0  lw          $v0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C950u;
            goto label_28c950;
        }
    }
    ctx->pc = 0x28C75Cu;
label_28c75c:
    // 0x28c75c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x28c75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_28c760:
    // 0x28c760: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_28c764:
    if (ctx->pc == 0x28C764u) {
        ctx->pc = 0x28C768u;
        goto label_28c768;
    }
    ctx->pc = 0x28C760u;
    {
        const bool branch_taken_0x28c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c760) {
            ctx->pc = 0x28C7B0u;
            goto label_28c7b0;
        }
    }
    ctx->pc = 0x28C768u;
label_28c768:
    // 0x28c768: 0xc0a1d5c  jal         func_287570
label_28c76c:
    if (ctx->pc == 0x28C76Cu) {
        ctx->pc = 0x28C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C768u;
        // 0x28c76c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C770u;
        goto label_28c770;
    }
    ctx->pc = 0x28C768u;
    SET_GPR_U32(ctx, 31, 0x28C770u);
    ctx->pc = 0x28C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C768u;
    // 0x28c76c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287570u, 0x28C768u, 0x28C770u)) {
        return;
    }
    ctx->pc = 0x28C770u;
label_28c770:
    // 0x28c770: 0xc0a1e48  jal         func_287920
label_28c774:
    if (ctx->pc == 0x28C774u) {
        ctx->pc = 0x28C778u;
        goto label_28c778;
    }
    ctx->pc = 0x28C770u;
    SET_GPR_U32(ctx, 31, 0x28C778u);
    ctx->pc = 0x287920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287920u, 0x28C770u, 0x28C778u)) {
        return;
    }
    ctx->pc = 0x28C778u;
label_28c778:
    // 0x28c778: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x28c778u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28c77c:
    // 0x28c77c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_28c780:
    // 0x28c780: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x28c780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28c784:
    // 0x28c784: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x28c784u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
label_28c788:
    // 0x28c788: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x28c788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_28c78c:
    // 0x28c78c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x28c78cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_28c790:
    // 0x28c790: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x28c790u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
label_28c794:
    // 0x28c794: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x28c794u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_28c798:
    // 0x28c798: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x28c798u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
label_28c79c:
    // 0x28c79c: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x28c79cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_28c7a0:
    // 0x28c7a0: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x28c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_28c7a4:
    // 0x28c7a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_28c7a8:
    if (ctx->pc == 0x28C7A8u) {
        ctx->pc = 0x28C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7A4u;
        // 0x28c7a8: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7ACu;
        goto label_28c7ac;
    }
    ctx->pc = 0x28C7A4u;
    {
        const bool branch_taken_0x28c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7A4u;
        // 0x28c7a8: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7a4) {
            ctx->pc = 0x28C7B8u;
            goto label_28c7b8;
        }
    }
    ctx->pc = 0x28C7ACu;
label_28c7ac:
    // 0x28c7ac: 0x0  nop
    ctx->pc = 0x28c7acu;
    // NOP
label_28c7b0:
    // 0x28c7b0: 0xc0a1e14  jal         func_287850
label_28c7b4:
    if (ctx->pc == 0x28C7B4u) {
        ctx->pc = 0x28C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7B0u;
        // 0x28c7b4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7B8u;
        goto label_28c7b8;
    }
    ctx->pc = 0x28C7B0u;
    SET_GPR_U32(ctx, 31, 0x28C7B8u);
    ctx->pc = 0x28C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7B0u;
    // 0x28c7b4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287850u, 0x28C7B0u, 0x28C7B8u)) {
        return;
    }
    ctx->pc = 0x28C7B8u;
label_28c7b8:
    // 0x28c7b8: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x28c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_28c7bc:
    // 0x28c7bc: 0xc09292a  jal         func_24A4A8
label_28c7c0:
    if (ctx->pc == 0x28C7C0u) {
        ctx->pc = 0x28C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7BCu;
        // 0x28c7c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7C4u;
        goto label_28c7c4;
    }
    ctx->pc = 0x28C7BCu;
    SET_GPR_U32(ctx, 31, 0x28C7C4u);
    ctx->pc = 0x28C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7BCu;
    // 0x28c7c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28C7BCu, 0x28C7C4u)) {
        return;
    }
    ctx->pc = 0x28C7C4u;
label_28c7c4:
    // 0x28c7c4: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x28c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_28c7c8:
    // 0x28c7c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28c7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c7cc:
    // 0x28c7cc: 0xc09294c  jal         func_24A530
label_28c7d0:
    if (ctx->pc == 0x28C7D0u) {
        ctx->pc = 0x28C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7CCu;
        // 0x28c7d0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7D4u;
        goto label_28c7d4;
    }
    ctx->pc = 0x28C7CCu;
    SET_GPR_U32(ctx, 31, 0x28C7D4u);
    ctx->pc = 0x28C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7CCu;
    // 0x28c7d0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28C7CCu, 0x28C7D4u)) {
        return;
    }
    ctx->pc = 0x28C7D4u;
label_28c7d4:
    // 0x28c7d4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x28c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28c7d8:
    // 0x28c7d8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28c7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c7dc:
    // 0x28c7dc: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x28c7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28c7e0:
    // 0x28c7e0: 0x127400d0  beq         $s3, $s4, . + 4 + (0xD0 << 2)
label_28c7e4:
    if (ctx->pc == 0x28C7E4u) {
        ctx->pc = 0x28C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7E0u;
        // 0x28c7e4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C7E8u;
        goto label_28c7e8;
    }
    ctx->pc = 0x28C7E0u;
    {
        const bool branch_taken_0x28c7e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x28C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7E0u;
        // 0x28c7e4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7e0) {
            ctx->pc = 0x28CB24u;
            goto label_28cb24;
        }
    }
    ctx->pc = 0x28C7E8u;
label_28c7e8:
    // 0x28c7e8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x28c7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28c7ec:
    // 0x28c7ec: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x28c7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28c7f0:
    // 0x28c7f0: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x28c7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_28c7f4:
    // 0x28c7f4: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x28c7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_28c7f8:
    // 0x28c7f8: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x28c7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_28c7fc:
    // 0x28c7fc: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x28c7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c800:
    // 0x28c800: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x28c800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c804:
    // 0x28c804: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x28c804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c808:
    // 0x28c808: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x28c808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c80c:
    // 0x28c80c: 0x6a06004f  ldl         $a2, 0x4F($s0)
    ctx->pc = 0x28c80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_28c810:
    // 0x28c810: 0x6e060048  ldr         $a2, 0x48($s0)
    ctx->pc = 0x28c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_28c814:
    // 0x28c814: 0x6a070057  ldl         $a3, 0x57($s0)
    ctx->pc = 0x28c814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_28c818:
    // 0x28c818: 0x6e070050  ldr         $a3, 0x50($s0)
    ctx->pc = 0x28c818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_28c81c:
    // 0x28c81c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x28c81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c820:
    // 0x28c820: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x28c820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c824:
    // 0x28c824: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x28c824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c828:
    // 0x28c828: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x28c828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c82c:
    // 0x28c82c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c830:
    // 0x28c830: 0x6a02001f  ldl         $v0, 0x1F($s0)
    ctx->pc = 0x28c830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28c834:
    // 0x28c834: 0x6e020018  ldr         $v0, 0x18($s0)
    ctx->pc = 0x28c834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_28c838:
    // 0x28c838: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x28c838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_28c83c:
    // 0x28c83c: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x28c83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_28c840:
    // 0x28c840: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x28c840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c844:
    // 0x28c844: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x28c844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c848:
    // 0x28c848: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x28c848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c84c:
    // 0x28c84c: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x28c84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c850:
    // 0x28c850: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x28c850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28c854:
    // 0x28c854: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x28c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28c858:
    // 0x28c858: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x28c858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28c85c:
    // 0x28c85c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x28c85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_28c860:
    // 0x28c860: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x28c860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28c864:
    // 0x28c864: 0x6a0b0007  ldl         $t3, 0x7($s0)
    ctx->pc = 0x28c864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28c868:
    // 0x28c868: 0x6e0b0000  ldr         $t3, 0x0($s0)
    ctx->pc = 0x28c868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28c86c:
    // 0x28c86c: 0x6a0c000f  ldl         $t4, 0xF($s0)
    ctx->pc = 0x28c86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_28c870:
    // 0x28c870: 0x6e0c0008  ldr         $t4, 0x8($s0)
    ctx->pc = 0x28c870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_28c874:
    // 0x28c874: 0xb3ab0057  sdl         $t3, 0x57($sp)
    ctx->pc = 0x28c874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c878:
    // 0x28c878: 0xb7ab0050  sdr         $t3, 0x50($sp)
    ctx->pc = 0x28c878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c87c:
    // 0x28c87c: 0xb3ac005f  sdl         $t4, 0x5F($sp)
    ctx->pc = 0x28c87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c880:
    // 0x28c880: 0xb7ac0058  sdr         $t4, 0x58($sp)
    ctx->pc = 0x28c880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c884:
    // 0x28c884: 0xc0a3a6a  jal         func_28E9A8
label_28c888:
    if (ctx->pc == 0x28C888u) {
        ctx->pc = 0x28C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C884u;
        // 0x28c888: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C88Cu;
        goto label_28c88c;
    }
    ctx->pc = 0x28C884u;
    SET_GPR_U32(ctx, 31, 0x28C88Cu);
    ctx->pc = 0x28C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C884u;
    // 0x28c888: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28E9A8u, 0x28C884u, 0x28C88Cu)) {
        return;
    }
    ctx->pc = 0x28C88Cu;
label_28c88c:
    // 0x28c88c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28c890:
    // 0x28c890: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_28c894:
    // 0x28c894: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_28c898:
    if (ctx->pc == 0x28C898u) {
        ctx->pc = 0x28C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C894u;
        // 0x28c898: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C89Cu;
        goto label_28c89c;
    }
    ctx->pc = 0x28C894u;
    {
        const bool branch_taken_0x28c894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C894u;
        // 0x28c898: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c894) {
            ctx->pc = 0x28C8B0u;
            goto label_28c8b0;
        }
    }
    ctx->pc = 0x28C89Cu;
label_28c89c:
    // 0x28c89c: 0xc0a3ef6  jal         func_28FBD8
label_28c8a0:
    if (ctx->pc == 0x28C8A0u) {
        ctx->pc = 0x28C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C89Cu;
        // 0x28c8a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C8A4u;
        goto label_28c8a4;
    }
    ctx->pc = 0x28C89Cu;
    SET_GPR_U32(ctx, 31, 0x28C8A4u);
    ctx->pc = 0x28C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C89Cu;
    // 0x28c8a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FBD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FBD8u, 0x28C89Cu, 0x28C8A4u)) {
        return;
    }
    ctx->pc = 0x28C8A4u;
label_28c8a4:
    // 0x28c8a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_28c8a8:
    if (ctx->pc == 0x28C8A8u) {
        ctx->pc = 0x28C8ACu;
        goto label_28c8ac;
    }
    ctx->pc = 0x28C8A4u;
    {
        const bool branch_taken_0x28c8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c8a4) {
            ctx->pc = 0x28C8B8u;
            goto label_28c8b8;
        }
    }
    ctx->pc = 0x28C8ACu;
label_28c8ac:
    // 0x28c8ac: 0x0  nop
    ctx->pc = 0x28c8acu;
    // NOP
label_28c8b0:
    // 0x28c8b0: 0xc0a41aa  jal         func_2906A8
label_28c8b4:
    if (ctx->pc == 0x28C8B4u) {
        ctx->pc = 0x28C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8B0u;
        // 0x28c8b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C8B8u;
        goto label_28c8b8;
    }
    ctx->pc = 0x28C8B0u;
    SET_GPR_U32(ctx, 31, 0x28C8B8u);
    ctx->pc = 0x28C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8B0u;
    // 0x28c8b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2906A8u, 0x28C8B0u, 0x28C8B8u)) {
        return;
    }
    ctx->pc = 0x28C8B8u;
label_28c8b8:
    // 0x28c8b8: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x28c8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_28c8bc:
    // 0x28c8bc: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x28c8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28c8c0:
    // 0x28c8c0: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x28c8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_28c8c4:
    // 0x28c8c4: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x28c8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28c8c8:
    // 0x28c8c8: 0xb2040037  sdl         $a0, 0x37($s0)
    ctx->pc = 0x28c8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8cc:
    // 0x28c8cc: 0xb6040030  sdr         $a0, 0x30($s0)
    ctx->pc = 0x28c8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8d0:
    // 0x28c8d0: 0xb205003f  sdl         $a1, 0x3F($s0)
    ctx->pc = 0x28c8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8d4:
    // 0x28c8d4: 0xb6050038  sdr         $a1, 0x38($s0)
    ctx->pc = 0x28c8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8d8:
    // 0x28c8d8: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x28c8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28c8dc:
    // 0x28c8dc: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x28c8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28c8e0:
    // 0x28c8e0: 0x6bac003f  ldl         $t4, 0x3F($sp)
    ctx->pc = 0x28c8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_28c8e4:
    // 0x28c8e4: 0x6fac0038  ldr         $t4, 0x38($sp)
    ctx->pc = 0x28c8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_28c8e8:
    // 0x28c8e8: 0xb20b004f  sdl         $t3, 0x4F($s0)
    ctx->pc = 0x28c8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8ec:
    // 0x28c8ec: 0xb60b0048  sdr         $t3, 0x48($s0)
    ctx->pc = 0x28c8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8f0:
    // 0x28c8f0: 0xb20c0057  sdl         $t4, 0x57($s0)
    ctx->pc = 0x28c8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8f4:
    // 0x28c8f4: 0xb60c0050  sdr         $t4, 0x50($s0)
    ctx->pc = 0x28c8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c8f8:
    // 0x28c8f8: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x28c8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_28c8fc:
    // 0x28c8fc: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x28c8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28c900:
    // 0x28c900: 0x6ba5004f  ldl         $a1, 0x4F($sp)
    ctx->pc = 0x28c900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_28c904:
    // 0x28c904: 0x6fa50048  ldr         $a1, 0x48($sp)
    ctx->pc = 0x28c904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28c908:
    // 0x28c908: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x28c908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c90c:
    // 0x28c90c: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x28c90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c910:
    // 0x28c910: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x28c910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c914:
    // 0x28c914: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x28c914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c918:
    // 0x28c918: 0x6bab0057  ldl         $t3, 0x57($sp)
    ctx->pc = 0x28c918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28c91c:
    // 0x28c91c: 0x6fab0050  ldr         $t3, 0x50($sp)
    ctx->pc = 0x28c91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28c920:
    // 0x28c920: 0x6bac005f  ldl         $t4, 0x5F($sp)
    ctx->pc = 0x28c920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_28c924:
    // 0x28c924: 0x6fac0058  ldr         $t4, 0x58($sp)
    ctx->pc = 0x28c924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_28c928:
    // 0x28c928: 0xb20b0007  sdl         $t3, 0x7($s0)
    ctx->pc = 0x28c928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c92c:
    // 0x28c92c: 0xb60b0000  sdr         $t3, 0x0($s0)
    ctx->pc = 0x28c92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c930:
    // 0x28c930: 0xb20c000f  sdl         $t4, 0xF($s0)
    ctx->pc = 0x28c930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c934:
    // 0x28c934: 0xb60c0008  sdr         $t4, 0x8($s0)
    ctx->pc = 0x28c934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c938:
    // 0x28c938: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x28c938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_28c93c:
    // 0x28c93c: 0x1674ffaa  bne         $s3, $s4, . + 4 + (-0x56 << 2)
label_28c940:
    if (ctx->pc == 0x28C940u) {
        ctx->pc = 0x28C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C93Cu;
        // 0x28c940: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C944u;
        goto label_28c944;
    }
    ctx->pc = 0x28C93Cu;
    {
        const bool branch_taken_0x28c93c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x28C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C93Cu;
        // 0x28c940: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c93c) {
            ctx->pc = 0x28C7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c7e8;
        }
    }
    ctx->pc = 0x28C944u;
label_28c944:
    // 0x28c944: 0x10000077  b           . + 4 + (0x77 << 2)
label_28c948:
    if (ctx->pc == 0x28C948u) {
        ctx->pc = 0x28C94Cu;
        goto label_28c94c;
    }
    ctx->pc = 0x28C944u;
    {
        const bool branch_taken_0x28c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c944) {
            ctx->pc = 0x28CB24u;
            goto label_28cb24;
        }
    }
    ctx->pc = 0x28C94Cu;
label_28c94c:
    // 0x28c94c: 0x0  nop
    ctx->pc = 0x28c94cu;
    // NOP
label_28c950:
    // 0x28c950: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x28c950u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28c954:
    // 0x28c954: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x28c954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_28c958:
    // 0x28c958: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_28c95c:
    if (ctx->pc == 0x28C95Cu) {
        ctx->pc = 0x28C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C958u;
        // 0x28c95c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C960u;
        goto label_28c960;
    }
    ctx->pc = 0x28C958u;
    {
        const bool branch_taken_0x28c958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C958u;
        // 0x28c95c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c958) {
            ctx->pc = 0x28CA98u;
            goto label_28ca98;
        }
    }
    ctx->pc = 0x28C960u;
label_28c960:
    // 0x28c960: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x28c960u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_28c964:
    // 0x28c964: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x28c964u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c968:
    // 0x28c968: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28c968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c96c:
    // 0x28c96c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c970:
    // 0x28c970: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x28c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28c974:
    // 0x28c974: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x28c974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_28c978:
    // 0x28c978: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x28c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c97c:
    // 0x28c97c: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x28c97cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_28c980:
    // 0x28c980: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28c984:
    // 0x28c984: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x28c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c988:
    // 0x28c988: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x28c988u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28c98c:
    // 0x28c98c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x28c98cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_28c990:
    // 0x28c990: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x28c990u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_28c994:
    // 0x28c994: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x28c994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_28c998:
    // 0x28c998: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x28c998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_28c99c:
    // 0x28c99c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28c99cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c9a0:
    // 0x28c9a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28c9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28c9a4:
    // 0x28c9a4: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x28c9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_28c9a8:
    // 0x28c9a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28c9a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9ac:
    // 0x28c9ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c9b0:
    // 0x28c9b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28c9b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28c9b4:
    // 0x28c9b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28c9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_28c9b8:
    // 0x28c9b8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x28c9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c9bc:
    // 0x28c9bc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x28c9bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28c9c0:
    // 0x28c9c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28c9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_28c9c4:
    // 0x28c9c4: 0xc7a7000c  lwc1        $f7, 0xC($sp)
    ctx->pc = 0x28c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28c9c8:
    // 0x28c9c8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x28c9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_28c9cc:
    // 0x28c9cc: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x28c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_28c9d0:
    // 0x28c9d0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28c9d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_28c9d4:
    // 0x28c9d4: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x28c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28c9d8:
    // 0x28c9d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28c9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_28c9dc:
    // 0x28c9dc: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x28c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28c9e0:
    // 0x28c9e0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x28c9e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_28c9e4:
    // 0x28c9e4: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x28c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28c9e8:
    // 0x28c9e8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x28c9e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_28c9ec:
    // 0x28c9ec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x28c9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_28c9f0:
    // 0x28c9f0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x28c9f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_28c9f4:
    // 0x28c9f4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x28c9f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_28c9f8:
    // 0x28c9f8: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28c9f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_28c9fc:
    // 0x28c9fc: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x28c9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_28ca00:
    // 0x28ca00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ca00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28ca04:
    // 0x28ca04: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x28ca04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_28ca08:
    // 0x28ca08: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ca08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28ca0c:
    // 0x28ca0c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x28ca0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_28ca10:
    // 0x28ca10: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ca10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_28ca14:
    // 0x28ca14: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x28ca14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_28ca18:
    // 0x28ca18: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x28ca18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_28ca1c:
    // 0x28ca1c: 0x28e50100  slti        $a1, $a3, 0x100
    ctx->pc = 0x28ca1cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
label_28ca20:
    // 0x28ca20: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x28ca20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3));
label_28ca24:
    // 0x28ca24: 0x28c40100  slti        $a0, $a2, 0x100
    ctx->pc = 0x28ca24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_28ca28:
    // 0x28ca28: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x28ca28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
label_28ca2c:
    // 0x28ca2c: 0xc4580b  movn        $t3, $a2, $a0
    ctx->pc = 0x28ca2cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6));
label_28ca30:
    // 0x28ca30: 0xe5500b  movn        $t2, $a3, $a1
    ctx->pc = 0x28ca30u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7));
label_28ca34:
    // 0x28ca34: 0x102480b  movn        $t1, $t0, $v0
    ctx->pc = 0x28ca34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8));
label_28ca38:
    // 0x28ca38: 0x1ac182a  slt         $v1, $t5, $t4
    ctx->pc = 0x28ca38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_28ca3c:
    // 0x28ca3c: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x28ca3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_28ca40:
    // 0x28ca40: 0x1aa202a  slt         $a0, $t5, $t2
    ctx->pc = 0x28ca40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_28ca44:
    // 0x28ca44: 0x1a9282a  slt         $a1, $t5, $t1
    ctx->pc = 0x28ca44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_28ca48:
    // 0x28ca48: 0x3600a  movz        $t4, $zero, $v1
    ctx->pc = 0x28ca48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0));
label_28ca4c:
    // 0x28ca4c: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x28ca4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0));
label_28ca50:
    // 0x28ca50: 0x4500a  movz        $t2, $zero, $a0
    ctx->pc = 0x28ca50u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0));
label_28ca54:
    // 0x28ca54: 0x5480a  movz        $t1, $zero, $a1
    ctx->pc = 0x28ca54u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0));
label_28ca58:
    // 0x28ca58: 0xa3ac0060  sb          $t4, 0x60($sp)
    ctx->pc = 0x28ca58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 12));
label_28ca5c:
    // 0x28ca5c: 0xa3ab0061  sb          $t3, 0x61($sp)
    ctx->pc = 0x28ca5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 97), (uint8_t)GPR_U32(ctx, 11));
label_28ca60:
    // 0x28ca60: 0xa3aa0062  sb          $t2, 0x62($sp)
    ctx->pc = 0x28ca60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 98), (uint8_t)GPR_U32(ctx, 10));
label_28ca64:
    // 0x28ca64: 0xa3a90063  sb          $t1, 0x63($sp)
    ctx->pc = 0x28ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 99), (uint8_t)GPR_U32(ctx, 9));
label_28ca68:
    // 0x28ca68: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_28ca6c:
    // 0x28ca6c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28ca70:
    // 0x28ca70: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_28ca74:
    // 0x28ca74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ca78:
    // 0x28ca78: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x28ca78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_28ca7c:
    // 0x28ca7c: 0x1f1102b  sltu        $v0, $t7, $s1
    ctx->pc = 0x28ca7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_28ca80:
    // 0x28ca80: 0x8ba40063  lwl         $a0, 0x63($sp)
    ctx->pc = 0x28ca80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_28ca84:
    // 0x28ca84: 0x9ba40060  lwr         $a0, 0x60($sp)
    ctx->pc = 0x28ca84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_28ca88:
    // 0x28ca88: 0xa8640007  swl         $a0, 0x7($v1)
    ctx->pc = 0x28ca88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28ca8c:
    // 0x28ca8c: 0xb8640004  swr         $a0, 0x4($v1)
    ctx->pc = 0x28ca8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28ca90:
    // 0x28ca90: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_28ca94:
    if (ctx->pc == 0x28CA94u) {
        ctx->pc = 0x28CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA90u;
        // 0x28ca94: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CA98u;
        goto label_28ca98;
    }
    ctx->pc = 0x28CA90u;
    {
        const bool branch_taken_0x28ca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA90u;
        // 0x28ca94: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca90) {
            ctx->pc = 0x28C970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c970;
        }
    }
    ctx->pc = 0x28CA98u;
label_28ca98:
    // 0x28ca98: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x28ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28ca9c:
    // 0x28ca9c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x28ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_28caa0:
    // 0x28caa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28caa4:
    // 0x28caa4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28caa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_28caa8:
    // 0x28caa8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_28caac:
    if (ctx->pc == 0x28CAACu) {
        ctx->pc = 0x28CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAA8u;
        // 0x28caac: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAB0u;
        goto label_28cab0;
    }
    ctx->pc = 0x28CAA8u;
    {
        const bool branch_taken_0x28caa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAA8u;
        // 0x28caac: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28caa8) {
            ctx->pc = 0x28CAF4u;
            goto label_28caf4;
        }
    }
    ctx->pc = 0x28CAB0u;
label_28cab0:
    // 0x28cab0: 0xc0a1d5c  jal         func_287570
label_28cab4:
    if (ctx->pc == 0x28CAB4u) {
        ctx->pc = 0x28CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAB0u;
        // 0x28cab4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAB8u;
        goto label_28cab8;
    }
    ctx->pc = 0x28CAB0u;
    SET_GPR_U32(ctx, 31, 0x28CAB8u);
    ctx->pc = 0x28CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAB0u;
    // 0x28cab4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287570u, 0x28CAB0u, 0x28CAB8u)) {
        return;
    }
    ctx->pc = 0x28CAB8u;
label_28cab8:
    // 0x28cab8: 0xc0a1e48  jal         func_287920
label_28cabc:
    if (ctx->pc == 0x28CABCu) {
        ctx->pc = 0x28CAC0u;
        goto label_28cac0;
    }
    ctx->pc = 0x28CAB8u;
    SET_GPR_U32(ctx, 31, 0x28CAC0u);
    ctx->pc = 0x287920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287920u, 0x28CAB8u, 0x28CAC0u)) {
        return;
    }
    ctx->pc = 0x28CAC0u;
label_28cac0:
    // 0x28cac0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x28cac0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28cac4:
    // 0x28cac4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_28cac8:
    // 0x28cac8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x28cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28cacc:
    // 0x28cacc: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x28caccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
label_28cad0:
    // 0x28cad0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x28cad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_28cad4:
    // 0x28cad4: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x28cad4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_28cad8:
    // 0x28cad8: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x28cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
label_28cadc:
    // 0x28cadc: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x28cadcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_28cae0:
    // 0x28cae0: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x28cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
label_28cae4:
    // 0x28cae4: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x28cae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_28cae8:
    // 0x28cae8: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x28cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_28caec:
    // 0x28caec: 0x10000003  b           . + 4 + (0x3 << 2)
label_28caf0:
    if (ctx->pc == 0x28CAF0u) {
        ctx->pc = 0x28CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAECu;
        // 0x28caf0: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAF4u;
        goto label_28caf4;
    }
    ctx->pc = 0x28CAECu;
    {
        const bool branch_taken_0x28caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAECu;
        // 0x28caf0: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28caec) {
            ctx->pc = 0x28CAFCu;
            goto label_28cafc;
        }
    }
    ctx->pc = 0x28CAF4u;
label_28caf4:
    // 0x28caf4: 0xc0a1e14  jal         func_287850
label_28caf8:
    if (ctx->pc == 0x28CAF8u) {
        ctx->pc = 0x28CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAF4u;
        // 0x28caf8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CAFCu;
        goto label_28cafc;
    }
    ctx->pc = 0x28CAF4u;
    SET_GPR_U32(ctx, 31, 0x28CAFCu);
    ctx->pc = 0x28CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAF4u;
    // 0x28caf8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287850u, 0x28CAF4u, 0x28CAFCu)) {
        return;
    }
    ctx->pc = 0x28CAFCu;
label_28cafc:
    // 0x28cafc: 0xc0a1da0  jal         func_287680
label_28cb00:
    if (ctx->pc == 0x28CB00u) {
        ctx->pc = 0x28CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAFCu;
        // 0x28cb00: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB04u;
        goto label_28cb04;
    }
    ctx->pc = 0x28CAFCu;
    SET_GPR_U32(ctx, 31, 0x28CB04u);
    ctx->pc = 0x28CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAFCu;
    // 0x28cb00: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287680u, 0x28CAFCu, 0x28CB04u)) {
        return;
    }
    ctx->pc = 0x28CB04u;
label_28cb04:
    // 0x28cb04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28cb08:
    // 0x28cb08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cb0c:
    // 0x28cb0c: 0xc0899e8  jal         func_2267A0
label_28cb10:
    if (ctx->pc == 0x28CB10u) {
        ctx->pc = 0x28CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB0Cu;
        // 0x28cb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB14u;
        goto label_28cb14;
    }
    ctx->pc = 0x28CB0Cu;
    SET_GPR_U32(ctx, 31, 0x28CB14u);
    ctx->pc = 0x28CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB0Cu;
    // 0x28cb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x28CB0Cu, 0x28CB14u)) {
        return;
    }
    ctx->pc = 0x28CB14u;
label_28cb14:
    // 0x28cb14: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x28cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_28cb18:
    // 0x28cb18: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x28cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_28cb1c:
    // 0x28cb1c: 0x40f809  jalr        $v0
label_28cb20:
    if (ctx->pc == 0x28CB20u) {
        ctx->pc = 0x28CB24u;
        goto label_28cb24;
    }
    ctx->pc = 0x28CB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CB24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB1Cu, 0x28CB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CB24u;
label_28cb24:
    // 0x28cb24: 0xc0a1e06  jal         func_287818
label_28cb28:
    if (ctx->pc == 0x28CB28u) {
        ctx->pc = 0x28CB2Cu;
        goto label_28cb2c;
    }
    ctx->pc = 0x28CB24u;
    SET_GPR_U32(ctx, 31, 0x28CB2Cu);
    ctx->pc = 0x287818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287818u, 0x28CB24u, 0x28CB2Cu)) {
        return;
    }
    ctx->pc = 0x28CB2Cu;
label_28cb2c:
    // 0x28cb2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28cb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28cb30:
    // 0x28cb30: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x28cb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28cb34:
    // 0x28cb34: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x28cb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28cb38:
    // 0x28cb38: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x28cb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28cb3c:
    // 0x28cb3c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x28cb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28cb40:
    // 0x28cb40: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x28cb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28cb44:
    // 0x28cb44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28cb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28cb48:
    // 0x28cb48: 0x3e00008  jr          $ra
label_28cb4c:
    if (ctx->pc == 0x28CB4Cu) {
        ctx->pc = 0x28CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB48u;
        // 0x28cb4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CB50u;
        goto label_fallthrough_0x28cb48;
    }
    ctx->pc = 0x28CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB48u;
        // 0x28cb4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28cb48:
    ctx->pc = 0x28CB50u;
}
