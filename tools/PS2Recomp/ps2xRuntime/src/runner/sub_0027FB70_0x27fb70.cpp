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

// Function: sub_0027FB70
// Address: 0x27fb70 - 0x280040
void sub_0027FB70_0x27fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FB70_0x27fb70");
#endif

    switch (ctx->pc) {
        case 0x27fb70u: goto label_27fb70;
        case 0x27fb74u: goto label_27fb74;
        case 0x27fb78u: goto label_27fb78;
        case 0x27fb7cu: goto label_27fb7c;
        case 0x27fb80u: goto label_27fb80;
        case 0x27fb84u: goto label_27fb84;
        case 0x27fb88u: goto label_27fb88;
        case 0x27fb8cu: goto label_27fb8c;
        case 0x27fb90u: goto label_27fb90;
        case 0x27fb94u: goto label_27fb94;
        case 0x27fb98u: goto label_27fb98;
        case 0x27fb9cu: goto label_27fb9c;
        case 0x27fba0u: goto label_27fba0;
        case 0x27fba4u: goto label_27fba4;
        case 0x27fba8u: goto label_27fba8;
        case 0x27fbacu: goto label_27fbac;
        case 0x27fbb0u: goto label_27fbb0;
        case 0x27fbb4u: goto label_27fbb4;
        case 0x27fbb8u: goto label_27fbb8;
        case 0x27fbbcu: goto label_27fbbc;
        case 0x27fbc0u: goto label_27fbc0;
        case 0x27fbc4u: goto label_27fbc4;
        case 0x27fbc8u: goto label_27fbc8;
        case 0x27fbccu: goto label_27fbcc;
        case 0x27fbd0u: goto label_27fbd0;
        case 0x27fbd4u: goto label_27fbd4;
        case 0x27fbd8u: goto label_27fbd8;
        case 0x27fbdcu: goto label_27fbdc;
        case 0x27fbe0u: goto label_27fbe0;
        case 0x27fbe4u: goto label_27fbe4;
        case 0x27fbe8u: goto label_27fbe8;
        case 0x27fbecu: goto label_27fbec;
        case 0x27fbf0u: goto label_27fbf0;
        case 0x27fbf4u: goto label_27fbf4;
        case 0x27fbf8u: goto label_27fbf8;
        case 0x27fbfcu: goto label_27fbfc;
        case 0x27fc00u: goto label_27fc00;
        case 0x27fc04u: goto label_27fc04;
        case 0x27fc08u: goto label_27fc08;
        case 0x27fc0cu: goto label_27fc0c;
        case 0x27fc10u: goto label_27fc10;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc18u: goto label_27fc18;
        case 0x27fc1cu: goto label_27fc1c;
        case 0x27fc20u: goto label_27fc20;
        case 0x27fc24u: goto label_27fc24;
        case 0x27fc28u: goto label_27fc28;
        case 0x27fc2cu: goto label_27fc2c;
        case 0x27fc30u: goto label_27fc30;
        case 0x27fc34u: goto label_27fc34;
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc3cu: goto label_27fc3c;
        case 0x27fc40u: goto label_27fc40;
        case 0x27fc44u: goto label_27fc44;
        case 0x27fc48u: goto label_27fc48;
        case 0x27fc4cu: goto label_27fc4c;
        case 0x27fc50u: goto label_27fc50;
        case 0x27fc54u: goto label_27fc54;
        case 0x27fc58u: goto label_27fc58;
        case 0x27fc5cu: goto label_27fc5c;
        case 0x27fc60u: goto label_27fc60;
        case 0x27fc64u: goto label_27fc64;
        case 0x27fc68u: goto label_27fc68;
        case 0x27fc6cu: goto label_27fc6c;
        case 0x27fc70u: goto label_27fc70;
        case 0x27fc74u: goto label_27fc74;
        case 0x27fc78u: goto label_27fc78;
        case 0x27fc7cu: goto label_27fc7c;
        case 0x27fc80u: goto label_27fc80;
        case 0x27fc84u: goto label_27fc84;
        case 0x27fc88u: goto label_27fc88;
        case 0x27fc8cu: goto label_27fc8c;
        case 0x27fc90u: goto label_27fc90;
        case 0x27fc94u: goto label_27fc94;
        case 0x27fc98u: goto label_27fc98;
        case 0x27fc9cu: goto label_27fc9c;
        case 0x27fca0u: goto label_27fca0;
        case 0x27fca4u: goto label_27fca4;
        case 0x27fca8u: goto label_27fca8;
        case 0x27fcacu: goto label_27fcac;
        case 0x27fcb0u: goto label_27fcb0;
        case 0x27fcb4u: goto label_27fcb4;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcc0u: goto label_27fcc0;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcccu: goto label_27fccc;
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fcd4u: goto label_27fcd4;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fcdcu: goto label_27fcdc;
        case 0x27fce0u: goto label_27fce0;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fcecu: goto label_27fcec;
        case 0x27fcf0u: goto label_27fcf0;
        case 0x27fcf4u: goto label_27fcf4;
        case 0x27fcf8u: goto label_27fcf8;
        case 0x27fcfcu: goto label_27fcfc;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd08u: goto label_27fd08;
        case 0x27fd0cu: goto label_27fd0c;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fd14u: goto label_27fd14;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd20u: goto label_27fd20;
        case 0x27fd24u: goto label_27fd24;
        case 0x27fd28u: goto label_27fd28;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd30u: goto label_27fd30;
        case 0x27fd34u: goto label_27fd34;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd3cu: goto label_27fd3c;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fd44u: goto label_27fd44;
        case 0x27fd48u: goto label_27fd48;
        case 0x27fd4cu: goto label_27fd4c;
        case 0x27fd50u: goto label_27fd50;
        case 0x27fd54u: goto label_27fd54;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd5cu: goto label_27fd5c;
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd64u: goto label_27fd64;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27fd70u: goto label_27fd70;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fd78u: goto label_27fd78;
        case 0x27fd7cu: goto label_27fd7c;
        case 0x27fd80u: goto label_27fd80;
        case 0x27fd84u: goto label_27fd84;
        case 0x27fd88u: goto label_27fd88;
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fd94u: goto label_27fd94;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fd9cu: goto label_27fd9c;
        case 0x27fda0u: goto label_27fda0;
        case 0x27fda4u: goto label_27fda4;
        case 0x27fda8u: goto label_27fda8;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdb0u: goto label_27fdb0;
        case 0x27fdb4u: goto label_27fdb4;
        case 0x27fdb8u: goto label_27fdb8;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdc0u: goto label_27fdc0;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fdc8u: goto label_27fdc8;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fdd0u: goto label_27fdd0;
        case 0x27fdd4u: goto label_27fdd4;
        case 0x27fdd8u: goto label_27fdd8;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fde0u: goto label_27fde0;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fde8u: goto label_27fde8;
        case 0x27fdecu: goto label_27fdec;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdf4u: goto label_27fdf4;
        case 0x27fdf8u: goto label_27fdf8;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe00u: goto label_27fe00;
        case 0x27fe04u: goto label_27fe04;
        case 0x27fe08u: goto label_27fe08;
        case 0x27fe0cu: goto label_27fe0c;
        case 0x27fe10u: goto label_27fe10;
        case 0x27fe14u: goto label_27fe14;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe20u: goto label_27fe20;
        case 0x27fe24u: goto label_27fe24;
        case 0x27fe28u: goto label_27fe28;
        case 0x27fe2cu: goto label_27fe2c;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe34u: goto label_27fe34;
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe44u: goto label_27fe44;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe4cu: goto label_27fe4c;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe54u: goto label_27fe54;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe5cu: goto label_27fe5c;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe6cu: goto label_27fe6c;
        case 0x27fe70u: goto label_27fe70;
        case 0x27fe74u: goto label_27fe74;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe7cu: goto label_27fe7c;
        case 0x27fe80u: goto label_27fe80;
        case 0x27fe84u: goto label_27fe84;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fe90u: goto label_27fe90;
        case 0x27fe94u: goto label_27fe94;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fe9cu: goto label_27fe9c;
        case 0x27fea0u: goto label_27fea0;
        case 0x27fea4u: goto label_27fea4;
        case 0x27fea8u: goto label_27fea8;
        case 0x27feacu: goto label_27feac;
        case 0x27feb0u: goto label_27feb0;
        case 0x27feb4u: goto label_27feb4;
        case 0x27feb8u: goto label_27feb8;
        case 0x27febcu: goto label_27febc;
        case 0x27fec0u: goto label_27fec0;
        case 0x27fec4u: goto label_27fec4;
        case 0x27fec8u: goto label_27fec8;
        case 0x27feccu: goto label_27fecc;
        case 0x27fed0u: goto label_27fed0;
        case 0x27fed4u: goto label_27fed4;
        case 0x27fed8u: goto label_27fed8;
        case 0x27fedcu: goto label_27fedc;
        case 0x27fee0u: goto label_27fee0;
        case 0x27fee4u: goto label_27fee4;
        case 0x27fee8u: goto label_27fee8;
        case 0x27feecu: goto label_27feec;
        case 0x27fef0u: goto label_27fef0;
        case 0x27fef4u: goto label_27fef4;
        case 0x27fef8u: goto label_27fef8;
        case 0x27fefcu: goto label_27fefc;
        case 0x27ff00u: goto label_27ff00;
        case 0x27ff04u: goto label_27ff04;
        case 0x27ff08u: goto label_27ff08;
        case 0x27ff0cu: goto label_27ff0c;
        case 0x27ff10u: goto label_27ff10;
        case 0x27ff14u: goto label_27ff14;
        case 0x27ff18u: goto label_27ff18;
        case 0x27ff1cu: goto label_27ff1c;
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff24u: goto label_27ff24;
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff2cu: goto label_27ff2c;
        case 0x27ff30u: goto label_27ff30;
        case 0x27ff34u: goto label_27ff34;
        case 0x27ff38u: goto label_27ff38;
        case 0x27ff3cu: goto label_27ff3c;
        case 0x27ff40u: goto label_27ff40;
        case 0x27ff44u: goto label_27ff44;
        case 0x27ff48u: goto label_27ff48;
        case 0x27ff4cu: goto label_27ff4c;
        case 0x27ff50u: goto label_27ff50;
        case 0x27ff54u: goto label_27ff54;
        case 0x27ff58u: goto label_27ff58;
        case 0x27ff5cu: goto label_27ff5c;
        case 0x27ff60u: goto label_27ff60;
        case 0x27ff64u: goto label_27ff64;
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff6cu: goto label_27ff6c;
        case 0x27ff70u: goto label_27ff70;
        case 0x27ff74u: goto label_27ff74;
        case 0x27ff78u: goto label_27ff78;
        case 0x27ff7cu: goto label_27ff7c;
        case 0x27ff80u: goto label_27ff80;
        case 0x27ff84u: goto label_27ff84;
        case 0x27ff88u: goto label_27ff88;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ff90u: goto label_27ff90;
        case 0x27ff94u: goto label_27ff94;
        case 0x27ff98u: goto label_27ff98;
        case 0x27ff9cu: goto label_27ff9c;
        case 0x27ffa0u: goto label_27ffa0;
        case 0x27ffa4u: goto label_27ffa4;
        case 0x27ffa8u: goto label_27ffa8;
        case 0x27ffacu: goto label_27ffac;
        case 0x27ffb0u: goto label_27ffb0;
        case 0x27ffb4u: goto label_27ffb4;
        case 0x27ffb8u: goto label_27ffb8;
        case 0x27ffbcu: goto label_27ffbc;
        case 0x27ffc0u: goto label_27ffc0;
        case 0x27ffc4u: goto label_27ffc4;
        case 0x27ffc8u: goto label_27ffc8;
        case 0x27ffccu: goto label_27ffcc;
        case 0x27ffd0u: goto label_27ffd0;
        case 0x27ffd4u: goto label_27ffd4;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffdcu: goto label_27ffdc;
        case 0x27ffe0u: goto label_27ffe0;
        case 0x27ffe4u: goto label_27ffe4;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27ffecu: goto label_27ffec;
        case 0x27fff0u: goto label_27fff0;
        case 0x27fff4u: goto label_27fff4;
        case 0x27fff8u: goto label_27fff8;
        case 0x27fffcu: goto label_27fffc;
        case 0x280000u: goto label_280000;
        case 0x280004u: goto label_280004;
        case 0x280008u: goto label_280008;
        case 0x28000cu: goto label_28000c;
        case 0x280010u: goto label_280010;
        case 0x280014u: goto label_280014;
        case 0x280018u: goto label_280018;
        case 0x28001cu: goto label_28001c;
        case 0x280020u: goto label_280020;
        case 0x280024u: goto label_280024;
        case 0x280028u: goto label_280028;
        case 0x28002cu: goto label_28002c;
        case 0x280030u: goto label_280030;
        case 0x280034u: goto label_280034;
        case 0x280038u: goto label_280038;
        case 0x28003cu: goto label_28003c;
        default: break;
    }

    ctx->pc = 0x27fb70u;

