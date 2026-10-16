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

// Function: sub_001BA830
// Address: 0x1ba830 - 0x1bad68
void sub_001BA830_0x1ba830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA830_0x1ba830");
#endif

    switch (ctx->pc) {
        case 0x1ba830u: goto label_1ba830;
        case 0x1ba834u: goto label_1ba834;
        case 0x1ba838u: goto label_1ba838;
        case 0x1ba83cu: goto label_1ba83c;
        case 0x1ba840u: goto label_1ba840;
        case 0x1ba844u: goto label_1ba844;
        case 0x1ba848u: goto label_1ba848;
        case 0x1ba84cu: goto label_1ba84c;
        case 0x1ba850u: goto label_1ba850;
        case 0x1ba854u: goto label_1ba854;
        case 0x1ba858u: goto label_1ba858;
        case 0x1ba85cu: goto label_1ba85c;
        case 0x1ba860u: goto label_1ba860;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba86cu: goto label_1ba86c;
        case 0x1ba870u: goto label_1ba870;
        case 0x1ba874u: goto label_1ba874;
        case 0x1ba878u: goto label_1ba878;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba880u: goto label_1ba880;
        case 0x1ba884u: goto label_1ba884;
        case 0x1ba888u: goto label_1ba888;
        case 0x1ba88cu: goto label_1ba88c;
        case 0x1ba890u: goto label_1ba890;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba898u: goto label_1ba898;
        case 0x1ba89cu: goto label_1ba89c;
        case 0x1ba8a0u: goto label_1ba8a0;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8a8u: goto label_1ba8a8;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b0u: goto label_1ba8b0;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8b8u: goto label_1ba8b8;
        case 0x1ba8bcu: goto label_1ba8bc;
        case 0x1ba8c0u: goto label_1ba8c0;
        case 0x1ba8c4u: goto label_1ba8c4;
        case 0x1ba8c8u: goto label_1ba8c8;
        case 0x1ba8ccu: goto label_1ba8cc;
        case 0x1ba8d0u: goto label_1ba8d0;
        case 0x1ba8d4u: goto label_1ba8d4;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8dcu: goto label_1ba8dc;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8ecu: goto label_1ba8ec;
        case 0x1ba8f0u: goto label_1ba8f0;
        case 0x1ba8f4u: goto label_1ba8f4;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba904u: goto label_1ba904;
        case 0x1ba908u: goto label_1ba908;
        case 0x1ba90cu: goto label_1ba90c;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba914u: goto label_1ba914;
        case 0x1ba918u: goto label_1ba918;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba928u: goto label_1ba928;
        case 0x1ba92cu: goto label_1ba92c;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba944u: goto label_1ba944;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba94cu: goto label_1ba94c;
        case 0x1ba950u: goto label_1ba950;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba958u: goto label_1ba958;
        case 0x1ba95cu: goto label_1ba95c;
        case 0x1ba960u: goto label_1ba960;
        case 0x1ba964u: goto label_1ba964;
        case 0x1ba968u: goto label_1ba968;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba970u: goto label_1ba970;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba97cu: goto label_1ba97c;
        case 0x1ba980u: goto label_1ba980;
        case 0x1ba984u: goto label_1ba984;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba98cu: goto label_1ba98c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba994u: goto label_1ba994;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba99cu: goto label_1ba99c;
        case 0x1ba9a0u: goto label_1ba9a0;
        case 0x1ba9a4u: goto label_1ba9a4;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9acu: goto label_1ba9ac;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9c0u: goto label_1ba9c0;
        case 0x1ba9c4u: goto label_1ba9c4;
        case 0x1ba9c8u: goto label_1ba9c8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9d0u: goto label_1ba9d0;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e0u: goto label_1ba9e0;
        case 0x1ba9e4u: goto label_1ba9e4;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1ba9f0u: goto label_1ba9f0;
        case 0x1ba9f4u: goto label_1ba9f4;
        case 0x1ba9f8u: goto label_1ba9f8;
        case 0x1ba9fcu: goto label_1ba9fc;
        case 0x1baa00u: goto label_1baa00;
        case 0x1baa04u: goto label_1baa04;
        case 0x1baa08u: goto label_1baa08;
        case 0x1baa0cu: goto label_1baa0c;
        case 0x1baa10u: goto label_1baa10;
        case 0x1baa14u: goto label_1baa14;
        case 0x1baa18u: goto label_1baa18;
        case 0x1baa1cu: goto label_1baa1c;
        case 0x1baa20u: goto label_1baa20;
        case 0x1baa24u: goto label_1baa24;
        case 0x1baa28u: goto label_1baa28;
        case 0x1baa2cu: goto label_1baa2c;
        case 0x1baa30u: goto label_1baa30;
        case 0x1baa34u: goto label_1baa34;
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa3cu: goto label_1baa3c;
        case 0x1baa40u: goto label_1baa40;
        case 0x1baa44u: goto label_1baa44;
        case 0x1baa48u: goto label_1baa48;
        case 0x1baa4cu: goto label_1baa4c;
        case 0x1baa50u: goto label_1baa50;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa58u: goto label_1baa58;
        case 0x1baa5cu: goto label_1baa5c;
        case 0x1baa60u: goto label_1baa60;
        case 0x1baa64u: goto label_1baa64;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa6cu: goto label_1baa6c;
        case 0x1baa70u: goto label_1baa70;
        case 0x1baa74u: goto label_1baa74;
        case 0x1baa78u: goto label_1baa78;
        case 0x1baa7cu: goto label_1baa7c;
        case 0x1baa80u: goto label_1baa80;
        case 0x1baa84u: goto label_1baa84;
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa8cu: goto label_1baa8c;
        case 0x1baa90u: goto label_1baa90;
        case 0x1baa94u: goto label_1baa94;
        case 0x1baa98u: goto label_1baa98;
        case 0x1baa9cu: goto label_1baa9c;
        case 0x1baaa0u: goto label_1baaa0;
        case 0x1baaa4u: goto label_1baaa4;
        case 0x1baaa8u: goto label_1baaa8;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baab0u: goto label_1baab0;
        case 0x1baab4u: goto label_1baab4;
        case 0x1baab8u: goto label_1baab8;
        case 0x1baabcu: goto label_1baabc;
        case 0x1baac0u: goto label_1baac0;
        case 0x1baac4u: goto label_1baac4;
        case 0x1baac8u: goto label_1baac8;
        case 0x1baaccu: goto label_1baacc;
        case 0x1baad0u: goto label_1baad0;
        case 0x1baad4u: goto label_1baad4;
        case 0x1baad8u: goto label_1baad8;
        case 0x1baadcu: goto label_1baadc;
        case 0x1baae0u: goto label_1baae0;
        case 0x1baae4u: goto label_1baae4;
        case 0x1baae8u: goto label_1baae8;
        case 0x1baaecu: goto label_1baaec;
        case 0x1baaf0u: goto label_1baaf0;
        case 0x1baaf4u: goto label_1baaf4;
        case 0x1baaf8u: goto label_1baaf8;
        case 0x1baafcu: goto label_1baafc;
        case 0x1bab00u: goto label_1bab00;
        case 0x1bab04u: goto label_1bab04;
        case 0x1bab08u: goto label_1bab08;
        case 0x1bab0cu: goto label_1bab0c;
        case 0x1bab10u: goto label_1bab10;
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab1cu: goto label_1bab1c;
        case 0x1bab20u: goto label_1bab20;
        case 0x1bab24u: goto label_1bab24;
        case 0x1bab28u: goto label_1bab28;
        case 0x1bab2cu: goto label_1bab2c;
        case 0x1bab30u: goto label_1bab30;
        case 0x1bab34u: goto label_1bab34;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab3cu: goto label_1bab3c;
        case 0x1bab40u: goto label_1bab40;
        case 0x1bab44u: goto label_1bab44;
        case 0x1bab48u: goto label_1bab48;
        case 0x1bab4cu: goto label_1bab4c;
        case 0x1bab50u: goto label_1bab50;
        case 0x1bab54u: goto label_1bab54;
        case 0x1bab58u: goto label_1bab58;
        case 0x1bab5cu: goto label_1bab5c;
        case 0x1bab60u: goto label_1bab60;
        case 0x1bab64u: goto label_1bab64;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab6cu: goto label_1bab6c;
        case 0x1bab70u: goto label_1bab70;
        case 0x1bab74u: goto label_1bab74;
        case 0x1bab78u: goto label_1bab78;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1bab80u: goto label_1bab80;
        case 0x1bab84u: goto label_1bab84;
        case 0x1bab88u: goto label_1bab88;
        case 0x1bab8cu: goto label_1bab8c;
        case 0x1bab90u: goto label_1bab90;
        case 0x1bab94u: goto label_1bab94;
        case 0x1bab98u: goto label_1bab98;
        case 0x1bab9cu: goto label_1bab9c;
        case 0x1baba0u: goto label_1baba0;
        case 0x1baba4u: goto label_1baba4;
        case 0x1baba8u: goto label_1baba8;
        case 0x1babacu: goto label_1babac;
        case 0x1babb0u: goto label_1babb0;
        case 0x1babb4u: goto label_1babb4;
        case 0x1babb8u: goto label_1babb8;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babc0u: goto label_1babc0;
        case 0x1babc4u: goto label_1babc4;
        case 0x1babc8u: goto label_1babc8;
        case 0x1babccu: goto label_1babcc;
        case 0x1babd0u: goto label_1babd0;
        case 0x1babd4u: goto label_1babd4;
        case 0x1babd8u: goto label_1babd8;
        case 0x1babdcu: goto label_1babdc;
        case 0x1babe0u: goto label_1babe0;
        case 0x1babe4u: goto label_1babe4;
        case 0x1babe8u: goto label_1babe8;
        case 0x1babecu: goto label_1babec;
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babf8u: goto label_1babf8;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac00u: goto label_1bac00;
        case 0x1bac04u: goto label_1bac04;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac0cu: goto label_1bac0c;
        case 0x1bac10u: goto label_1bac10;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac1cu: goto label_1bac1c;
        case 0x1bac20u: goto label_1bac20;
        case 0x1bac24u: goto label_1bac24;
        case 0x1bac28u: goto label_1bac28;
        case 0x1bac2cu: goto label_1bac2c;
        case 0x1bac30u: goto label_1bac30;
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac38u: goto label_1bac38;
        case 0x1bac3cu: goto label_1bac3c;
        case 0x1bac40u: goto label_1bac40;
        case 0x1bac44u: goto label_1bac44;
        case 0x1bac48u: goto label_1bac48;
        case 0x1bac4cu: goto label_1bac4c;
        case 0x1bac50u: goto label_1bac50;
        case 0x1bac54u: goto label_1bac54;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac5cu: goto label_1bac5c;
        case 0x1bac60u: goto label_1bac60;
        case 0x1bac64u: goto label_1bac64;
        case 0x1bac68u: goto label_1bac68;
        case 0x1bac6cu: goto label_1bac6c;
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac74u: goto label_1bac74;
        case 0x1bac78u: goto label_1bac78;
        case 0x1bac7cu: goto label_1bac7c;
        case 0x1bac80u: goto label_1bac80;
        case 0x1bac84u: goto label_1bac84;
        case 0x1bac88u: goto label_1bac88;
        case 0x1bac8cu: goto label_1bac8c;
        case 0x1bac90u: goto label_1bac90;
        case 0x1bac94u: goto label_1bac94;
        case 0x1bac98u: goto label_1bac98;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1baca0u: goto label_1baca0;
        case 0x1baca4u: goto label_1baca4;
        case 0x1baca8u: goto label_1baca8;
        case 0x1bacacu: goto label_1bacac;
        case 0x1bacb0u: goto label_1bacb0;
        case 0x1bacb4u: goto label_1bacb4;
        case 0x1bacb8u: goto label_1bacb8;
        case 0x1bacbcu: goto label_1bacbc;
        case 0x1bacc0u: goto label_1bacc0;
        case 0x1bacc4u: goto label_1bacc4;
        case 0x1bacc8u: goto label_1bacc8;
        case 0x1bacccu: goto label_1baccc;
        case 0x1bacd0u: goto label_1bacd0;
        case 0x1bacd4u: goto label_1bacd4;
        case 0x1bacd8u: goto label_1bacd8;
        case 0x1bacdcu: goto label_1bacdc;
        case 0x1bace0u: goto label_1bace0;
        case 0x1bace4u: goto label_1bace4;
        case 0x1bace8u: goto label_1bace8;
        case 0x1bacecu: goto label_1bacec;
        case 0x1bacf0u: goto label_1bacf0;
        case 0x1bacf4u: goto label_1bacf4;
        case 0x1bacf8u: goto label_1bacf8;
        case 0x1bacfcu: goto label_1bacfc;
        case 0x1bad00u: goto label_1bad00;
        case 0x1bad04u: goto label_1bad04;
        case 0x1bad08u: goto label_1bad08;
        case 0x1bad0cu: goto label_1bad0c;
        case 0x1bad10u: goto label_1bad10;
        case 0x1bad14u: goto label_1bad14;
        case 0x1bad18u: goto label_1bad18;
        case 0x1bad1cu: goto label_1bad1c;
        case 0x1bad20u: goto label_1bad20;
        case 0x1bad24u: goto label_1bad24;
        case 0x1bad28u: goto label_1bad28;
        case 0x1bad2cu: goto label_1bad2c;
        case 0x1bad30u: goto label_1bad30;
        case 0x1bad34u: goto label_1bad34;
        case 0x1bad38u: goto label_1bad38;
        case 0x1bad3cu: goto label_1bad3c;
        case 0x1bad40u: goto label_1bad40;
        case 0x1bad44u: goto label_1bad44;
        case 0x1bad48u: goto label_1bad48;
        case 0x1bad4cu: goto label_1bad4c;
        case 0x1bad50u: goto label_1bad50;
        case 0x1bad54u: goto label_1bad54;
        case 0x1bad58u: goto label_1bad58;
        case 0x1bad5cu: goto label_1bad5c;
        case 0x1bad60u: goto label_1bad60;
        case 0x1bad64u: goto label_1bad64;
        default: break;
    }

    ctx->pc = 0x1ba830u;

label_1ba830:
    // 0x1ba830: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1ba830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1ba834:
    // 0x1ba834: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1ba834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1ba838:
    // 0x1ba838: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ba838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1ba83c:
    // 0x1ba83c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba840:
    // 0x1ba840: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ba840u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ba844:
    // 0x1ba844: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1ba844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1ba848:
    // 0x1ba848: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1ba848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1ba84c:
    // 0x1ba84c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1ba84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1ba850:
    // 0x1ba850: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1ba850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1ba854:
    // 0x1ba854: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1ba854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1ba858:
    // 0x1ba858: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ba858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ba85c:
    // 0x1ba85c: 0xc06bc10  jal         func_1AF040
label_1ba860:
    if (ctx->pc == 0x1BA860u) {
        ctx->pc = 0x1BA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA85Cu;
        // 0x1ba860: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA864u;
        goto label_1ba864;
    }
    ctx->pc = 0x1BA85Cu;
    SET_GPR_U32(ctx, 31, 0x1BA864u);
    ctx->pc = 0x1BA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA85Cu;
    // 0x1ba860: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1BA85Cu, 0x1BA864u)) {
        return;
    }
    ctx->pc = 0x1BA864u;
label_1ba864:
    // 0x1ba864: 0x8e240364  lw          $a0, 0x364($s1)
    ctx->pc = 0x1ba864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_1ba868:
    // 0x1ba868: 0xc06f6ea  jal         func_1BDBA8
label_1ba86c:
    if (ctx->pc == 0x1BA86Cu) {
        ctx->pc = 0x1BA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA868u;
        // 0x1ba86c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA870u;
        goto label_1ba870;
    }
    ctx->pc = 0x1BA868u;
    SET_GPR_U32(ctx, 31, 0x1BA870u);
    ctx->pc = 0x1BA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA868u;
    // 0x1ba86c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BDBA8u, 0x1BA868u, 0x1BA870u)) {
        return;
    }
    ctx->pc = 0x1BA870u;