label_27fb70:
    // 0x27fb70: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x27fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_27fb74:
    // 0x27fb74: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x27fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_27fb78:
    // 0x27fb78: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x27fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_27fb7c:
    // 0x27fb7c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x27fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_27fb80:
    // 0x27fb80: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x27fb80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27fb84:
    // 0x27fb84: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x27fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_27fb88:
    // 0x27fb88: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x27fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_27fb8c:
    // 0x27fb8c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x27fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_27fb90:
    // 0x27fb90: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x27fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_27fb94:
    // 0x27fb94: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x27fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_27fb98:
    // 0x27fb98: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x27fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_27fb9c:
    // 0x27fb9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27fb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_27fba0:
    // 0x27fba0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x27fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_27fba4:
    // 0x27fba4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x27fba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27fba8:
    // 0x27fba8: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_27fbac:
    if (ctx->pc == 0x27FBACu) {
        ctx->pc = 0x27FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBA8u;
        // 0x27fbac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FBB0u;
        goto label_27fbb0;
    }
    ctx->pc = 0x27FBA8u;
    {
        const bool branch_taken_0x27fba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBA8u;
        // 0x27fbac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fba8) {
            ctx->pc = 0x27FBF8u;
            goto label_27fbf8;
        }
    }
    ctx->pc = 0x27FBB0u;
label_27fbb0:
    // 0x27fbb0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27fbb4:
    // 0x27fbb4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x27fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
label_27fbb8:
    // 0x27fbb8: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x27fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_27fbbc:
    // 0x27fbbc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27fbc0:
    // 0x27fbc0: 0x8cc4e698  lw          $a0, -0x1968($a2)
    ctx->pc = 0x27fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960792)));
label_27fbc4:
    // 0x27fbc4: 0x40f809  jalr        $v0
label_27fbc8:
    if (ctx->pc == 0x27FBC8u) {
        ctx->pc = 0x27FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBC4u;
        // 0x27fbc8: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FBCCu;
        goto label_27fbcc;
    }
    ctx->pc = 0x27FBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27FBCCu);
        ctx->pc = 0x27FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBC4u;
        // 0x27fbc8: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FBC4u, 0x27FBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FBCCu;
label_27fbcc:
    // 0x27fbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fbd0:
    // 0x27fbd0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_27fbd4:
    if (ctx->pc == 0x27FBD4u) {
        ctx->pc = 0x27FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBD0u;
        // 0x27fbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FBD8u;
        goto label_27fbd8;
    }
    ctx->pc = 0x27FBD0u;
    {
        const bool branch_taken_0x27fbd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBD0u;
        // 0x27fbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbd0) {
            ctx->pc = 0x27FBE0u;
            goto label_27fbe0;
        }
    }
    ctx->pc = 0x27FBD8u;
label_27fbd8:
    // 0x27fbd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_27fbdc:
    if (ctx->pc == 0x27FBDCu) {
        ctx->pc = 0x27FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBD8u;
        // 0x27fbdc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FBE0u;
        goto label_27fbe0;
    }
    ctx->pc = 0x27FBD8u;
    {
        const bool branch_taken_0x27fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBD8u;
        // 0x27fbdc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbd8) {
            ctx->pc = 0x27FBFCu;
            goto label_27fbfc;
        }
    }
    ctx->pc = 0x27FBE0u;
label_27fbe0:
    // 0x27fbe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fbe4:
    // 0x27fbe4: 0xc0c493d  jal         func_3124F4
label_27fbe8:
    if (ctx->pc == 0x27FBE8u) {
        ctx->pc = 0x27FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBE4u;
        // 0x27fbe8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FBECu;
        goto label_27fbec;
    }
    ctx->pc = 0x27FBE4u;
    SET_GPR_U32(ctx, 31, 0x27FBECu);
    ctx->pc = 0x27FBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBE4u;
    // 0x27fbe8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27FBE4u, 0x27FBECu)) {
        return;
    }
    ctx->pc = 0x27FBECu;
label_27fbec:
    // 0x27fbec: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x27fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_27fbf0:
    // 0x27fbf0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x27fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_27fbf4:
    // 0x27fbf4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x27fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_27fbf8:
    // 0x27fbf8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x27fbf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fbfc:
    // 0x27fbfc: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
label_27fc00:
    if (ctx->pc == 0x27FC00u) {
        ctx->pc = 0x27FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBFCu;
        // 0x27fc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC04u;
        goto label_27fc04;
    }
    ctx->pc = 0x27FBFCu;
    {
        const bool branch_taken_0x27fbfc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBFCu;
        // 0x27fc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbfc) {
            ctx->pc = 0x27FDC0u;
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FC04u;
label_27fc04:
    // 0x27fc04: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27fc08:
    // 0x27fc08: 0xc0927be  jal         func_249EF8
label_27fc0c:
    if (ctx->pc == 0x27FC0Cu) {
        ctx->pc = 0x27FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC08u;
        // 0x27fc0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC10u;
        goto label_27fc10;
    }
    ctx->pc = 0x27FC08u;
    SET_GPR_U32(ctx, 31, 0x27FC10u);
    ctx->pc = 0x27FC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC08u;
    // 0x27fc0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FC08u, 0x27FC10u)) {
        return;
    }
    ctx->pc = 0x27FC10u;