label_1ba870:
    // 0x1ba870: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_1ba874:
    // 0x1ba874: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1ba878:
    if (ctx->pc == 0x1BA878u) {
        ctx->pc = 0x1BA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA874u;
        // 0x1ba878: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA87Cu;
        goto label_1ba87c;
    }
    ctx->pc = 0x1BA874u;
    {
        const bool branch_taken_0x1ba874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA874u;
        // 0x1ba878: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba874) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA87Cu;
label_1ba87c:
    // 0x1ba87c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1ba87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1ba880:
    // 0x1ba880: 0x2447d540  addiu       $a3, $v0, -0x2AC0
    ctx->pc = 0x1ba880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
label_1ba884:
    // 0x1ba884: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1ba884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ba888:
    // 0x1ba888: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1ba888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ba88c:
    // 0x1ba88c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1ba88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1ba890:
    // 0x1ba890: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1ba890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1ba894:
    // 0x1ba894: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1ba894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba898:
    // 0x1ba898: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1ba898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba89c:
    // 0x1ba89c: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x1ba89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba8a0:
    // 0x1ba8a0: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x1ba8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba8a4:
    // 0x1ba8a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1ba8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ba8a8:
    // 0x1ba8a8: 0xc085ba8  jal         func_216EA0
label_1ba8ac:
    if (ctx->pc == 0x1BA8ACu) {
        ctx->pc = 0x1BA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8A8u;
        // 0x1ba8ac: 0x8c640144  lw          $a0, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8B0u;
        goto label_1ba8b0;
    }
    ctx->pc = 0x1BA8A8u;
    SET_GPR_U32(ctx, 31, 0x1BA8B0u);
    ctx->pc = 0x1BA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8A8u;
    // 0x1ba8ac: 0x8c640144  lw          $a0, 0x144($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1BA8A8u, 0x1BA8B0u)) {
        return;
    }
    ctx->pc = 0x1BA8B0u;
label_1ba8b0:
    // 0x1ba8b0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_1ba8b4:
    // 0x1ba8b4: 0x8e2502d8  lw          $a1, 0x2D8($s1)
    ctx->pc = 0x1ba8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_1ba8b8:
    // 0x1ba8b8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1ba8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_1ba8bc:
    // 0x1ba8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba8c0:
    // 0x1ba8c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ba8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8c4:
    // 0x1ba8c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ba8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8c8:
    // 0x1ba8c8: 0x24e7d768  addiu       $a3, $a3, -0x2898
    ctx->pc = 0x1ba8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956904));
label_1ba8cc:
    // 0x1ba8cc: 0xc085cec  jal         func_2173B0
label_1ba8d0:
    if (ctx->pc == 0x1BA8D0u) {
        ctx->pc = 0x1BA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8CCu;
        // 0x1ba8d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8D4u;
        goto label_1ba8d4;
    }
    ctx->pc = 0x1BA8CCu;
    SET_GPR_U32(ctx, 31, 0x1BA8D4u);
    ctx->pc = 0x1BA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8CCu;
    // 0x1ba8d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1BA8CCu, 0x1BA8D4u)) {
        return;
    }
    ctx->pc = 0x1BA8D4u;
label_1ba8d4:
    // 0x1ba8d4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1ba8d8:
    if (ctx->pc == 0x1BA8D8u) {
        ctx->pc = 0x1BA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8D4u;
        // 0x1ba8d8: 0x8e220324  lw          $v0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8DCu;
        goto label_1ba8dc;
    }
    ctx->pc = 0x1BA8D4u;
    {
        const bool branch_taken_0x1ba8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8D4u;
        // 0x1ba8d8: 0x8e220324  lw          $v0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8d4) {
            ctx->pc = 0x1BA940u;
            goto label_1ba940;
        }
    }
    ctx->pc = 0x1BA8DCu;
label_1ba8dc:
    // 0x1ba8dc: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x1ba8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_1ba8e0:
    // 0x1ba8e0: 0x26300368  addiu       $s0, $s1, 0x368
    ctx->pc = 0x1ba8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 872));
label_1ba8e4:
    // 0x1ba8e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ba8e8:
    // 0x1ba8e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ba8ec:
    // 0x1ba8ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ba8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba8f0:
    // 0x1ba8f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ba8f4:
    if (ctx->pc == 0x1BA8F4u) {
        ctx->pc = 0x1BA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F0u;
        // 0x1ba8f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8F8u;
        goto label_1ba8f8;
    }
    ctx->pc = 0x1BA8F0u;
    {
        const bool branch_taken_0x1ba8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F0u;
        // 0x1ba8f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8f0) {
            ctx->pc = 0x1BA8FCu;
            goto label_1ba8fc;
        }
    }
    ctx->pc = 0x1BA8F8u;
label_1ba8f8:
    // 0x1ba8f8: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1ba8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ba8fc:
    // 0x1ba8fc: 0xc06f8b4  jal         func_1BE2D0
label_1ba900:
    if (ctx->pc == 0x1BA900u) {
        ctx->pc = 0x1BA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8FCu;
        // 0x1ba900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA904u;
        goto label_1ba904;
    }
    ctx->pc = 0x1BA8FCu;
    SET_GPR_U32(ctx, 31, 0x1BA904u);
    ctx->pc = 0x1BA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8FCu;
    // 0x1ba900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE2D0u, 0x1BA8FCu, 0x1BA904u)) {
        return;
    }
    ctx->pc = 0x1BA904u;
label_1ba904:
    // 0x1ba904: 0x8e2c0354  lw          $t4, 0x354($s1)
    ctx->pc = 0x1ba904u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 852)));
label_1ba908:
    // 0x1ba908: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ba908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba90c:
    // 0x1ba90c: 0x8e230358  lw          $v1, 0x358($s1)
    ctx->pc = 0x1ba90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 856)));
label_1ba910:
    // 0x1ba910: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1ba910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba914:
    // 0x1ba914: 0x8e24035c  lw          $a0, 0x35C($s1)
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_1ba918:
    // 0x1ba918: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ba918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba91c:
    // 0x1ba91c: 0x8e280324  lw          $t0, 0x324($s1)
    ctx->pc = 0x1ba91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_1ba920:
    // 0x1ba920: 0x2626033c  addiu       $a2, $s1, 0x33C
    ctx->pc = 0x1ba920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 828));
label_1ba924:
    // 0x1ba924: 0x8e2a02dc  lw          $t2, 0x2DC($s1)
    ctx->pc = 0x1ba924u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_1ba928:
    // 0x1ba928: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x1ba928u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ba92c:
    // 0x1ba92c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1ba92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_1ba930:
    // 0x1ba930: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ba930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1ba934:
    // 0x1ba934: 0xc06f2dc  jal         func_1BCB70
label_1ba938:
    if (ctx->pc == 0x1BA938u) {
        ctx->pc = 0x1BA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA934u;
        // 0x1ba938: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA93Cu;
        goto label_1ba93c;
    }
    ctx->pc = 0x1BA934u;
    SET_GPR_U32(ctx, 31, 0x1BA93Cu);
    ctx->pc = 0x1BA938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA934u;
    // 0x1ba938: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BCB70u, 0x1BA934u, 0x1BA93Cu)) {
        return;
    }
    ctx->pc = 0x1BA93Cu;
label_1ba93c:
    // 0x1ba93c: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1ba93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_1ba940:
    // 0x1ba940: 0x584000f9  blezl       $v0, . + 4 + (0xF9 << 2)
label_1ba944:
    if (ctx->pc == 0x1BA944u) {
        ctx->pc = 0x1BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA940u;
        // 0x1ba944: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA948u;
        goto label_1ba948;
    }
    ctx->pc = 0x1BA940u;
    {
        const bool branch_taken_0x1ba940 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1ba940) {
            ctx->pc = 0x1BA944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA940u;
            // 0x1ba944: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD28u;
            goto label_1bad28;
        }
    }
    ctx->pc = 0x1BA948u;
label_1ba948:
    // 0x1ba948: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1ba948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1ba94c:
    // 0x1ba94c: 0xc085ba8  jal         func_216EA0
label_1ba950:
    if (ctx->pc == 0x1BA950u) {
        ctx->pc = 0x1BA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA94Cu;
        // 0x1ba950: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA954u;
        goto label_1ba954;
    }
    ctx->pc = 0x1BA94Cu;
    SET_GPR_U32(ctx, 31, 0x1BA954u);
    ctx->pc = 0x1BA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA94Cu;
    // 0x1ba950: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1BA94Cu, 0x1BA954u)) {
        return;
    }
    ctx->pc = 0x1BA954u;
label_1ba954:
    // 0x1ba954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ba954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba958:
    // 0x1ba958: 0xc06f8b4  jal         func_1BE2D0
label_1ba95c:
    if (ctx->pc == 0x1BA95Cu) {
        ctx->pc = 0x1BA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA958u;
        // 0x1ba95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA960u;
        goto label_1ba960;
    }
    ctx->pc = 0x1BA958u;
    SET_GPR_U32(ctx, 31, 0x1BA960u);
    ctx->pc = 0x1BA95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA958u;
    // 0x1ba95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE2D0u, 0x1BA958u, 0x1BA960u)) {
        return;
    }
    ctx->pc = 0x1BA960u;
label_1ba960:
    // 0x1ba960: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1ba960u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba964:
    // 0x1ba964: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x1ba964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_1ba968:
    // 0x1ba968: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1ba968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1ba96c:
    // 0x1ba96c: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_1ba970:
    if (ctx->pc == 0x1BA970u) {
        ctx->pc = 0x1BA974u;
        goto label_1ba974;
    }
    ctx->pc = 0x1BA96Cu;
    {
        const bool branch_taken_0x1ba96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba96c) {
            ctx->pc = 0x1BABECu;
            goto label_1babec;
        }
    }
    ctx->pc = 0x1BA974u;
label_1ba974:
    // 0x1ba974: 0x124000eb  beqz        $s2, . + 4 + (0xEB << 2)
label_1ba978:
    if (ctx->pc == 0x1BA978u) {
        ctx->pc = 0x1BA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA974u;
        // 0x1ba978: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA97Cu;
        goto label_1ba97c;
    }
    ctx->pc = 0x1BA974u;
    {
        const bool branch_taken_0x1ba974 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA974u;
        // 0x1ba978: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba974) {
            ctx->pc = 0x1BAD24u;
            goto label_1bad24;
        }
    }
    ctx->pc = 0x1BA97Cu;
label_1ba97c:
    // 0x1ba97c: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x1ba97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
label_1ba980:
    // 0x1ba980: 0x10750003  beq         $v1, $s5, . + 4 + (0x3 << 2)
label_1ba984:
    if (ctx->pc == 0x1BA984u) {
        ctx->pc = 0x1BA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA980u;
        // 0x1ba984: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA988u;
        goto label_1ba988;
    }
    ctx->pc = 0x1BA980u;
    {
        const bool branch_taken_0x1ba980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1BA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA980u;
        // 0x1ba984: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba980) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA988u;
label_1ba988:
    // 0x1ba988: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_1ba98c:
    if (ctx->pc == 0x1BA98Cu) {
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA988u;
        // 0x1ba98c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA990u;
        goto label_1ba990;
    }
    ctx->pc = 0x1BA988u;
    {
        const bool branch_taken_0x1ba988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA988u;
        // 0x1ba98c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba988) {
            ctx->pc = 0x1BAA98u;
            goto label_1baa98;
        }
    }
    ctx->pc = 0x1BA990u;
label_1ba990:
    // 0x1ba990: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ba990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ba994:
    // 0x1ba994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba998:
    // 0x1ba998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba99c:
    // 0x1ba99c: 0xc0c493d  jal         func_3124F4
label_1ba9a0:
    if (ctx->pc == 0x1BA9A0u) {
        ctx->pc = 0x1BA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA99Cu;
        // 0x1ba9a0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9A4u;
        goto label_1ba9a4;
    }
    ctx->pc = 0x1BA99Cu;
    SET_GPR_U32(ctx, 31, 0x1BA9A4u);
    ctx->pc = 0x1BA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA99Cu;
    // 0x1ba9a0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA99Cu, 0x1BA9A4u)) {
        return;
    }
    ctx->pc = 0x1BA9A4u;
label_1ba9a4:
    // 0x1ba9a4: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x1ba9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
label_1ba9a8:
    // 0x1ba9a8: 0x14750004  bne         $v1, $s5, . + 4 + (0x4 << 2)
label_1ba9ac:
    if (ctx->pc == 0x1BA9ACu) {
        ctx->pc = 0x1BA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A8u;
        // 0x1ba9ac: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9B0u;
        goto label_1ba9b0;
    }
    ctx->pc = 0x1BA9A8u;
    {
        const bool branch_taken_0x1ba9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A8u;
        // 0x1ba9ac: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a8) {
            ctx->pc = 0x1BA9BCu;
            goto label_1ba9bc;
        }
    }
    ctx->pc = 0x1BA9B0u;
label_1ba9b0:
    // 0x1ba9b0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1ba9b4:
    // 0x1ba9b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ba9b8:
    if (ctx->pc == 0x1BA9B8u) {
        ctx->pc = 0x1BA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9B4u;
        // 0x1ba9b8: 0x8e660058  lw          $a2, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9BCu;
        goto label_1ba9bc;
    }
    ctx->pc = 0x1BA9B4u;
    {
        const bool branch_taken_0x1ba9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9B4u;
        // 0x1ba9b8: 0x8e660058  lw          $a2, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9b4) {
            ctx->pc = 0x1BA9D0u;
            goto label_1ba9d0;
        }
    }
    ctx->pc = 0x1BA9BCu;
label_1ba9bc:
    // 0x1ba9bc: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1ba9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1ba9c0:
    // 0x1ba9c0: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x1ba9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_1ba9c4:
    // 0x1ba9c4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1ba9c8:
    if (ctx->pc == 0x1BA9C8u) {
        ctx->pc = 0x1BA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9C4u;
        // 0x1ba9c8: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9CCu;
        goto label_1ba9cc;
    }
    ctx->pc = 0x1BA9C4u;
    {
        const bool branch_taken_0x1ba9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9C4u;
        // 0x1ba9c8: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9c4) {
            ctx->pc = 0x1BA9E4u;
            goto label_1ba9e4;
        }
    }
    ctx->pc = 0x1BA9CCu;
label_1ba9cc:
    // 0x1ba9cc: 0x8e660064  lw          $a2, 0x64($s3)
    ctx->pc = 0x1ba9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_1ba9d0:
    // 0x1ba9d0: 0x24a5d550  addiu       $a1, $a1, -0x2AB0
    ctx->pc = 0x1ba9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
label_1ba9d4:
    // 0x1ba9d4: 0xc0c5380  jal         func_314E00
label_1ba9d8:
    if (ctx->pc == 0x1BA9D8u) {
        ctx->pc = 0x1BA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9D4u;
        // 0x1ba9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9DCu;
        goto label_1ba9dc;
    }
    ctx->pc = 0x1BA9D4u;
    SET_GPR_U32(ctx, 31, 0x1BA9DCu);
    ctx->pc = 0x1BA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9D4u;
    // 0x1ba9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1BA9D4u, 0x1BA9DCu)) {
        return;
    }
    ctx->pc = 0x1BA9DCu;
label_1ba9dc:
    // 0x1ba9dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ba9e0:
    if (ctx->pc == 0x1BA9E0u) {
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9E4u;
        goto label_1ba9e4;
    }
    ctx->pc = 0x1BA9DCu;
    {
        const bool branch_taken_0x1ba9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9dc) {
            ctx->pc = 0x1BA9FCu;
            goto label_1ba9fc;
        }
    }
    ctx->pc = 0x1BA9E4u;