label_27fc10:
    // 0x27fc10: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_27fc14:
    if (ctx->pc == 0x27FC14u) {
        ctx->pc = 0x27FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC10u;
        // 0x27fc14: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC18u;
        goto label_27fc18;
    }
    ctx->pc = 0x27FC10u;
    {
        const bool branch_taken_0x27fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC10u;
        // 0x27fc14: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc10) {
            ctx->pc = 0x27FDC0u;
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FC18u;
label_27fc18:
    // 0x27fc18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27fc1c:
    // 0x27fc1c: 0xc0a01bc  jal         func_2806F0
label_27fc20:
    if (ctx->pc == 0x27FC20u) {
        ctx->pc = 0x27FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC1Cu;
        // 0x27fc20: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC24u;
        goto label_27fc24;
    }
    ctx->pc = 0x27FC1Cu;
    SET_GPR_U32(ctx, 31, 0x27FC24u);
    ctx->pc = 0x27FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC1Cu;
    // 0x27fc20: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2806F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2806F0u, 0x27FC1Cu, 0x27FC24u)) {
        return;
    }
    ctx->pc = 0x27FC24u;
label_27fc24:
    // 0x27fc24: 0x27b70054  addiu       $s7, $sp, 0x54
    ctx->pc = 0x27fc24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_27fc28:
    // 0x27fc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fc2c:
    // 0x27fc2c: 0x0  nop
    ctx->pc = 0x27fc2cu;
    // NOP
label_27fc30:
    // 0x27fc30: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27fc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27fc34:
    // 0x27fc34: 0xc0927be  jal         func_249EF8
label_27fc38:
    if (ctx->pc == 0x27FC38u) {
        ctx->pc = 0x27FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC34u;
        // 0x27fc38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC3Cu;
        goto label_27fc3c;
    }
    ctx->pc = 0x27FC34u;
    SET_GPR_U32(ctx, 31, 0x27FC3Cu);
    ctx->pc = 0x27FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC34u;
    // 0x27fc38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FC34u, 0x27FC3Cu)) {
        return;
    }
    ctx->pc = 0x27FC3Cu;
label_27fc3c:
    // 0x27fc3c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_27fc40:
    if (ctx->pc == 0x27FC40u) {
        ctx->pc = 0x27FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC3Cu;
        // 0x27fc40: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC44u;
        goto label_27fc44;
    }
    ctx->pc = 0x27FC3Cu;
    {
        const bool branch_taken_0x27fc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC3Cu;
        // 0x27fc40: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc3c) {
            ctx->pc = 0x27FDC0u;
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FC44u;
label_27fc44:
    // 0x27fc44: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x27fc44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27fc48:
    // 0x27fc48: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_27fc4c:
    if (ctx->pc == 0x27FC4Cu) {
        ctx->pc = 0x27FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC48u;
        // 0x27fc4c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC50u;
        goto label_27fc50;
    }
    ctx->pc = 0x27FC48u;
    {
        const bool branch_taken_0x27fc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC48u;
        // 0x27fc4c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc48) {
            ctx->pc = 0x27FFF8u;
            goto label_27fff8;
        }
    }
    ctx->pc = 0x27FC50u;
label_27fc50:
    // 0x27fc50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27fc54:
    // 0x27fc54: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x27fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
label_27fc58:
    // 0x27fc58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27fc5c:
    // 0x27fc5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27fc60:
    // 0x27fc60: 0x800008  jr          $a0
label_27fc64:
    if (ctx->pc == 0x27FC64u) {
        ctx->pc = 0x27FC68u;
        goto label_27fc68;
    }
    ctx->pc = 0x27FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FC68u: goto label_27fc68;
            case 0x27FE34u: goto label_27fe34;
            case 0x27FF28u: goto label_27ff28;
            case 0x27FFF8u: goto label_27fff8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FC60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27FC68u;
label_27fc68:
    // 0x27fc68: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x27fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_27fc6c:
    // 0x27fc6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27fc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fc70:
    // 0x27fc70: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x27fc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_27fc74:
    // 0x27fc74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27fc74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fc78:
    // 0x27fc78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27fc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fc7c:
    // 0x27fc7c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x27fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_27fc80:
    // 0x27fc80: 0xc0927aa  jal         func_249EA8
label_27fc84:
    if (ctx->pc == 0x27FC84u) {
        ctx->pc = 0x27FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC80u;
        // 0x27fc84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC88u;
        goto label_27fc88;
    }
    ctx->pc = 0x27FC80u;
    SET_GPR_U32(ctx, 31, 0x27FC88u);
    ctx->pc = 0x27FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC80u;
    // 0x27fc84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27FC80u, 0x27FC88u)) {
        return;
    }
    ctx->pc = 0x27FC88u;
label_27fc88:
    // 0x27fc88: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_27fc8c:
    if (ctx->pc == 0x27FC8Cu) {
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC88u;
        // 0x27fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC90u;
        goto label_27fc90;
    }
    ctx->pc = 0x27FC88u;
    {
        const bool branch_taken_0x27fc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC88u;
        // 0x27fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc88) {
            ctx->pc = 0x27FDC0u;
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FC90u;
label_27fc90:
    // 0x27fc90: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x27fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_27fc94:
    // 0x27fc94: 0xc0927be  jal         func_249EF8
label_27fc98:
    if (ctx->pc == 0x27FC98u) {
        ctx->pc = 0x27FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC94u;
        // 0x27fc98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FC9Cu;
        goto label_27fc9c;
    }
    ctx->pc = 0x27FC94u;
    SET_GPR_U32(ctx, 31, 0x27FC9Cu);
    ctx->pc = 0x27FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC94u;
    // 0x27fc98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FC94u, 0x27FC9Cu)) {
        return;
    }
    ctx->pc = 0x27FC9Cu;
label_27fc9c:
    // 0x27fc9c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27fca0:
    if (ctx->pc == 0x27FCA0u) {
        ctx->pc = 0x27FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC9Cu;
        // 0x27fca0: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCA4u;
        goto label_27fca4;
    }
    ctx->pc = 0x27FC9Cu;
    {
        const bool branch_taken_0x27fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC9Cu;
        // 0x27fca0: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc9c) {
            ctx->pc = 0x27FD08u;
            goto label_27fd08;
        }
    }
    ctx->pc = 0x27FCA4u;
label_27fca4:
    // 0x27fca4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27fca8:
    if (ctx->pc == 0x27FCA8u) {
        ctx->pc = 0x27FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCA4u;
        // 0x27fca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCACu;
        goto label_27fcac;
    }
    ctx->pc = 0x27FCA4u;
    {
        const bool branch_taken_0x27fca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCA4u;
        // 0x27fca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fca4) {
            ctx->pc = 0x27FD10u;
            goto label_27fd10;
        }
    }
    ctx->pc = 0x27FCACu;
label_27fcac:
    // 0x27fcac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27fcb0:
    // 0x27fcb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fcb4:
    // 0x27fcb4: 0xc09270a  jal         func_249C28
label_27fcb8:
    if (ctx->pc == 0x27FCB8u) {
        ctx->pc = 0x27FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCB4u;
        // 0x27fcb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCBCu;
        goto label_27fcbc;
    }
    ctx->pc = 0x27FCB4u;
    SET_GPR_U32(ctx, 31, 0x27FCBCu);
    ctx->pc = 0x27FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCB4u;
    // 0x27fcb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x27FCB4u, 0x27FCBCu)) {
        return;
    }
    ctx->pc = 0x27FCBCu;
label_27fcbc:
    // 0x27fcbc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_27fcc0:
    if (ctx->pc == 0x27FCC0u) {
        ctx->pc = 0x27FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCBCu;
        // 0x27fcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCC4u;
        goto label_27fcc4;
    }
    ctx->pc = 0x27FCBCu;
    {
        const bool branch_taken_0x27fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCBCu;
        // 0x27fcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcbc) {
            ctx->pc = 0x27FD18u;
            goto label_27fd18;
        }
    }
    ctx->pc = 0x27FCC4u;
label_27fcc4:
    // 0x27fcc4: 0xc092836  jal         func_24A0D8
label_27fcc8:
    if (ctx->pc == 0x27FCC8u) {
        ctx->pc = 0x27FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCC4u;
        // 0x27fcc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCCCu;
        goto label_27fccc;
    }
    ctx->pc = 0x27FCC4u;
    SET_GPR_U32(ctx, 31, 0x27FCCCu);
    ctx->pc = 0x27FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCC4u;
    // 0x27fcc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FCC4u, 0x27FCCCu)) {
        return;
    }
    ctx->pc = 0x27FCCCu;
label_27fccc:
    // 0x27fccc: 0xc088cf4  jal         func_2233D0
label_27fcd0:
    if (ctx->pc == 0x27FCD0u) {
        ctx->pc = 0x27FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCCCu;
        // 0x27fcd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCD4u;
        goto label_27fcd4;
    }
    ctx->pc = 0x27FCCCu;
    SET_GPR_U32(ctx, 31, 0x27FCD4u);
    ctx->pc = 0x27FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCCCu;
    // 0x27fcd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2233D0u, 0x27FCCCu, 0x27FCD4u)) {
        return;
    }
    ctx->pc = 0x27FCD4u;
label_27fcd4:
    // 0x27fcd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fcd8:
    // 0x27fcd8: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_27fcdc:
    if (ctx->pc == 0x27FCDCu) {
        ctx->pc = 0x27FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCD8u;
        // 0x27fcdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCE0u;
        goto label_27fce0;
    }
    ctx->pc = 0x27FCD8u;
    {
        const bool branch_taken_0x27fcd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCD8u;
        // 0x27fcdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcd8) {
            ctx->pc = 0x27FD18u;
            goto label_27fd18;
        }
    }
    ctx->pc = 0x27FCE0u;
label_27fce0:
    // 0x27fce0: 0xc092836  jal         func_24A0D8
label_27fce4:
    if (ctx->pc == 0x27FCE4u) {
        ctx->pc = 0x27FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCE0u;
        // 0x27fce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCE8u;
        goto label_27fce8;
    }
    ctx->pc = 0x27FCE0u;
    SET_GPR_U32(ctx, 31, 0x27FCE8u);
    ctx->pc = 0x27FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCE0u;
    // 0x27fce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FCE0u, 0x27FCE8u)) {
        return;
    }
    ctx->pc = 0x27FCE8u;
label_27fce8:
    // 0x27fce8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x27fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27fcec:
    // 0x27fcec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27fcf0:
    // 0x27fcf0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_27fcf4:
    if (ctx->pc == 0x27FCF4u) {
        ctx->pc = 0x27FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF0u;
        // 0x27fcf4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FCF8u;
        goto label_27fcf8;
    }
    ctx->pc = 0x27FCF0u;
    {
        const bool branch_taken_0x27fcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF0u;
        // 0x27fcf4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcf0) {
            ctx->pc = 0x27FD14u;
            goto label_27fd14;
        }
    }
    ctx->pc = 0x27FCF8u;
label_27fcf8:
    // 0x27fcf8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27fcfc:
    if (ctx->pc == 0x27FCFCu) {
        ctx->pc = 0x27FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF8u;
        // 0x27fcfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD00u;
        goto label_27fd00;
    }
    ctx->pc = 0x27FCF8u;
    {
        const bool branch_taken_0x27fcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF8u;
        // 0x27fcfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcf8) {
            ctx->pc = 0x27FD18u;
            goto label_27fd18;
        }
    }
    ctx->pc = 0x27FD00u;
label_27fd00:
    // 0x27fd00: 0xc09281a  jal         func_24A068
label_27fd04:
    if (ctx->pc == 0x27FD04u) {
        ctx->pc = 0x27FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD00u;
        // 0x27fd04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD08u;
        goto label_27fd08;
    }
    ctx->pc = 0x27FD00u;
    SET_GPR_U32(ctx, 31, 0x27FD08u);
    ctx->pc = 0x27FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD00u;
    // 0x27fd04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27FD00u, 0x27FD08u)) {
        return;
    }
    ctx->pc = 0x27FD08u;
label_27fd08:
    // 0x27fd08: 0x10000003  b           . + 4 + (0x3 << 2)
label_27fd0c:
    if (ctx->pc == 0x27FD0Cu) {
        ctx->pc = 0x27FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD08u;
        // 0x27fd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD10u;
        goto label_27fd10;
    }
    ctx->pc = 0x27FD08u;
    {
        const bool branch_taken_0x27fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD08u;
        // 0x27fd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd08) {
            ctx->pc = 0x27FD18u;
            goto label_27fd18;
        }
    }
    ctx->pc = 0x27FD10u;
label_27fd10:
    // 0x27fd10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27fd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fd14:
    // 0x27fd14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27fd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fd18:
    // 0x27fd18: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_27fd1c:
    if (ctx->pc == 0x27FD1Cu) {
        ctx->pc = 0x27FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD18u;
        // 0x27fd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD20u;
        goto label_27fd20;
    }
    ctx->pc = 0x27FD18u;
    {
        const bool branch_taken_0x27fd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD18u;
        // 0x27fd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd18) {
            ctx->pc = 0x27FDC0u;
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FD20u;
label_27fd20:
    // 0x27fd20: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27fd24:
    // 0x27fd24: 0xc0927be  jal         func_249EF8
label_27fd28:
    if (ctx->pc == 0x27FD28u) {
        ctx->pc = 0x27FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD24u;
        // 0x27fd28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD2Cu;
        goto label_27fd2c;
    }
    ctx->pc = 0x27FD24u;
    SET_GPR_U32(ctx, 31, 0x27FD2Cu);
    ctx->pc = 0x27FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD24u;
    // 0x27fd28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FD24u, 0x27FD2Cu)) {
        return;
    }
    ctx->pc = 0x27FD2Cu;
label_27fd2c:
    // 0x27fd2c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27fd30:
    if (ctx->pc == 0x27FD30u) {
        ctx->pc = 0x27FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD2Cu;
        // 0x27fd30: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD34u;
        goto label_27fd34;
    }
    ctx->pc = 0x27FD2Cu;
    {
        const bool branch_taken_0x27fd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD2Cu;
        // 0x27fd30: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd2c) {
            ctx->pc = 0x27FD98u;
            goto label_27fd98;
        }
    }
    ctx->pc = 0x27FD34u;
label_27fd34:
    // 0x27fd34: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27fd38:
    if (ctx->pc == 0x27FD38u) {
        ctx->pc = 0x27FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD34u;
        // 0x27fd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD3Cu;
        goto label_27fd3c;
    }
    ctx->pc = 0x27FD34u;
    {
        const bool branch_taken_0x27fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD34u;
        // 0x27fd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd34) {
            ctx->pc = 0x27FDA0u;
            goto label_27fda0;
        }
    }
    ctx->pc = 0x27FD3Cu;
label_27fd3c:
    // 0x27fd3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27fd40:
    // 0x27fd40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fd44:
    // 0x27fd44: 0xc09270a  jal         func_249C28
label_27fd48:
    if (ctx->pc == 0x27FD48u) {
        ctx->pc = 0x27FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD44u;
        // 0x27fd48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD4Cu;
        goto label_27fd4c;
    }
    ctx->pc = 0x27FD44u;
    SET_GPR_U32(ctx, 31, 0x27FD4Cu);
    ctx->pc = 0x27FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD44u;
    // 0x27fd48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x27FD44u, 0x27FD4Cu)) {
        return;
    }
    ctx->pc = 0x27FD4Cu;
label_27fd4c:
    // 0x27fd4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_27fd50:
    if (ctx->pc == 0x27FD50u) {
        ctx->pc = 0x27FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD4Cu;
        // 0x27fd50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD54u;
        goto label_27fd54;
    }
    ctx->pc = 0x27FD4Cu;
    {
        const bool branch_taken_0x27fd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD4Cu;
        // 0x27fd50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd4c) {
            ctx->pc = 0x27FDA8u;
            goto label_27fda8;
        }
    }
    ctx->pc = 0x27FD54u;
label_27fd54:
    // 0x27fd54: 0xc092836  jal         func_24A0D8
label_27fd58:
    if (ctx->pc == 0x27FD58u) {
        ctx->pc = 0x27FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD54u;
        // 0x27fd58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD5Cu;
        goto label_27fd5c;
    }
    ctx->pc = 0x27FD54u;
    SET_GPR_U32(ctx, 31, 0x27FD5Cu);
    ctx->pc = 0x27FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD54u;
    // 0x27fd58: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FD54u, 0x27FD5Cu)) {
        return;
    }
    ctx->pc = 0x27FD5Cu;
label_27fd5c:
    // 0x27fd5c: 0xc088cf4  jal         func_2233D0
label_27fd60:
    if (ctx->pc == 0x27FD60u) {
        ctx->pc = 0x27FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD5Cu;
        // 0x27fd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD64u;
        goto label_27fd64;
    }
    ctx->pc = 0x27FD5Cu;
    SET_GPR_U32(ctx, 31, 0x27FD64u);
    ctx->pc = 0x27FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD5Cu;
    // 0x27fd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2233D0u, 0x27FD5Cu, 0x27FD64u)) {
        return;
    }
    ctx->pc = 0x27FD64u;
label_27fd64:
    // 0x27fd64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27fd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fd68:
    // 0x27fd68: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_27fd6c:
    if (ctx->pc == 0x27FD6Cu) {
        ctx->pc = 0x27FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD68u;
        // 0x27fd6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD70u;
        goto label_27fd70;
    }
    ctx->pc = 0x27FD68u;
    {
        const bool branch_taken_0x27fd68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD68u;
        // 0x27fd6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd68) {
            ctx->pc = 0x27FDA8u;
            goto label_27fda8;
        }
    }
    ctx->pc = 0x27FD70u;
label_27fd70:
    // 0x27fd70: 0xc092836  jal         func_24A0D8
label_27fd74:
    if (ctx->pc == 0x27FD74u) {
        ctx->pc = 0x27FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD70u;
        // 0x27fd74: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD78u;
        goto label_27fd78;
    }
    ctx->pc = 0x27FD70u;
    SET_GPR_U32(ctx, 31, 0x27FD78u);
    ctx->pc = 0x27FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD70u;
    // 0x27fd74: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FD70u, 0x27FD78u)) {
        return;
    }
    ctx->pc = 0x27FD78u;