label_1ba9e4:
    // 0x1ba9e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ba9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1ba9e8:
    // 0x1ba9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba9ec:
    // 0x1ba9ec: 0x24a5d558  addiu       $a1, $a1, -0x2AA8
    ctx->pc = 0x1ba9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956376));
label_1ba9f0:
    // 0x1ba9f0: 0xc0c5380  jal         func_314E00
label_1ba9f4:
    if (ctx->pc == 0x1BA9F4u) {
        ctx->pc = 0x1BA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9F0u;
        // 0x1ba9f4: 0x2406221e  addiu       $a2, $zero, 0x221E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8734));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9F8u;
        goto label_1ba9f8;
    }
    ctx->pc = 0x1BA9F0u;
    SET_GPR_U32(ctx, 31, 0x1BA9F8u);
    ctx->pc = 0x1BA9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9F0u;
    // 0x1ba9f4: 0x2406221e  addiu       $a2, $zero, 0x221E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8734));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1BA9F0u, 0x1BA9F8u)) {
        return;
    }
    ctx->pc = 0x1BA9F8u;
label_1ba9f8:
    // 0x1ba9f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba9fc:
    // 0x1ba9fc: 0x244392d0  addiu       $v1, $v0, -0x6D30
    ctx->pc = 0x1ba9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
label_1baa00:
    // 0x1baa00: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x1baa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1baa04:
    // 0x1baa04: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x1baa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1baa08:
    // 0x1baa08: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x1baa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1baa0c:
    // 0x1baa0c: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x1baa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1baa10:
    // 0x1baa10: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x1baa10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1baa14:
    // 0x1baa14: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x1baa14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1baa18:
    // 0x1baa18: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x1baa18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1baa1c:
    // 0x1baa1c: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x1baa1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1baa20:
    // 0x1baa20: 0x9fa40064  lwu         $a0, 0x64($sp)
    ctx->pc = 0x1baa20u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1baa24:
    // 0x1baa24: 0x9fa20060  lwu         $v0, 0x60($sp)
    ctx->pc = 0x1baa24u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1baa28:
    // 0x1baa28: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1baa28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1baa2c:
    // 0x1baa2c: 0xc06cdf0  jal         func_1B37C0
label_1baa30:
    if (ctx->pc == 0x1BAA30u) {
        ctx->pc = 0x1BAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA2Cu;
        // 0x1baa30: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA34u;
        goto label_1baa34;
    }
    ctx->pc = 0x1BAA2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA34u);
    ctx->pc = 0x1BAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA2Cu;
    // 0x1baa30: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1BAA2Cu, 0x1BAA34u)) {
        return;
    }
    ctx->pc = 0x1BAA34u;
label_1baa34:
    // 0x1baa34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1baa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1baa38:
    // 0x1baa38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1baa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1baa3c:
    // 0x1baa3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1baa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1baa40:
    // 0x1baa40: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1baa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1baa44:
    // 0x1baa44: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1baa44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1baa48:
    // 0x1baa48: 0xc06c8ba  jal         func_1B22E8
label_1baa4c:
    if (ctx->pc == 0x1BAA4Cu) {
        ctx->pc = 0x1BAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA48u;
        // 0x1baa4c: 0xc7b40020  lwc1        $f20, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA50u;
        goto label_1baa50;
    }
    ctx->pc = 0x1BAA48u;
    SET_GPR_U32(ctx, 31, 0x1BAA50u);
    ctx->pc = 0x1BAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA48u;
    // 0x1baa4c: 0xc7b40020  lwc1        $f20, 0x20($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1BAA48u, 0x1BAA50u)) {
        return;
    }
    ctx->pc = 0x1BAA50u;
label_1baa50:
    // 0x1baa50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1baa50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baa54:
    // 0x1baa54: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1baa58:
    if (ctx->pc == 0x1BAA58u) {
        ctx->pc = 0x1BAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA54u;
        // 0x1baa58: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA5Cu;
        goto label_1baa5c;
    }
    ctx->pc = 0x1BAA54u;
    {
        const bool branch_taken_0x1baa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baa54) {
            ctx->pc = 0x1BAA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAA54u;
            // 0x1baa58: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAA6Cu;
            goto label_1baa6c;
        }
    }
    ctx->pc = 0x1BAA5Cu;
label_1baa5c:
    // 0x1baa5c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1baa60:
    // 0x1baa60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1baa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baa64:
    // 0x1baa64: 0x0  nop
    ctx->pc = 0x1baa64u;
    // NOP
label_1baa68:
    // 0x1baa68: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1baa68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1baa6c:
    // 0x1baa6c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1baa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_1baa70:
    // 0x1baa70: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1baa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_1baa74:
    // 0x1baa74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1baa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1baa78:
    // 0x1baa78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1baa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1baa7c:
    // 0x1baa7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1baa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1baa80:
    // 0x1baa80: 0x24e7d7a0  addiu       $a3, $a3, -0x2860
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956960));
label_1baa84:
    // 0x1baa84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1baa88:
    // 0x1baa88: 0xc085cac  jal         func_2172B0
label_1baa8c:
    if (ctx->pc == 0x1BAA8Cu) {
        ctx->pc = 0x1BAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA88u;
        // 0x1baa8c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA90u;
        goto label_1baa90;
    }
    ctx->pc = 0x1BAA88u;
    SET_GPR_U32(ctx, 31, 0x1BAA90u);
    ctx->pc = 0x1BAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA88u;
    // 0x1baa8c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1BAA88u, 0x1BAA90u)) {
        return;
    }
    ctx->pc = 0x1BAA90u;
label_1baa90:
    // 0x1baa90: 0x10000056  b           . + 4 + (0x56 << 2)
label_1baa94:
    if (ctx->pc == 0x1BAA94u) {
        ctx->pc = 0x1BAA98u;
        goto label_1baa98;
    }
    ctx->pc = 0x1BAA90u;
    {
        const bool branch_taken_0x1baa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa90) {
            ctx->pc = 0x1BABECu;
            goto label_1babec;
        }
    }
    ctx->pc = 0x1BAA98u;
label_1baa98:
    // 0x1baa98: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1baa9c:
    if (ctx->pc == 0x1BAA9Cu) {
        ctx->pc = 0x1BAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA98u;
        // 0x1baa9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAA0u;
        goto label_1baaa0;
    }
    ctx->pc = 0x1BAA98u;
    {
        const bool branch_taken_0x1baa98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA98u;
        // 0x1baa9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa98) {
            ctx->pc = 0x1BAAC8u;
            goto label_1baac8;
        }
    }
    ctx->pc = 0x1BAAA0u;
label_1baaa0:
    // 0x1baaa0: 0xc6c00080  lwc1        $f0, 0x80($s6)
    ctx->pc = 0x1baaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1baaa4:
    // 0x1baaa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1baaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1baaa8:
    // 0x1baaa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1baaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1baaac:
    // 0x1baaac: 0x0  nop
    ctx->pc = 0x1baaacu;
    // NOP
label_1baab0:
    // 0x1baab0: 0x0  nop
    ctx->pc = 0x1baab0u;
    // NOP
label_1baab4:
    // 0x1baab4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1baab4u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
label_1baab8:
    // 0x1baab8: 0xc06eb5a  jal         func_1BAD68
label_1baabc:
    if (ctx->pc == 0x1BAABCu) {
        ctx->pc = 0x1BAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAB8u;
        // 0x1baabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAC0u;
        goto label_1baac0;
    }
    ctx->pc = 0x1BAAB8u;
    SET_GPR_U32(ctx, 31, 0x1BAAC0u);
    ctx->pc = 0x1BAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAB8u;
    // 0x1baabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BAD68u, 0x1BAAB8u, 0x1BAAC0u)) {
        return;
    }
    ctx->pc = 0x1BAAC0u;
label_1baac0:
    // 0x1baac0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1baac4:
    if (ctx->pc == 0x1BAAC4u) {
        ctx->pc = 0x1BAAC8u;
        goto label_1baac8;
    }
    ctx->pc = 0x1BAAC0u;
    {
        const bool branch_taken_0x1baac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baac0) {
            ctx->pc = 0x1BABECu;
            goto label_1babec;
        }
    }
    ctx->pc = 0x1BAAC8u;