label_27fd78:
    // 0x27fd78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x27fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_27fd7c:
    // 0x27fd7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27fd80:
    // 0x27fd80: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_27fd84:
    if (ctx->pc == 0x27FD84u) {
        ctx->pc = 0x27FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD80u;
        // 0x27fd84: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD88u;
        goto label_27fd88;
    }
    ctx->pc = 0x27FD80u;
    {
        const bool branch_taken_0x27fd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD80u;
        // 0x27fd84: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd80) {
            ctx->pc = 0x27FDA4u;
            goto label_27fda4;
        }
    }
    ctx->pc = 0x27FD88u;
label_27fd88:
    // 0x27fd88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27fd8c:
    if (ctx->pc == 0x27FD8Cu) {
        ctx->pc = 0x27FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD88u;
        // 0x27fd8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD90u;
        goto label_27fd90;
    }
    ctx->pc = 0x27FD88u;
    {
        const bool branch_taken_0x27fd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD88u;
        // 0x27fd8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd88) {
            ctx->pc = 0x27FDA8u;
            goto label_27fda8;
        }
    }
    ctx->pc = 0x27FD90u;
label_27fd90:
    // 0x27fd90: 0xc09281a  jal         func_24A068
label_27fd94:
    if (ctx->pc == 0x27FD94u) {
        ctx->pc = 0x27FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD90u;
        // 0x27fd94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FD98u;
        goto label_27fd98;
    }
    ctx->pc = 0x27FD90u;
    SET_GPR_U32(ctx, 31, 0x27FD98u);
    ctx->pc = 0x27FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD90u;
    // 0x27fd94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27FD90u, 0x27FD98u)) {
        return;
    }
    ctx->pc = 0x27FD98u;
label_27fd98:
    // 0x27fd98: 0x10000003  b           . + 4 + (0x3 << 2)
label_27fd9c:
    if (ctx->pc == 0x27FD9Cu) {
        ctx->pc = 0x27FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD98u;
        // 0x27fd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDA0u;
        goto label_27fda0;
    }
    ctx->pc = 0x27FD98u;
    {
        const bool branch_taken_0x27fd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD98u;
        // 0x27fd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd98) {
            ctx->pc = 0x27FDA8u;
            goto label_27fda8;
        }
    }
    ctx->pc = 0x27FDA0u;
label_27fda0:
    // 0x27fda0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27fda0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fda4:
    // 0x27fda4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27fda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fda8:
    // 0x27fda8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_27fdac:
    if (ctx->pc == 0x27FDACu) {
        ctx->pc = 0x27FDB0u;
        goto label_27fdb0;
    }
    ctx->pc = 0x27FDA8u;
    {
        const bool branch_taken_0x27fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fda8) {
            ctx->pc = 0x27FDC8u;
            goto label_27fdc8;
        }
    }
    ctx->pc = 0x27FDB0u;
label_27fdb0:
    // 0x27fdb0: 0x12000097  beqz        $s0, . + 4 + (0x97 << 2)
label_27fdb4:
    if (ctx->pc == 0x27FDB4u) {
        ctx->pc = 0x27FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDB0u;
        // 0x27fdb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDB8u;
        goto label_27fdb8;
    }
    ctx->pc = 0x27FDB0u;
    {
        const bool branch_taken_0x27fdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDB0u;
        // 0x27fdb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdb0) {
            ctx->pc = 0x280010u;
            goto label_280010;
        }
    }
    ctx->pc = 0x27FDB8u;
label_27fdb8:
    // 0x27fdb8: 0xc08ab74  jal         func_22ADD0
label_27fdbc:
    if (ctx->pc == 0x27FDBCu) {
        ctx->pc = 0x27FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDB8u;
        // 0x27fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDC0u;
        goto label_27fdc0;
    }
    ctx->pc = 0x27FDB8u;
    SET_GPR_U32(ctx, 31, 0x27FDC0u);
    ctx->pc = 0x27FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDB8u;
    // 0x27fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x27FDB8u, 0x27FDC0u)) {
        return;
    }
    ctx->pc = 0x27FDC0u;
label_27fdc0:
    // 0x27fdc0: 0x10000093  b           . + 4 + (0x93 << 2)
label_27fdc4:
    if (ctx->pc == 0x27FDC4u) {
        ctx->pc = 0x27FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDC0u;
        // 0x27fdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDC8u;
        goto label_27fdc8;
    }
    ctx->pc = 0x27FDC0u;
    {
        const bool branch_taken_0x27fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDC0u;
        // 0x27fdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdc0) {
            ctx->pc = 0x280010u;
            goto label_280010;
        }
    }
    ctx->pc = 0x27FDC8u;
label_27fdc8:
    // 0x27fdc8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_27fdcc:
    if (ctx->pc == 0x27FDCCu) {
        ctx->pc = 0x27FDD0u;
        goto label_27fdd0;
    }
    ctx->pc = 0x27FDC8u;
    {
        const bool branch_taken_0x27fdc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fdc8) {
            ctx->pc = 0x27FDF8u;
            goto label_27fdf8;
        }
    }
    ctx->pc = 0x27FDD0u;
label_27fdd0:
    // 0x27fdd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fdd4:
    // 0x27fdd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27fdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27fdd8:
    // 0x27fdd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27fddc:
    // 0x27fddc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x27fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27fde0:
    // 0x27fde0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27fde0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27fde4:
    // 0x27fde4: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x27fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_27fde8:
    // 0x27fde8: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x27fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_27fdec:
    // 0x27fdec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27fdecu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_27fdf0:
    // 0x27fdf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_27fdf4:
    if (ctx->pc == 0x27FDF4u) {
        ctx->pc = 0x27FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDF0u;
        // 0x27fdf4: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FDF8u;
        goto label_27fdf8;
    }
    ctx->pc = 0x27FDF0u;
    {
        const bool branch_taken_0x27fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDF0u;
        // 0x27fdf4: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdf0) {
            ctx->pc = 0x27FE20u;
            goto label_27fe20;
        }
    }
    ctx->pc = 0x27FDF8u;
label_27fdf8:
    // 0x27fdf8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_27fdfc:
    if (ctx->pc == 0x27FDFCu) {
        ctx->pc = 0x27FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDF8u;
        // 0x27fdfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE00u;
        goto label_27fe00;
    }
    ctx->pc = 0x27FDF8u;
    {
        const bool branch_taken_0x27fdf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDF8u;
        // 0x27fdfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdf8) {
            ctx->pc = 0x27FE18u;
            goto label_27fe18;
        }
    }
    ctx->pc = 0x27FE00u;
label_27fe00:
    // 0x27fe00: 0xc0a0216  jal         func_280858
label_27fe04:
    if (ctx->pc == 0x27FE04u) {
        ctx->pc = 0x27FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE00u;
        // 0x27fe04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE08u;
        goto label_27fe08;
    }
    ctx->pc = 0x27FE00u;
    SET_GPR_U32(ctx, 31, 0x27FE08u);
    ctx->pc = 0x27FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE00u;
    // 0x27fe04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280858u, 0x27FE00u, 0x27FE08u)) {
        return;
    }
    ctx->pc = 0x27FE08u;
label_27fe08:
    // 0x27fe08: 0xc08ab74  jal         func_22ADD0
label_27fe0c:
    if (ctx->pc == 0x27FE0Cu) {
        ctx->pc = 0x27FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE08u;
        // 0x27fe0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE10u;
        goto label_27fe10;
    }
    ctx->pc = 0x27FE08u;
    SET_GPR_U32(ctx, 31, 0x27FE10u);
    ctx->pc = 0x27FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE08u;
    // 0x27fe0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x27FE08u, 0x27FE10u)) {
        return;
    }
    ctx->pc = 0x27FE10u;
label_27fe10:
    // 0x27fe10: 0x10000004  b           . + 4 + (0x4 << 2)
label_27fe14:
    if (ctx->pc == 0x27FE14u) {
        ctx->pc = 0x27FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE10u;
        // 0x27fe14: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE18u;
        goto label_27fe18;
    }
    ctx->pc = 0x27FE10u;
    {
        const bool branch_taken_0x27fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE10u;
        // 0x27fe14: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe10) {
            ctx->pc = 0x27FE24u;
            goto label_27fe24;
        }
    }
    ctx->pc = 0x27FE18u;
label_27fe18:
    // 0x27fe18: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x27fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_27fe1c:
    // 0x27fe1c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x27fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_27fe20:
    // 0x27fe20: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27fe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27fe24:
    // 0x27fe24: 0xc0a02fc  jal         func_280BF0
label_27fe28:
    if (ctx->pc == 0x27FE28u) {
        ctx->pc = 0x27FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE24u;
        // 0x27fe28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE2Cu;
        goto label_27fe2c;
    }
    ctx->pc = 0x27FE24u;
    SET_GPR_U32(ctx, 31, 0x27FE2Cu);
    ctx->pc = 0x27FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE24u;
    // 0x27fe28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280BF0u, 0x27FE24u, 0x27FE2Cu)) {
        return;
    }
    ctx->pc = 0x27FE2Cu;
label_27fe2c:
    // 0x27fe2c: 0x10000073  b           . + 4 + (0x73 << 2)
label_27fe30:
    if (ctx->pc == 0x27FE30u) {
        ctx->pc = 0x27FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE2Cu;
        // 0x27fe30: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE34u;
        goto label_27fe34;
    }
    ctx->pc = 0x27FE2Cu;
    {
        const bool branch_taken_0x27fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE2Cu;
        // 0x27fe30: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe2c) {
            ctx->pc = 0x27FFFCu;
            goto label_27fffc;
        }
    }
    ctx->pc = 0x27FE34u;
label_27fe34:
    // 0x27fe34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27fe34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fe38:
    // 0x27fe38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fe3c:
    // 0x27fe3c: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x27fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_27fe40:
    // 0x27fe40: 0xc0927aa  jal         func_249EA8
label_27fe44:
    if (ctx->pc == 0x27FE44u) {
        ctx->pc = 0x27FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE40u;
        // 0x27fe44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE48u;
        goto label_27fe48;
    }
    ctx->pc = 0x27FE40u;
    SET_GPR_U32(ctx, 31, 0x27FE48u);
    ctx->pc = 0x27FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE40u;
    // 0x27fe44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x27FE40u, 0x27FE48u)) {
        return;
    }
    ctx->pc = 0x27FE48u;
label_27fe48:
    // 0x27fe48: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_27fe4c:
    if (ctx->pc == 0x27FE4Cu) {
        ctx->pc = 0x27FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE48u;
        // 0x27fe4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE50u;
        goto label_27fe50;
    }
    ctx->pc = 0x27FE48u;
    {
        const bool branch_taken_0x27fe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE48u;
        // 0x27fe4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe48) {
            ctx->pc = 0x27FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FE50u;
label_27fe50:
    // 0x27fe50: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x27fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_27fe54:
    // 0x27fe54: 0xc0927be  jal         func_249EF8
label_27fe58:
    if (ctx->pc == 0x27FE58u) {
        ctx->pc = 0x27FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE54u;
        // 0x27fe58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE5Cu;
        goto label_27fe5c;
    }
    ctx->pc = 0x27FE54u;
    SET_GPR_U32(ctx, 31, 0x27FE5Cu);
    ctx->pc = 0x27FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE54u;
    // 0x27fe58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FE54u, 0x27FE5Cu)) {
        return;
    }
    ctx->pc = 0x27FE5Cu;
label_27fe5c:
    // 0x27fe5c: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
label_27fe60:
    if (ctx->pc == 0x27FE60u) {
        ctx->pc = 0x27FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE5Cu;
        // 0x27fe60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE64u;
        goto label_27fe64;
    }
    ctx->pc = 0x27FE5Cu;
    {
        const bool branch_taken_0x27fe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE5Cu;
        // 0x27fe60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe5c) {
            ctx->pc = 0x27FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FE64u;
label_27fe64:
    // 0x27fe64: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x27fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_27fe68:
    // 0x27fe68: 0xc0927be  jal         func_249EF8
label_27fe6c:
    if (ctx->pc == 0x27FE6Cu) {
        ctx->pc = 0x27FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE68u;
        // 0x27fe6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE70u;
        goto label_27fe70;
    }
    ctx->pc = 0x27FE68u;
    SET_GPR_U32(ctx, 31, 0x27FE70u);
    ctx->pc = 0x27FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE68u;
    // 0x27fe6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FE68u, 0x27FE70u)) {
        return;
    }
    ctx->pc = 0x27FE70u;
label_27fe70:
    // 0x27fe70: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27fe74:
    if (ctx->pc == 0x27FE74u) {
        ctx->pc = 0x27FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE70u;
        // 0x27fe74: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE78u;
        goto label_27fe78;
    }
    ctx->pc = 0x27FE70u;
    {
        const bool branch_taken_0x27fe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE70u;
        // 0x27fe74: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe70) {
            ctx->pc = 0x27FEDCu;
            goto label_27fedc;
        }
    }
    ctx->pc = 0x27FE78u;
label_27fe78:
    // 0x27fe78: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27fe7c:
    if (ctx->pc == 0x27FE7Cu) {
        ctx->pc = 0x27FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE78u;
        // 0x27fe7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE80u;
        goto label_27fe80;
    }
    ctx->pc = 0x27FE78u;
    {
        const bool branch_taken_0x27fe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE78u;
        // 0x27fe7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe78) {
            ctx->pc = 0x27FEE4u;
            goto label_27fee4;
        }
    }
    ctx->pc = 0x27FE80u;
label_27fe80:
    // 0x27fe80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27fe84:
    // 0x27fe84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fe88:
    // 0x27fe88: 0xc09270a  jal         func_249C28
label_27fe8c:
    if (ctx->pc == 0x27FE8Cu) {
        ctx->pc = 0x27FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE88u;
        // 0x27fe8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE90u;
        goto label_27fe90;
    }
    ctx->pc = 0x27FE88u;
    SET_GPR_U32(ctx, 31, 0x27FE90u);
    ctx->pc = 0x27FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE88u;
    // 0x27fe8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x27FE88u, 0x27FE90u)) {
        return;
    }
    ctx->pc = 0x27FE90u;
label_27fe90:
    // 0x27fe90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27fe94:
    if (ctx->pc == 0x27FE94u) {
        ctx->pc = 0x27FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE90u;
        // 0x27fe94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE98u;
        goto label_27fe98;
    }
    ctx->pc = 0x27FE90u;
    {
        const bool branch_taken_0x27fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE90u;
        // 0x27fe94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe90) {
            ctx->pc = 0x27FEE8u;
            goto label_27fee8;
        }
    }
    ctx->pc = 0x27FE98u;
label_27fe98:
    // 0x27fe98: 0xc092836  jal         func_24A0D8
label_27fe9c:
    if (ctx->pc == 0x27FE9Cu) {
        ctx->pc = 0x27FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE98u;
        // 0x27fe9c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEA0u;
        goto label_27fea0;
    }
    ctx->pc = 0x27FE98u;
    SET_GPR_U32(ctx, 31, 0x27FEA0u);
    ctx->pc = 0x27FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE98u;
    // 0x27fe9c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FE98u, 0x27FEA0u)) {
        return;
    }
    ctx->pc = 0x27FEA0u;
label_27fea0:
    // 0x27fea0: 0xc088cf4  jal         func_2233D0
label_27fea4:
    if (ctx->pc == 0x27FEA4u) {
        ctx->pc = 0x27FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEA0u;
        // 0x27fea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEA8u;
        goto label_27fea8;
    }
    ctx->pc = 0x27FEA0u;
    SET_GPR_U32(ctx, 31, 0x27FEA8u);
    ctx->pc = 0x27FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEA0u;
    // 0x27fea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2233D0u, 0x27FEA0u, 0x27FEA8u)) {
        return;
    }
    ctx->pc = 0x27FEA8u;
label_27fea8:
    // 0x27fea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27feac:
    // 0x27feac: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_27feb0:
    if (ctx->pc == 0x27FEB0u) {
        ctx->pc = 0x27FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEACu;
        // 0x27feb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEB4u;
        goto label_27feb4;
    }
    ctx->pc = 0x27FEACu;
    {
        const bool branch_taken_0x27feac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEACu;
        // 0x27feb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27feac) {
            ctx->pc = 0x27FEE8u;
            goto label_27fee8;
        }
    }
    ctx->pc = 0x27FEB4u;
label_27feb4:
    // 0x27feb4: 0xc092836  jal         func_24A0D8
label_27feb8:
    if (ctx->pc == 0x27FEB8u) {
        ctx->pc = 0x27FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEB4u;
        // 0x27feb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEBCu;
        goto label_27febc;
    }
    ctx->pc = 0x27FEB4u;
    SET_GPR_U32(ctx, 31, 0x27FEBCu);
    ctx->pc = 0x27FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEB4u;
    // 0x27feb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FEB4u, 0x27FEBCu)) {
        return;
    }
    ctx->pc = 0x27FEBCu;
label_27febc:
    // 0x27febc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x27febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_27fec0:
    // 0x27fec0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27fec4:
    // 0x27fec4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27fec8:
    if (ctx->pc == 0x27FEC8u) {
        ctx->pc = 0x27FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEC4u;
        // 0x27fec8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FECCu;
        goto label_27fecc;
    }
    ctx->pc = 0x27FEC4u;
    {
        const bool branch_taken_0x27fec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEC4u;
        // 0x27fec8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fec4) {
            ctx->pc = 0x27FEE4u;
            goto label_27fee4;
        }
    }
    ctx->pc = 0x27FECCu;
label_27fecc:
    // 0x27fecc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_27fed0:
    if (ctx->pc == 0x27FED0u) {
        ctx->pc = 0x27FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FECCu;
        // 0x27fed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FED4u;
        goto label_27fed4;
    }
    ctx->pc = 0x27FECCu;
    {
        const bool branch_taken_0x27fecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FECCu;
        // 0x27fed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fecc) {
            ctx->pc = 0x27FEE8u;
            goto label_27fee8;
        }
    }
    ctx->pc = 0x27FED4u;
label_27fed4:
    // 0x27fed4: 0xc09281a  jal         func_24A068
label_27fed8:
    if (ctx->pc == 0x27FED8u) {
        ctx->pc = 0x27FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FED4u;
        // 0x27fed8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEDCu;
        goto label_27fedc;
    }
    ctx->pc = 0x27FED4u;
    SET_GPR_U32(ctx, 31, 0x27FEDCu);
    ctx->pc = 0x27FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FED4u;
    // 0x27fed8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27FED4u, 0x27FEDCu)) {
        return;
    }
    ctx->pc = 0x27FEDCu;