label_1baac8:
    // 0x1baac8: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_1baacc:
    if (ctx->pc == 0x1BAACCu) {
        ctx->pc = 0x1BAAD0u;
        goto label_1baad0;
    }
    ctx->pc = 0x1BAAC8u;
    {
        const bool branch_taken_0x1baac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baac8) {
            ctx->pc = 0x1BABECu;
            goto label_1babec;
        }
    }
    ctx->pc = 0x1BAAD0u;
label_1baad0:
    // 0x1baad0: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_1baad4:
    // 0x1baad4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1baad8:
    if (ctx->pc == 0x1BAAD8u) {
        ctx->pc = 0x1BAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAD4u;
        // 0x1baad8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAADCu;
        goto label_1baadc;
    }
    ctx->pc = 0x1BAAD4u;
    {
        const bool branch_taken_0x1baad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAD4u;
        // 0x1baad8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baad4) {
            ctx->pc = 0x1BABECu;
            goto label_1babec;
        }
    }
    ctx->pc = 0x1BAADCu;
label_1baadc:
    // 0x1baadc: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1baadcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1baae0:
    // 0x1baae0: 0x2610108c  addiu       $s0, $s0, 0x108C
    ctx->pc = 0x1baae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4236));
label_1baae4:
    // 0x1baae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1baae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1baae8:
    // 0x1baae8: 0x2443d7a0  addiu       $v1, $v0, -0x2860
    ctx->pc = 0x1baae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956960));
label_1baaec:
    // 0x1baaec: 0x88680003  lwl         $t0, 0x3($v1)
    ctx->pc = 0x1baaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_1baaf0:
    // 0x1baaf0: 0x98680000  lwr         $t0, 0x0($v1)
    ctx->pc = 0x1baaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_1baaf4:
    // 0x1baaf4: 0xaba80023  swl         $t0, 0x23($sp)
    ctx->pc = 0x1baaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1baaf8:
    // 0x1baaf8: 0xbba80020  swr         $t0, 0x20($sp)
    ctx->pc = 0x1baaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1baafc:
    // 0x1baafc: 0xc06f8b4  jal         func_1BE2D0
label_1bab00:
    if (ctx->pc == 0x1BAB00u) {
        ctx->pc = 0x1BAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAFCu;
        // 0x1bab00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB04u;
        goto label_1bab04;
    }
    ctx->pc = 0x1BAAFCu;
    SET_GPR_U32(ctx, 31, 0x1BAB04u);
    ctx->pc = 0x1BAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAFCu;
    // 0x1bab00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE2D0u, 0x1BAAFCu, 0x1BAB04u)) {
        return;
    }
    ctx->pc = 0x1BAB04u;
label_1bab04:
    // 0x1bab04: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1bab08:
    // 0x1bab08: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1bab0c:
    // 0x1bab0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bab10:
    // 0x1bab10: 0xc0f809  jalr        $a2
label_1bab14:
    if (ctx->pc == 0x1BAB14u) {
        ctx->pc = 0x1BAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB10u;
        // 0x1bab14: 0x8c65932c  lw          $a1, -0x6CD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB18u;
        goto label_1bab18;
    }
    ctx->pc = 0x1BAB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BAB18u);
        ctx->pc = 0x1BAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB10u;
        // 0x1bab14: 0x8c65932c  lw          $a1, -0x6CD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939436)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAB10u, 0x1BAB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAB18u;
label_1bab18:
    // 0x1bab18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1bab1c:
    if (ctx->pc == 0x1BAB1Cu) {
        ctx->pc = 0x1BAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB18u;
        // 0x1bab1c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB20u;
        goto label_1bab20;
    }
    ctx->pc = 0x1BAB18u;
    {
        const bool branch_taken_0x1bab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB18u;
        // 0x1bab1c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab18) {
            ctx->pc = 0x1BAB40u;
            goto label_1bab40;
        }
    }
    ctx->pc = 0x1BAB20u;
label_1bab20:
    // 0x1bab20: 0x8c438474  lw          $v1, -0x7B8C($v0)
    ctx->pc = 0x1bab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935668)));
label_1bab24:
    // 0x1bab24: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1bab28:
    if (ctx->pc == 0x1BAB28u) {
        ctx->pc = 0x1BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB24u;
        // 0x1bab28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB2Cu;
        goto label_1bab2c;
    }
    ctx->pc = 0x1BAB24u;
    {
        const bool branch_taken_0x1bab24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB24u;
        // 0x1bab28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab24) {
            ctx->pc = 0x1BAB3Cu;
            goto label_1bab3c;
        }
    }
    ctx->pc = 0x1BAB2Cu;
label_1bab2c:
    // 0x1bab2c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1bab30:
    // 0x1bab30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bab30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bab34:
    // 0x1bab34: 0x8c628478  lw          $v0, -0x7B88($v1)
    ctx->pc = 0x1bab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935672)));
label_1bab38:
    // 0x1bab38: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1bab38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_1bab3c:
    // 0x1bab3c: 0x38940001  xori        $s4, $a0, 0x1
    ctx->pc = 0x1bab3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_1bab40:
    // 0x1bab40: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1bab44:
    if (ctx->pc == 0x1BAB44u) {
        ctx->pc = 0x1BAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB40u;
        // 0x1bab44: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB48u;
        goto label_1bab48;
    }
    ctx->pc = 0x1BAB40u;
    {
        const bool branch_taken_0x1bab40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB40u;
        // 0x1bab44: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab40) {
            ctx->pc = 0x1BAB4Cu;
            goto label_1bab4c;
        }
    }
    ctx->pc = 0x1BAB48u;
label_1bab48:
    // 0x1bab48: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x1bab48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
label_1bab4c:
    // 0x1bab4c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bab50:
    // 0x1bab50: 0x244792d0  addiu       $a3, $v0, -0x6D30
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
label_1bab54:
    // 0x1bab54: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1bab54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bab58:
    // 0x1bab58: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1bab58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bab5c:
    // 0x1bab5c: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1bab5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bab60:
    // 0x1bab60: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1bab60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bab64:
    // 0x1bab64: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x1bab64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1bab68:
    // 0x1bab68: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x1bab68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1bab6c:
    // 0x1bab6c: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x1bab6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bab70:
    // 0x1bab70: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x1bab70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bab74:
    // 0x1bab74: 0x9fa40054  lwu         $a0, 0x54($sp)
    ctx->pc = 0x1bab74u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1bab78:
    // 0x1bab78: 0x9fa20050  lwu         $v0, 0x50($sp)
    ctx->pc = 0x1bab78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1bab7c:
    // 0x1bab7c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bab7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1bab80:
    // 0x1bab80: 0xc06cdf0  jal         func_1B37C0
label_1bab84:
    if (ctx->pc == 0x1BAB84u) {
        ctx->pc = 0x1BAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB80u;
        // 0x1bab84: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB88u;
        goto label_1bab88;
    }
    ctx->pc = 0x1BAB80u;
    SET_GPR_U32(ctx, 31, 0x1BAB88u);
    ctx->pc = 0x1BAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB80u;
    // 0x1bab84: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1BAB80u, 0x1BAB88u)) {
        return;
    }
    ctx->pc = 0x1BAB88u;
label_1bab88:
    // 0x1bab88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1bab8c:
    // 0x1bab8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bab8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1bab90:
    // 0x1bab90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1bab94:
    // 0x1bab94: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1bab94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1bab98:
    // 0x1bab98: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1bab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1bab9c:
    // 0x1bab9c: 0xc06c8ba  jal         func_1B22E8
label_1baba0:
    if (ctx->pc == 0x1BABA0u) {
        ctx->pc = 0x1BABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB9Cu;
        // 0x1baba0: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABA4u;
        goto label_1baba4;
    }
    ctx->pc = 0x1BAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BABA4u);
    ctx->pc = 0x1BABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB9Cu;
    // 0x1baba0: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1BAB9Cu, 0x1BABA4u)) {
        return;
    }
    ctx->pc = 0x1BABA4u;
label_1baba4:
    // 0x1baba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1baba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baba8:
    // 0x1baba8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1babac:
    if (ctx->pc == 0x1BABACu) {
        ctx->pc = 0x1BABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABA8u;
        // 0x1babac: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABB0u;
        goto label_1babb0;
    }
    ctx->pc = 0x1BABA8u;
    {
        const bool branch_taken_0x1baba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baba8) {
            ctx->pc = 0x1BABACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BABA8u;
            // 0x1babac: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BABC0u;
            goto label_1babc0;
        }
    }
    ctx->pc = 0x1BABB0u;
label_1babb0:
    // 0x1babb0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1babb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1babb4:
    // 0x1babb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1babb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1babb8:
    // 0x1babb8: 0x0  nop
    ctx->pc = 0x1babb8u;
    // NOP
label_1babbc:
    // 0x1babbc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1babbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1babc0:
    // 0x1babc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1babc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1babc4:
    // 0x1babc4: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1babc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_1babc8:
    // 0x1babc8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_1babcc:
    if (ctx->pc == 0x1BABCCu) {
        ctx->pc = 0x1BABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABC8u;
        // 0x1babcc: 0x8e2502d4  lw          $a1, 0x2D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABD0u;
        goto label_1babd0;
    }
    ctx->pc = 0x1BABC8u;
    {
        const bool branch_taken_0x1babc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babc8) {
            ctx->pc = 0x1BABCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BABC8u;
            // 0x1babcc: 0x8e2502d4  lw          $a1, 0x2D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BABD4u;
            goto label_1babd4;
        }
    }
    ctx->pc = 0x1BABD0u;
label_1babd0:
    // 0x1babd0: 0x8e2502d0  lw          $a1, 0x2D0($s1)
    ctx->pc = 0x1babd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
label_1babd4:
    // 0x1babd4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1babd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_1babd8:
    // 0x1babd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1babd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1babdc:
    // 0x1babdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1babdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1babe0:
    // 0x1babe0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1babe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1babe4:
    // 0x1babe4: 0xc085cac  jal         func_2172B0
label_1babe8:
    if (ctx->pc == 0x1BABE8u) {
        ctx->pc = 0x1BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABE4u;
        // 0x1babe8: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABECu;
        goto label_1babec;
    }
    ctx->pc = 0x1BABE4u;
    SET_GPR_U32(ctx, 31, 0x1BABECu);
    ctx->pc = 0x1BABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABE4u;
    // 0x1babe8: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1BABE4u, 0x1BABECu)) {
        return;
    }
    ctx->pc = 0x1BABECu;
label_1babec:
    // 0x1babec: 0x5240004e  beql        $s2, $zero, . + 4 + (0x4E << 2)
label_1babf0:
    if (ctx->pc == 0x1BABF0u) {
        ctx->pc = 0x1BABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABECu;
        // 0x1babf0: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABF4u;
        goto label_1babf4;
    }
    ctx->pc = 0x1BABECu;
    {
        const bool branch_taken_0x1babec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babec) {
            ctx->pc = 0x1BABF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BABECu;
            // 0x1babf0: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD28u;
            goto label_1bad28;
        }
    }
    ctx->pc = 0x1BABF4u;
label_1babf4:
    // 0x1babf4: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x1babf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_1babf8:
    // 0x1babf8: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1babf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1babfc:
    // 0x1babfc: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
label_1bac00:
    if (ctx->pc == 0x1BAC00u) {
        ctx->pc = 0x1BAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABFCu;
        // 0x1bac00: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC04u;
        goto label_1bac04;
    }
    ctx->pc = 0x1BABFCu;
    {
        const bool branch_taken_0x1babfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1babfc) {
            ctx->pc = 0x1BAC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BABFCu;
            // 0x1bac00: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD28u;
            goto label_1bad28;
        }
    }
    ctx->pc = 0x1BAC04u;
label_1bac04:
    // 0x1bac04: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bac08:
    // 0x1bac08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1bac08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bac0c:
    // 0x1bac0c: 0x244792d8  addiu       $a3, $v0, -0x6D28
    ctx->pc = 0x1bac0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939352));
label_1bac10:
    // 0x1bac10: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1bac10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bac14:
    // 0x1bac14: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1bac14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bac18:
    // 0x1bac18: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1bac18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bac1c:
    // 0x1bac1c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1bac1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bac20:
    // 0x1bac20: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1bac20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac24:
    // 0x1bac24: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1bac24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac28:
    // 0x1bac28: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x1bac28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac2c:
    // 0x1bac2c: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x1bac2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac30:
    // 0x1bac30: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1bac34:
    // 0x1bac34: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1bac34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bac38:
    // 0x1bac38: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1bac3c:
    // 0x1bac3c: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1bac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1bac40:
    // 0x1bac40: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1bac44:
    // 0x1bac44: 0x246292e8  addiu       $v0, $v1, -0x6D18
    ctx->pc = 0x1bac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939368));
label_1bac48:
    // 0x1bac48: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1bac48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1bac4c:
    // 0x1bac4c: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1bac4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1bac50:
    // 0x1bac50: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x1bac50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1bac54:
    // 0x1bac54: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x1bac54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1bac58:
    // 0x1bac58: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1bac58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac5c:
    // 0x1bac5c: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x1bac5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac60:
    // 0x1bac60: 0xb3a9003f  sdl         $t1, 0x3F($sp)
    ctx->pc = 0x1bac60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac64:
    // 0x1bac64: 0xb7a90038  sdr         $t1, 0x38($sp)
    ctx->pc = 0x1bac64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bac68:
    // 0x1bac68: 0xc06cda0  jal         func_1B3680
label_1bac6c:
    if (ctx->pc == 0x1BAC6Cu) {
        ctx->pc = 0x1BAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC68u;
        // 0x1bac6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC70u;
        goto label_1bac70;
    }
    ctx->pc = 0x1BAC68u;
    SET_GPR_U32(ctx, 31, 0x1BAC70u);
    ctx->pc = 0x1BAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC68u;
    // 0x1bac6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1BAC68u, 0x1BAC70u)) {
        return;
    }
    ctx->pc = 0x1BAC70u;
label_1bac70:
    // 0x1bac70: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1bac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_1bac74:
    // 0x1bac74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bac74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bac78:
    // 0x1bac78: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1bac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1bac7c:
    // 0x1bac7c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1bac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1bac80:
    // 0x1bac80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bac84:
    // 0x1bac84: 0xc06cda0  jal         func_1B3680
label_1bac88:
    if (ctx->pc == 0x1BAC88u) {
        ctx->pc = 0x1BAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC84u;
        // 0x1bac88: 0x27a7003c  addiu       $a3, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC8Cu;
        goto label_1bac8c;
    }
    ctx->pc = 0x1BAC84u;
    SET_GPR_U32(ctx, 31, 0x1BAC8Cu);
    ctx->pc = 0x1BAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC84u;
    // 0x1bac88: 0x27a7003c  addiu       $a3, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1BAC84u, 0x1BAC8Cu)) {
        return;
    }
    ctx->pc = 0x1BAC8Cu;
label_1bac8c:
    // 0x1bac8c: 0x8e2502c8  lw          $a1, 0x2C8($s1)
    ctx->pc = 0x1bac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_1bac90:
    // 0x1bac90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bac94:
    // 0x1bac94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bac98:
    // 0x1bac98: 0xc085d44  jal         func_217510
label_1bac9c:
    if (ctx->pc == 0x1BAC9Cu) {
        ctx->pc = 0x1BAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC98u;
        // 0x1bac9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACA0u;
        goto label_1baca0;
    }
    ctx->pc = 0x1BAC98u;
    SET_GPR_U32(ctx, 31, 0x1BACA0u);
    ctx->pc = 0x1BAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC98u;
    // 0x1bac9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x217510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217510u, 0x1BAC98u, 0x1BACA0u)) {
        return;
    }
    ctx->pc = 0x1BACA0u;