label_27fedc:
    // 0x27fedc: 0x10000002  b           . + 4 + (0x2 << 2)
label_27fee0:
    if (ctx->pc == 0x27FEE0u) {
        ctx->pc = 0x27FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEDCu;
        // 0x27fee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEE4u;
        goto label_27fee4;
    }
    ctx->pc = 0x27FEDCu;
    {
        const bool branch_taken_0x27fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEDCu;
        // 0x27fee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fedc) {
            ctx->pc = 0x27FEE8u;
            goto label_27fee8;
        }
    }
    ctx->pc = 0x27FEE4u;
label_27fee4:
    // 0x27fee4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27fee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fee8:
    // 0x27fee8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_27feec:
    if (ctx->pc == 0x27FEECu) {
        ctx->pc = 0x27FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEE8u;
        // 0x27feec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEF0u;
        goto label_27fef0;
    }
    ctx->pc = 0x27FEE8u;
    {
        const bool branch_taken_0x27fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEE8u;
        // 0x27feec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fee8) {
            ctx->pc = 0x280010u;
            goto label_280010;
        }
    }
    ctx->pc = 0x27FEF0u;
label_27fef0:
    // 0x27fef0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_27fef4:
    if (ctx->pc == 0x27FEF4u) {
        ctx->pc = 0x27FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEF0u;
        // 0x27fef4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FEF8u;
        goto label_27fef8;
    }
    ctx->pc = 0x27FEF0u;
    {
        const bool branch_taken_0x27fef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEF0u;
        // 0x27fef4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fef0) {
            ctx->pc = 0x27FF08u;
            goto label_27ff08;
        }
    }
    ctx->pc = 0x27FEF8u;
label_27fef8:
    // 0x27fef8: 0xc0a0338  jal         func_280CE0
label_27fefc:
    if (ctx->pc == 0x27FEFCu) {
        ctx->pc = 0x27FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEF8u;
        // 0x27fefc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF00u;
        goto label_27ff00;
    }
    ctx->pc = 0x27FEF8u;
    SET_GPR_U32(ctx, 31, 0x27FF00u);
    ctx->pc = 0x27FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEF8u;
    // 0x27fefc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280CE0u, 0x27FEF8u, 0x27FF00u)) {
        return;
    }
    ctx->pc = 0x27FF00u;
label_27ff00:
    // 0x27ff00: 0xc08ab74  jal         func_22ADD0
label_27ff04:
    if (ctx->pc == 0x27FF04u) {
        ctx->pc = 0x27FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF00u;
        // 0x27ff04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF08u;
        goto label_27ff08;
    }
    ctx->pc = 0x27FF00u;
    SET_GPR_U32(ctx, 31, 0x27FF08u);
    ctx->pc = 0x27FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF00u;
    // 0x27ff04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x27FF00u, 0x27FF08u)) {
        return;
    }
    ctx->pc = 0x27FF08u;
label_27ff08:
    // 0x27ff08: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x27ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27ff0c:
    // 0x27ff0c: 0xc0a0392  jal         func_280E48
label_27ff10:
    if (ctx->pc == 0x27FF10u) {
        ctx->pc = 0x27FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF0Cu;
        // 0x27ff10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF14u;
        goto label_27ff14;
    }
    ctx->pc = 0x27FF0Cu;
    SET_GPR_U32(ctx, 31, 0x27FF14u);
    ctx->pc = 0x27FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF0Cu;
    // 0x27ff10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280E48u, 0x27FF0Cu, 0x27FF14u)) {
        return;
    }
    ctx->pc = 0x27FF14u;
label_27ff14:
    // 0x27ff14: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_27ff18:
    // 0x27ff18: 0xc0a0376  jal         func_280DD8
label_27ff1c:
    if (ctx->pc == 0x27FF1Cu) {
        ctx->pc = 0x27FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF18u;
        // 0x27ff1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF20u;
        goto label_27ff20;
    }
    ctx->pc = 0x27FF18u;
    SET_GPR_U32(ctx, 31, 0x27FF20u);
    ctx->pc = 0x27FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF18u;
    // 0x27ff1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280DD8u, 0x27FF18u, 0x27FF20u)) {
        return;
    }
    ctx->pc = 0x27FF20u;
label_27ff20:
    // 0x27ff20: 0x10000036  b           . + 4 + (0x36 << 2)
label_27ff24:
    if (ctx->pc == 0x27FF24u) {
        ctx->pc = 0x27FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF20u;
        // 0x27ff24: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF28u;
        goto label_27ff28;
    }
    ctx->pc = 0x27FF20u;
    {
        const bool branch_taken_0x27ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF20u;
        // 0x27ff24: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff20) {
            ctx->pc = 0x27FFFCu;
            goto label_27fffc;
        }
    }
    ctx->pc = 0x27FF28u;
label_27ff28:
    // 0x27ff28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27ff28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ff2c:
    // 0x27ff2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ff30:
    // 0x27ff30: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27ff34:
    // 0x27ff34: 0xc0927be  jal         func_249EF8
label_27ff38:
    if (ctx->pc == 0x27FF38u) {
        ctx->pc = 0x27FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF34u;
        // 0x27ff38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF3Cu;
        goto label_27ff3c;
    }
    ctx->pc = 0x27FF34u;
    SET_GPR_U32(ctx, 31, 0x27FF3Cu);
    ctx->pc = 0x27FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF34u;
    // 0x27ff38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FF34u, 0x27FF3Cu)) {
        return;
    }
    ctx->pc = 0x27FF3Cu;
label_27ff3c:
    // 0x27ff3c: 0x1040ffa0  beqz        $v0, . + 4 + (-0x60 << 2)
label_27ff40:
    if (ctx->pc == 0x27FF40u) {
        ctx->pc = 0x27FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF3Cu;
        // 0x27ff40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF44u;
        goto label_27ff44;
    }
    ctx->pc = 0x27FF3Cu;
    {
        const bool branch_taken_0x27ff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF3Cu;
        // 0x27ff40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff3c) {
            ctx->pc = 0x27FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fdc0;
        }
    }
    ctx->pc = 0x27FF44u;
label_27ff44:
    // 0x27ff44: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x27ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27ff48:
    // 0x27ff48: 0xc0927be  jal         func_249EF8
label_27ff4c:
    if (ctx->pc == 0x27FF4Cu) {
        ctx->pc = 0x27FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF48u;
        // 0x27ff4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF50u;
        goto label_27ff50;
    }
    ctx->pc = 0x27FF48u;
    SET_GPR_U32(ctx, 31, 0x27FF50u);
    ctx->pc = 0x27FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF48u;
    // 0x27ff4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27FF48u, 0x27FF50u)) {
        return;
    }
    ctx->pc = 0x27FF50u;
label_27ff50:
    // 0x27ff50: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27ff54:
    if (ctx->pc == 0x27FF54u) {
        ctx->pc = 0x27FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF50u;
        // 0x27ff54: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF58u;
        goto label_27ff58;
    }
    ctx->pc = 0x27FF50u;
    {
        const bool branch_taken_0x27ff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF50u;
        // 0x27ff54: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff50) {
            ctx->pc = 0x27FFBCu;
            goto label_27ffbc;
        }
    }
    ctx->pc = 0x27FF58u;
label_27ff58:
    // 0x27ff58: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_27ff5c:
    if (ctx->pc == 0x27FF5Cu) {
        ctx->pc = 0x27FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF58u;
        // 0x27ff5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF60u;
        goto label_27ff60;
    }
    ctx->pc = 0x27FF58u;
    {
        const bool branch_taken_0x27ff58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF58u;
        // 0x27ff5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff58) {
            ctx->pc = 0x27FFC4u;
            goto label_27ffc4;
        }
    }
    ctx->pc = 0x27FF60u;
label_27ff60:
    // 0x27ff60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27ff64:
    // 0x27ff64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27ff64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ff68:
    // 0x27ff68: 0xc09270a  jal         func_249C28
label_27ff6c:
    if (ctx->pc == 0x27FF6Cu) {
        ctx->pc = 0x27FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF68u;
        // 0x27ff6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF70u;
        goto label_27ff70;
    }
    ctx->pc = 0x27FF68u;
    SET_GPR_U32(ctx, 31, 0x27FF70u);
    ctx->pc = 0x27FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF68u;
    // 0x27ff6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x27FF68u, 0x27FF70u)) {
        return;
    }
    ctx->pc = 0x27FF70u;
label_27ff70:
    // 0x27ff70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27ff74:
    if (ctx->pc == 0x27FF74u) {
        ctx->pc = 0x27FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF70u;
        // 0x27ff74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF78u;
        goto label_27ff78;
    }
    ctx->pc = 0x27FF70u;
    {
        const bool branch_taken_0x27ff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF70u;
        // 0x27ff74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff70) {
            ctx->pc = 0x27FFC8u;
            goto label_27ffc8;
        }
    }
    ctx->pc = 0x27FF78u;
label_27ff78:
    // 0x27ff78: 0xc092836  jal         func_24A0D8
label_27ff7c:
    if (ctx->pc == 0x27FF7Cu) {
        ctx->pc = 0x27FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF78u;
        // 0x27ff7c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF80u;
        goto label_27ff80;
    }
    ctx->pc = 0x27FF78u;
    SET_GPR_U32(ctx, 31, 0x27FF80u);
    ctx->pc = 0x27FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF78u;
    // 0x27ff7c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FF78u, 0x27FF80u)) {
        return;
    }
    ctx->pc = 0x27FF80u;
label_27ff80:
    // 0x27ff80: 0xc088cf4  jal         func_2233D0
label_27ff84:
    if (ctx->pc == 0x27FF84u) {
        ctx->pc = 0x27FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF80u;
        // 0x27ff84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF88u;
        goto label_27ff88;
    }
    ctx->pc = 0x27FF80u;
    SET_GPR_U32(ctx, 31, 0x27FF88u);
    ctx->pc = 0x27FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF80u;
    // 0x27ff84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2233D0u, 0x27FF80u, 0x27FF88u)) {
        return;
    }
    ctx->pc = 0x27FF88u;
label_27ff88:
    // 0x27ff88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ff88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ff8c:
    // 0x27ff8c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_27ff90:
    if (ctx->pc == 0x27FF90u) {
        ctx->pc = 0x27FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF8Cu;
        // 0x27ff90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF94u;
        goto label_27ff94;
    }
    ctx->pc = 0x27FF8Cu;
    {
        const bool branch_taken_0x27ff8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF8Cu;
        // 0x27ff90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff8c) {
            ctx->pc = 0x27FFC8u;
            goto label_27ffc8;
        }
    }
    ctx->pc = 0x27FF94u;
label_27ff94:
    // 0x27ff94: 0xc092836  jal         func_24A0D8
label_27ff98:
    if (ctx->pc == 0x27FF98u) {
        ctx->pc = 0x27FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF94u;
        // 0x27ff98: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF9Cu;
        goto label_27ff9c;
    }
    ctx->pc = 0x27FF94u;
    SET_GPR_U32(ctx, 31, 0x27FF9Cu);
    ctx->pc = 0x27FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF94u;
    // 0x27ff98: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A0D8u, 0x27FF94u, 0x27FF9Cu)) {
        return;
    }
    ctx->pc = 0x27FF9Cu;
label_27ff9c:
    // 0x27ff9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x27ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_27ffa0:
    // 0x27ffa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27ffa4:
    // 0x27ffa4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27ffa8:
    if (ctx->pc == 0x27FFA8u) {
        ctx->pc = 0x27FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFA4u;
        // 0x27ffa8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFACu;
        goto label_27ffac;
    }
    ctx->pc = 0x27FFA4u;
    {
        const bool branch_taken_0x27ffa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFA4u;
        // 0x27ffa8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffa4) {
            ctx->pc = 0x27FFC4u;
            goto label_27ffc4;
        }
    }
    ctx->pc = 0x27FFACu;
label_27ffac:
    // 0x27ffac: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_27ffb0:
    if (ctx->pc == 0x27FFB0u) {
        ctx->pc = 0x27FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFACu;
        // 0x27ffb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFB4u;
        goto label_27ffb4;
    }
    ctx->pc = 0x27FFACu;
    {
        const bool branch_taken_0x27ffac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFACu;
        // 0x27ffb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffac) {
            ctx->pc = 0x27FFC8u;
            goto label_27ffc8;
        }
    }
    ctx->pc = 0x27FFB4u;
label_27ffb4:
    // 0x27ffb4: 0xc09281a  jal         func_24A068
label_27ffb8:
    if (ctx->pc == 0x27FFB8u) {
        ctx->pc = 0x27FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFB4u;
        // 0x27ffb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFBCu;
        goto label_27ffbc;
    }
    ctx->pc = 0x27FFB4u;
    SET_GPR_U32(ctx, 31, 0x27FFBCu);
    ctx->pc = 0x27FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFB4u;
    // 0x27ffb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27FFB4u, 0x27FFBCu)) {
        return;
    }
    ctx->pc = 0x27FFBCu;
label_27ffbc:
    // 0x27ffbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_27ffc0:
    if (ctx->pc == 0x27FFC0u) {
        ctx->pc = 0x27FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFBCu;
        // 0x27ffc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFC4u;
        goto label_27ffc4;
    }
    ctx->pc = 0x27FFBCu;
    {
        const bool branch_taken_0x27ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFBCu;
        // 0x27ffc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffbc) {
            ctx->pc = 0x27FFC8u;
            goto label_27ffc8;
        }
    }
    ctx->pc = 0x27FFC4u;
label_27ffc4:
    // 0x27ffc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27ffc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ffc8:
    // 0x27ffc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_27ffcc:
    if (ctx->pc == 0x27FFCCu) {
        ctx->pc = 0x27FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFC8u;
        // 0x27ffcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFD0u;
        goto label_27ffd0;
    }
    ctx->pc = 0x27FFC8u;
    {
        const bool branch_taken_0x27ffc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFC8u;
        // 0x27ffcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffc8) {
            ctx->pc = 0x280010u;
            goto label_280010;
        }
    }
    ctx->pc = 0x27FFD0u;
label_27ffd0:
    // 0x27ffd0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_27ffd4:
    if (ctx->pc == 0x27FFD4u) {
        ctx->pc = 0x27FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFD0u;
        // 0x27ffd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFD8u;
        goto label_27ffd8;
    }
    ctx->pc = 0x27FFD0u;
    {
        const bool branch_taken_0x27ffd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFD0u;
        // 0x27ffd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffd0) {
            ctx->pc = 0x27FFE8u;
            goto label_27ffe8;
        }
    }
    ctx->pc = 0x27FFD8u;
label_27ffd8:
    // 0x27ffd8: 0xc0a03ee  jal         func_280FB8
label_27ffdc:
    if (ctx->pc == 0x27FFDCu) {
        ctx->pc = 0x27FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFD8u;
        // 0x27ffdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFE0u;
        goto label_27ffe0;
    }
    ctx->pc = 0x27FFD8u;
    SET_GPR_U32(ctx, 31, 0x27FFE0u);
    ctx->pc = 0x27FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFD8u;
    // 0x27ffdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280FB8u, 0x27FFD8u, 0x27FFE0u)) {
        return;
    }
    ctx->pc = 0x27FFE0u;
label_27ffe0:
    // 0x27ffe0: 0xc08ab74  jal         func_22ADD0
label_27ffe4:
    if (ctx->pc == 0x27FFE4u) {
        ctx->pc = 0x27FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFE0u;
        // 0x27ffe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFE8u;
        goto label_27ffe8;
    }
    ctx->pc = 0x27FFE0u;
    SET_GPR_U32(ctx, 31, 0x27FFE8u);
    ctx->pc = 0x27FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE0u;
    // 0x27ffe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x27FFE0u, 0x27FFE8u)) {
        return;
    }
    ctx->pc = 0x27FFE8u;
label_27ffe8:
    // 0x27ffe8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27ffec:
    // 0x27ffec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27ffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27fff0:
    // 0x27fff0: 0xc0a041e  jal         func_281078
label_27fff4:
    if (ctx->pc == 0x27FFF4u) {
        ctx->pc = 0x27FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFF0u;
        // 0x27fff4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFF8u;
        goto label_27fff8;
    }
    ctx->pc = 0x27FFF0u;
    SET_GPR_U32(ctx, 31, 0x27FFF8u);
    ctx->pc = 0x27FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFF0u;
    // 0x27fff4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281078u, 0x27FFF0u, 0x27FFF8u)) {
        return;
    }
    ctx->pc = 0x27FFF8u;
label_27fff8:
    // 0x27fff8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x27fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_27fffc:
    // 0x27fffc: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x27fffcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_280000:
    // 0x280000: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x280000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_280004:
    // 0x280004: 0x1460ff0a  bnez        $v1, . + 4 + (-0xF6 << 2)
label_280008:
    if (ctx->pc == 0x280008u) {
        ctx->pc = 0x280008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280004u;
        // 0x280008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28000Cu;
        goto label_28000c;
    }
    ctx->pc = 0x280004u;
    {
        const bool branch_taken_0x280004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280004u;
        // 0x280008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280004) {
            ctx->pc = 0x27FC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fc30;
        }
    }
    ctx->pc = 0x28000Cu;
label_28000c:
    // 0x28000c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28000cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280010:
    // 0x280010: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x280010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_280014:
    // 0x280014: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x280014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_280018:
    // 0x280018: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x280018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28001c:
    // 0x28001c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x28001cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_280020:
    // 0x280020: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x280020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_280024:
    // 0x280024: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x280024u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_280028:
    // 0x280028: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x280028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28002c:
    // 0x28002c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x28002cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_280030:
    // 0x280030: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x280030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_280034:
    // 0x280034: 0x3e00008  jr          $ra
label_280038:
    if (ctx->pc == 0x280038u) {
        ctx->pc = 0x280038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280034u;
        // 0x280038: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28003Cu;
        goto label_28003c;
    }
    ctx->pc = 0x280034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280034u;
        // 0x280038: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28003Cu;
label_28003c:
    // 0x28003c: 0x0  nop
    ctx->pc = 0x28003cu;
    // NOP
    ctx->pc = 0x280040u;
}