label_1baca0:
    // 0x1baca0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1baca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1baca4:
    // 0x1baca4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1baca8:
    if (ctx->pc == 0x1BACA8u) {
        ctx->pc = 0x1BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACA4u;
        // 0x1baca8: 0x3c07006a  lui         $a3, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACACu;
        goto label_1bacac;
    }
    ctx->pc = 0x1BACA4u;
    {
        const bool branch_taken_0x1baca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACA4u;
        // 0x1baca8: 0x3c07006a  lui         $a3, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baca4) {
            ctx->pc = 0x1BAD08u;
            goto label_1bad08;
        }
    }
    ctx->pc = 0x1BACACu;
label_1bacac:
    // 0x1bacac: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1bacacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_1bacb0:
    // 0x1bacb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bacb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bacb4:
    // 0x1bacb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bacb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bacb8:
    // 0x1bacb8: 0x8e2502c8  lw          $a1, 0x2C8($s1)
    ctx->pc = 0x1bacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_1bacbc:
    // 0x1bacbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bacbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bacc0:
    // 0x1bacc0: 0xc085d44  jal         func_217510
label_1bacc4:
    if (ctx->pc == 0x1BACC4u) {
        ctx->pc = 0x1BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC0u;
        // 0x1bacc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACC8u;
        goto label_1bacc8;
    }
    ctx->pc = 0x1BACC0u;
    SET_GPR_U32(ctx, 31, 0x1BACC8u);
    ctx->pc = 0x1BACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACC0u;
    // 0x1bacc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x217510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217510u, 0x1BACC0u, 0x1BACC8u)) {
        return;
    }
    ctx->pc = 0x1BACC8u;
label_1bacc8:
    // 0x1bacc8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bacc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1baccc:
    // 0x1baccc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bacd0:
    if (ctx->pc == 0x1BACD0u) {
        ctx->pc = 0x1BACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACCCu;
        // 0x1bacd0: 0x3c07006a  lui         $a3, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACD4u;
        goto label_1bacd4;
    }
    ctx->pc = 0x1BACCCu;
    {
        const bool branch_taken_0x1baccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACCCu;
        // 0x1bacd0: 0x3c07006a  lui         $a3, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baccc) {
            ctx->pc = 0x1BACE4u;
            goto label_1bace4;
        }
    }
    ctx->pc = 0x1BACD4u;
label_1bacd4:
    // 0x1bacd4: 0x8e2502c8  lw          $a1, 0x2C8($s1)
    ctx->pc = 0x1bacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_1bacd8:
    // 0x1bacd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bacd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bacdc:
    // 0x1bacdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bace0:
    if (ctx->pc == 0x1BACE0u) {
        ctx->pc = 0x1BACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACDCu;
        // 0x1bace0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACE4u;
        goto label_1bace4;
    }
    ctx->pc = 0x1BACDCu;
    {
        const bool branch_taken_0x1bacdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACDCu;
        // 0x1bace0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacdc) {
            ctx->pc = 0x1BACF0u;
            goto label_1bacf0;
        }
    }
    ctx->pc = 0x1BACE4u;
label_1bace4:
    // 0x1bace4: 0x8e2502c8  lw          $a1, 0x2C8($s1)
    ctx->pc = 0x1bace4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_1bace8:
    // 0x1bace8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bacec:
    // 0x1bacec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bacecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bacf0:
    // 0x1bacf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bacf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bacf4:
    // 0x1bacf4: 0x24e7d790  addiu       $a3, $a3, -0x2870
    ctx->pc = 0x1bacf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956944));
label_1bacf8:
    // 0x1bacf8: 0xc085cec  jal         func_2173B0
label_1bacfc:
    if (ctx->pc == 0x1BACFCu) {
        ctx->pc = 0x1BACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACF8u;
        // 0x1bacfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD00u;
        goto label_1bad00;
    }
    ctx->pc = 0x1BACF8u;
    SET_GPR_U32(ctx, 31, 0x1BAD00u);
    ctx->pc = 0x1BACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACF8u;
    // 0x1bacfc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1BACF8u, 0x1BAD00u)) {
        return;
    }
    ctx->pc = 0x1BAD00u;
label_1bad00:
    // 0x1bad00: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bad04:
    if (ctx->pc == 0x1BAD04u) {
        ctx->pc = 0x1BAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD00u;
        // 0x1bad04: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD08u;
        goto label_1bad08;
    }
    ctx->pc = 0x1BAD00u;
    {
        const bool branch_taken_0x1bad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD00u;
        // 0x1bad04: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad00) {
            ctx->pc = 0x1BAD28u;
            goto label_1bad28;
        }
    }
    ctx->pc = 0x1BAD08u;
label_1bad08:
    // 0x1bad08: 0x8e2502c8  lw          $a1, 0x2C8($s1)
    ctx->pc = 0x1bad08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_1bad0c:
    // 0x1bad0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bad10:
    // 0x1bad10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bad10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bad14:
    // 0x1bad14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bad14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bad18:
    // 0x1bad18: 0x24e7d790  addiu       $a3, $a3, -0x2870
    ctx->pc = 0x1bad18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956944));
label_1bad1c:
    // 0x1bad1c: 0xc085cec  jal         func_2173B0
label_1bad20:
    if (ctx->pc == 0x1BAD20u) {
        ctx->pc = 0x1BAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD1Cu;
        // 0x1bad20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD24u;
        goto label_1bad24;
    }
    ctx->pc = 0x1BAD1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD24u);
    ctx->pc = 0x1BAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD1Cu;
    // 0x1bad20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1BAD1Cu, 0x1BAD24u)) {
        return;
    }
    ctx->pc = 0x1BAD24u;
label_1bad24:
    // 0x1bad24: 0x8e240360  lw          $a0, 0x360($s1)
    ctx->pc = 0x1bad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
label_1bad28:
    // 0x1bad28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bad2c:
    // 0x1bad2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bad30:
    if (ctx->pc == 0x1BAD30u) {
        ctx->pc = 0x1BAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD2Cu;
        // 0x1bad30: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD34u;
        goto label_1bad34;
    }
    ctx->pc = 0x1BAD2Cu;
    {
        const bool branch_taken_0x1bad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD2Cu;
        // 0x1bad30: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad2c) {
            ctx->pc = 0x1BAD40u;
            goto label_1bad40;
        }
    }
    ctx->pc = 0x1BAD34u;
label_1bad34:
    // 0x1bad34: 0xc06f1d6  jal         func_1BC758
label_1bad38:
    if (ctx->pc == 0x1BAD38u) {
        ctx->pc = 0x1BAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD34u;
        // 0x1bad38: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD3Cu;
        goto label_1bad3c;
    }
    ctx->pc = 0x1BAD34u;
    SET_GPR_U32(ctx, 31, 0x1BAD3Cu);
    ctx->pc = 0x1BAD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD34u;
    // 0x1bad38: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC758u, 0x1BAD34u, 0x1BAD3Cu)) {
        return;
    }
    ctx->pc = 0x1BAD3Cu;
label_1bad3c:
    // 0x1bad3c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1bad3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1bad40:
    // 0x1bad40: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1bad40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1bad44:
    // 0x1bad44: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1bad44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bad48:
    // 0x1bad48: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1bad48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bad4c:
    // 0x1bad4c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1bad4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bad50:
    // 0x1bad50: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1bad50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bad54:
    // 0x1bad54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1bad54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bad58:
    // 0x1bad58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bad5c:
    // 0x1bad5c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1bad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bad60:
    // 0x1bad60: 0x3e00008  jr          $ra
label_1bad64:
    if (ctx->pc == 0x1BAD64u) {
        ctx->pc = 0x1BAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD60u;
        // 0x1bad64: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD68u;
        goto label_fallthrough_0x1bad60;
    }
    ctx->pc = 0x1BAD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD60u;
        // 0x1bad64: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bad60:
    ctx->pc = 0x1BAD68u;
}
